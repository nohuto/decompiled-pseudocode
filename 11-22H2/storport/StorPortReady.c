/*
 * XREFs of StorPortReady @ 0x1C0046890
 * Callers:
 *     StorPortReadyVrfy @ 0x1C00B16B0 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     WPP_SF_q @ 0x1C003E93C (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v2; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  Adapter = RaidpPortGetAdapter(a1);
  v2 = (__int64)Adapter;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 19, retaddr, (__int64)Adapter, 0LL, 0LL, 0LL);
  if ( v2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x16u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
        v2);
    }
    v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v2 + 1024));
    if ( v3 )
    {
      LODWORD(v3[1].Next) = 134684674;
      LODWORD(v3[2].Next) = 8;
      RaidQueueDeferredItem((char *)(v2 + 944), v3);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0092468 & 0x800) != 0 )
      DbgLogRequest(v2, 22, retaddr, 1095LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
