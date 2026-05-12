/*
 * XREFs of StorPortBusy @ 0x1C0045840
 * Callers:
 *     StorPortBusyVrfy @ 0x1C00B1150 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     WPP_SF_qD @ 0x1C003E980 (WPP_SF_qD.c)
 */

char __fastcall StorPortBusy(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _DWORD *Adapter; // rax
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // rax
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  Adapter = RaidpPortGetAdapter(a1);
  v4 = (__int64)Adapter;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 18, retaddr, (__int64)Adapter, v2, 0LL, 0LL);
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 5292);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v7) = v2;
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x15u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
        v4,
        v7);
    }
    v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 1024));
    if ( v5 )
    {
      LODWORD(v5[1].Next) = 134684674;
      LODWORD(v5[2].Next) = 7;
      *((_DWORD *)&v5[2].Next + 2) = v2;
      RaidQueueDeferredItem((char *)(v4 + 944), v5);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C0092468 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 1030LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
