/*
 * XREFs of InitAcpi2CStates @ 0x1C0028A60
 * Callers:
 *     InitAcpiCStates @ 0x1C00289B0 (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1C002F450 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     ValidateAcpiCStates @ 0x1C0028ADC (ValidateAcpiCStates.c)
 *     AcpiEval_CST @ 0x1C0029CFC (AcpiEval_CST.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  void *v5; // rsi
  void *v6; // rcx
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = AcpiEval_CST(a1, &v8);
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids,
        v4);
    }
  }
  else
  {
    v5 = v8;
    v4 = ValidateAcpiCStates(v8);
    if ( v4 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids,
          v4);
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
      *a2 = v5;
      v4 = 0;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, (ULONG)0);
  }
  return (unsigned int)v4;
}
