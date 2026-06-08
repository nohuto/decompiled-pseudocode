/*
 * XREFs of InitAcpi2CStates @ 0x1C0036A68
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0026220 (AcpiCStateNotifyWorker.c)
 *     InitAcpiCStates @ 0x1C0036BC0 (InitAcpiCStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000262C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004950 (WPP_RECORDER_SF_d.c)
 *     AcpiEval_CST @ 0x1C0026EC8 (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x1C002E99C (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, unsigned int **a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int *v6; // rsi
  unsigned int *v7; // rcx
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+28h] [rbp-10h]
  unsigned int *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = AcpiEval_CST(a1, &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v11;
    v5 = ValidateAcpiCStates(v11);
    if ( v5 >= 0 )
    {
      v7 = 0LL;
      *a2 = v6;
      v5 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 8u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = v5;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xCu,
          (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids,
          v10);
      }
      v7 = v11;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, (ULONG)0);
  }
  else if ( v4 == -1073741772 )
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
    v9 = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_e0adb0cd688e3d58f88317709de3b4ac_Traceguids,
      v9);
  }
  return (unsigned int)v5;
}
