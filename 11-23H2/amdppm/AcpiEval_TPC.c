/*
 * XREFs of AcpiEval_TPC @ 0x1C0028B68
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1C00047A0 (ProcLibOnD0StateChangeWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C002AAE0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C002D1C4 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C00293BC (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TPC(__int64 a1, unsigned int *a2)
{
  int v4; // ebx
  PVOID v5; // rdi
  unsigned __int16 v6; // r9
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x1000u);
  v4 = AcpiEvaluateMethod(a1, 1129337951, 0, (unsigned int)&P, (__int64)&v10);
  if ( v4 < 0 )
  {
LABEL_19:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x1000u);
    return (unsigned int)v4;
  }
  v5 = P;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v4 = -1073741275;
      goto LABEL_16;
    }
    v6 = 39;
LABEL_5:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v6,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    goto LABEL_6;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x28u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
        *((_DWORD *)P + 2));
    goto LABEL_6;
  }
  if ( *((_WORD *)P + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v6 = 41;
    goto LABEL_5;
  }
  v4 = 0;
  v7 = **(_DWORD **)(a1 + 504);
  v8 = v7 - 1;
  if ( *((_DWORD *)P + 4) < v7 )
    v8 = *((_DWORD *)P + 4);
  *a2 = v8;
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)0);
  if ( v4 < 0 )
    goto LABEL_19;
  return (unsigned int)v4;
}
