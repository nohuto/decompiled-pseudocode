/*
 * XREFs of StorPortReady @ 0x1C0043A70
 * Callers:
 *     StorPortReadyVrfy @ 0x1C0095720 (StorPortReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 */

char __fastcall StorPortReady(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v2; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  Adapter = RaidpPortGetAdapter(a1);
  v2 = (__int64)Adapter;
  if ( (qword_1C00793A8 & 0x200) != 0 )
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
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        v2);
    }
    v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v2 + 960));
    if ( v3 )
    {
      LODWORD(v3[1].Next) = 134684674;
      LODWORD(v3[2].Next) = 8;
      RaidQueueDeferredItem((char *)(v2 + 880), v3);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00793A8 & 0x800) != 0 )
      DbgLogRequest(v2, 22, retaddr, 1097LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
