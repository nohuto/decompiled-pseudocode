/*
 * XREFs of StorPortResumeDevice @ 0x1C00026B0
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1C0095740 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C00027F0 (RaidQueueDeferredItem.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 *     McTemplateK0pquuu_EtwWriteTransfer @ 0x1C0041438 (McTemplateK0pquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortResumeDevice(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  __int64 Adapter; // rax
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rsi
  int v12; // ecx
  __int64 Unit; // rax
  unsigned int v15; // [rsp+40h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  HIBYTE(v15) = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Adapter = RaidpPortGetAdapter();
  v11 = Adapter;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest(Adapter, 17, (_DWORD)retaddr, Adapter, 0LL, v5 | (((v7 << 8) | v6) << 8), 0LL);
  v12 = 255;
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pquuu_EtwWriteTransfer(v12, v9, v10, a1, v12, v7, v6, v5);
  if ( v11 )
  {
    LOBYTE(v15) = v7;
    BYTE1(v15) = v6;
    BYTE2(v15) = v5;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, v7, v6, v5);
    }
    Unit = RaidAdapterFindUnit(v11, v15);
    if ( Unit )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1392), 134684676, 134684677) == 134684677
        && Unit != -1376 )
      {
        *(_DWORD *)(Unit + 1408) = 6;
        *(_DWORD *)(Unit + 1412) = v15;
        RaidQueueDeferredItem((PVOID)(v11 + 880));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_1C00793A8 & 0x800) != 0 )
        DbgLogRequest(v11, 22, (_DWORD)retaddr, 663, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
