/*
 * XREFs of StorPortBusy @ 0x1C0042C00
 * Callers:
 *     StorPortBusyVrfy @ 0x1C0095150 (StorPortBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_qD @ 0x1C003C5EC (WPP_SF_qD.c)
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
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 18, retaddr, (__int64)Adapter, v2, 0LL, 0LL);
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 5228);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v7) = v2;
      WPP_SF_qD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x15u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        v4,
        v7);
    }
    v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + 960));
    if ( v5 )
    {
      LODWORD(v5[1].Next) = 134684674;
      LODWORD(v5[2].Next) = 7;
      *((_DWORD *)&v5[2].Next + 2) = v2;
      RaidQueueDeferredItem((char *)(v4 + 880), v5);
      return 1;
    }
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00793A8 & 0x800) != 0 )
      DbgLogRequest(v4, 22, retaddr, 1032LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
