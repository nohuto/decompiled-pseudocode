/*
 * XREFs of StorPortDeviceBusy @ 0x1C0042ED0
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1C0095190 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_dddd @ 0x1C00476A4 (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  int v6; // r12d
  unsigned int v7; // r14d
  _DWORD *Adapter; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 Unit; // rax
  unsigned int v14; // [rsp+40h] [rbp-28h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  HIBYTE(v14) = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Adapter = RaidpPortGetAdapter(a1);
  v11 = (__int64)Adapter;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 20, retaddr, (__int64)Adapter, a5, v5 | ((v6 | (v7 << 8)) << 8), 0LL);
  if ( v11 )
  {
    LOBYTE(v14) = v7;
    BYTE1(v14) = v6;
    BYTE2(v14) = v5;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v9, v10, v7, v6, v5, a5);
    }
    Unit = RaidAdapterFindUnit(v11, v14);
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 2148);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1472), 134684676, 134684677) == 134684677
        && Unit != -1456 )
      {
        *(_DWORD *)(Unit + 1488) = 9;
        *(_DWORD *)(Unit + 1492) = v14;
        *(_DWORD *)(Unit + 1496) = a5;
        RaidQueueDeferredItem((char *)(v11 + 880), (struct _SLIST_ENTRY *)(Unit + 1456));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C00793A8 & 0x800) != 0 )
        DbgLogRequest(v11, 22, retaddr, 867LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
