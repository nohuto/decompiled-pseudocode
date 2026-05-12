/*
 * XREFs of StorPortPauseDevice @ 0x1C0046510
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1C00B1670 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidQueueDeferredItem @ 0x1C0014380 (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     McTemplateK0pqquuu_EtwWriteTransfer @ 0x1C0043D08 (McTemplateK0pqquuu_EtwWriteTransfer.c)
 *     RaidPauseUnitQueue @ 0x1C0044AB0 (RaidPauseUnitQueue.c)
 */

char __fastcall StorPortPauseDevice(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r15d
  int v8; // r12d
  _DWORD *Adapter; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 Unit; // rax
  __int64 v15; // r14
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  unsigned int v20; // [rsp+50h] [rbp-28h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  HIBYTE(v20) = 0;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  Adapter = RaidpPortGetAdapter(a1);
  v12 = (__int64)Adapter;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest((__int64)Adapter, 16, retaddr, (__int64)Adapter, a5, v6 | (((v8 << 8) | v7) << 8), 0LL);
  v13 = 255LL;
  if ( v12 )
    v13 = *(unsigned int *)(v12 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LOBYTE(v19) = v8;
    LODWORD(v18) = v13;
    LODWORD(v17) = a5;
    McTemplateK0pqquuu_EtwWriteTransfer(v13, v10, v11, a1, v17, v18, v19, v7, v6);
  }
  if ( v12 )
  {
    LOBYTE(v20) = v8;
    BYTE1(v20) = v7;
    BYTE2(v20) = v6;
    Unit = RaidAdapterFindUnit(v12, v20);
    v15 = Unit;
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 2192);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        LODWORD(v18) = v6;
        LODWORD(v17) = v7;
        WPP_SF_DDD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x11u,
          (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
          v8,
          v17,
          v18);
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 1360), 134684676, 134684677) == 134684677
        && v15 != -1344 )
      {
        *(_DWORD *)(v15 + 1376) = 5;
        *(_DWORD *)(v15 + 1380) = v20;
        *(_DWORD *)(v15 + 1384) = a5;
        RaidPauseUnitQueue(v15);
        RaidQueueDeferredItem((char *)(v12 + 944), (struct _SLIST_ENTRY *)(v15 + 1344));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C0092468 & 0x800) != 0 )
        DbgLogRequest(v12, 22, retaddr, 549LL, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v18) = v6;
      LODWORD(v17) = v7;
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x10u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
        v8,
        v17,
        v18);
    }
  }
  return 0;
}
