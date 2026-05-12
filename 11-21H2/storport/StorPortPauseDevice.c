/*
 * XREFs of StorPortPauseDevice @ 0x1C0002540
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1C00956E0 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidPauseUnitQueue @ 0x1C000282C (RaidPauseUnitQueue.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 *     McTemplateK0pqquuu_EtwWriteTransfer @ 0x1C0041290 (McTemplateK0pqquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortPauseDevice(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 Adapter; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rbp
  int v13; // ecx
  __int64 Unit; // rax
  __int64 v15; // r14
  unsigned int v17; // [rsp+50h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  HIBYTE(v17) = 0;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  Adapter = RaidpPortGetAdapter();
  v12 = Adapter;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest(Adapter, 16, (_DWORD)retaddr, Adapter, a5, v6 | (((v8 << 8) | v7) << 8), 0LL);
  v13 = 255;
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pqquuu_EtwWriteTransfer(v13, v10, v11, a1, a5, v13, v8, v7, v6);
  if ( v12 )
  {
    LOBYTE(v17) = v8;
    BYTE1(v17) = v7;
    BYTE2(v17) = v6;
    Unit = RaidAdapterFindUnit(v12, v17);
    v15 = Unit;
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 2144);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_DDD(
          WPP_GLOBAL_Control->AttachedDevice,
          17LL,
          &WPP_27c524ad26413fc7d405974726332488_Traceguids,
          v8,
          v7,
          v6);
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 1312), 134684676, 134684677) == 134684677
        && v15 != -1296 )
      {
        *(_DWORD *)(v15 + 1328) = 5;
        *(_DWORD *)(v15 + 1332) = v17;
        *(_DWORD *)(v15 + 1336) = a5;
        RaidPauseUnitQueue(v15);
        RaidQueueDeferredItem((PVOID)(v12 + 880));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C00793A8 & 0x800) != 0 )
        DbgLogRequest(v12, 22, (_DWORD)retaddr, 551, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, v8, v7, v6);
    }
  }
  return 0;
}
