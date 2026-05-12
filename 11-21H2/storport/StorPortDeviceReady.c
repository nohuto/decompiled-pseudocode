/*
 * XREFs of StorPortDeviceReady @ 0x1C0043060
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1C00951B0 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v4; // rbp
  int v5; // r15d
  int v6; // r14d
  _DWORD *Adapter; // rax
  __int64 v8; // rsi
  __int64 Unit; // rax
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  HIBYTE(v13) = 0;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  Adapter = RaidpPortGetAdapter(a1);
  v8 = (__int64)Adapter;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 21, retaddr, (__int64)Adapter, 0LL, v4 | ((v5 | (unsigned int)(v6 << 8)) << 8), 0LL);
  if ( v8 )
  {
    LOBYTE(v13) = v6;
    BYTE1(v13) = v5;
    BYTE2(v13) = v4;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v12) = v4;
      LODWORD(v11) = v5;
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x14u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        v6,
        v11,
        v12);
    }
    Unit = RaidAdapterFindUnit(v8, v13);
    if ( Unit )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1552), 134684676, 134684677) == 134684677
        && Unit != -1536 )
      {
        *(_DWORD *)(Unit + 1568) = 10;
        *(_DWORD *)(Unit + 1572) = v13;
        RaidQueueDeferredItem((char *)(v8 + 880), (struct _SLIST_ENTRY *)(Unit + 1536));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C00793A8 & 0x800) != 0 )
        DbgLogRequest(v8, 22, retaddr, 956LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
