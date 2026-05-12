/*
 * XREFs of StorPortDeviceReady @ 0x1C0045CA0
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1C00B11B0 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
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
  if ( (qword_1C0092468 & 0x200) != 0 )
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
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
        v6,
        v11,
        v12);
    }
    Unit = RaidAdapterFindUnit(v8, v13);
    if ( Unit )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1600), 134684676, 134684677) == 134684677
        && Unit != -1584 )
      {
        *(_DWORD *)(Unit + 1616) = 10;
        *(_DWORD *)(Unit + 1620) = v13;
        RaidQueueDeferredItem((char *)(v8 + 944), (struct _SLIST_ENTRY *)(Unit + 1584));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0092468 & 0x800) != 0 )
        DbgLogRequest(v8, 22, retaddr, 954LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
