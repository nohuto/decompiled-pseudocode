/*
 * XREFs of Controller_TranslateFrameNumberToQpcValue @ 0x1C003399C
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0033C20 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C000AA60 (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_GetQpcValueForFrameMicroFrameBoundary @ 0x1C0031AD0 (Controller_GetQpcValueForFrameMicroFrameBoundary.c)
 *     Interrupter_QueryBusEdgeInformation @ 0x1C003C364 (Interrupter_QueryBusEdgeInformation.c)
 */

__int64 __fastcall Controller_TranslateFrameNumberToQpcValue(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v6; // rcx
  KIRQL v7; // bl
  int FrameNumber; // eax
  int HighPart; // r8d
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // rcx
  __int64 QpcValueForFrameMicroFrameBoundary; // rax
  __int64 LowPart; // rcx
  int v15; // r11d
  int v16; // r14d
  int v17; // r8d
  unsigned int v18; // r9d
  unsigned __int16 v19; // r9
  __int64 v21; // [rsp+28h] [rbp-41h]
  __int64 v22; // [rsp+30h] [rbp-39h]
  __int64 v23; // [rsp+38h] [rbp-31h]
  __int64 v24; // [rsp+40h] [rbp-29h]
  unsigned __int64 v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  __int64 v27; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v28[9]; // [rsp+78h] [rbp+Fh] BYREF
  char v29; // [rsp+D0h] [rbp+67h] BYREF
  int v30; // [rsp+D8h] [rbp+6Fh] BYREF
  int v31; // [rsp+E0h] [rbp+77h] BYREF
  int v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = a1 + 608;
  v29 = 0;
  v27 = 0LL;
  v31 = 0;
  v32 = 0;
  v6 = *(_QWORD *)(a1 + 128);
  v30 = 0;
  v26 = 0LL;
  v25 = 0LL;
  Interrupter_QueryBusEdgeInformation(
    v6,
    v3,
    (unsigned int)&v29,
    (unsigned int)&v27,
    (__int64)&v31,
    (__int64)&v32,
    (__int64)&v30);
  v28[1] = &v26;
  v28[0] = v3;
  v28[2] = &v25;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char (__fastcall *)(__int64, _QWORD **), _QWORD *))(WdfFunctions_01023 + 1144))(
    WdfDriverGlobals,
    **(_QWORD **)(*(_QWORD *)(a1 + 128) + 40LL),
    Interrupter_ReadAccumulatedQpcAndFrameDataForTimeSync,
    v28);
  v7 = KfRaiseIrql(2u);
  FrameNumber = Controller_GetFrameNumber(a1, 0, (unsigned int *)&a2[6], &a2[6].HighPart);
  HighPart = a2[6].HighPart;
  v10 = v30;
  v11 = v31;
  a2[7].LowPart = FrameNumber;
  v12 = (unsigned int)(HighPart + 8 * FrameNumber);
  if ( (unsigned int)v12 < v10 + 8 * v11 )
  {
    a2[5] = KeQueryPerformanceCounter(0LL);
    goto LABEL_13;
  }
  QpcValueForFrameMicroFrameBoundary = Controller_GetQpcValueForFrameMicroFrameBoundary(
                                         v12,
                                         FrameNumber,
                                         HighPart,
                                         FrameNumber,
                                         HighPart,
                                         v29,
                                         v27,
                                         v11,
                                         v10,
                                         v26,
                                         v25,
                                         &a2[4]);
  LowPart = a2[1].LowPart;
  a2[5].QuadPart = QpcValueForFrameMicroFrameBoundary;
  if ( __PAIR64__(a2[1].HighPart, LowPart) )
  {
    v15 = a2[7].LowPart;
    v16 = a2[6].HighPart;
    v17 = a2[1].HighPart;
    v18 = v17 + 8 * LowPart;
    if ( v16 + 8 * v15 >= v18 )
    {
      if ( v18 >= v30 + 8 * v31 )
      {
        a2[2].QuadPart = Controller_GetQpcValueForFrameMicroFrameBoundary(
                           LowPart,
                           v15,
                           v16,
                           LowPart,
                           v17,
                           v29,
                           v27,
                           v31,
                           v30,
                           v26,
                           v25,
                           &a2[4]);
        goto LABEL_14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v30;
        v19 = 300;
        LODWORD(v23) = v31;
        goto LABEL_7;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = a2[6].HighPart;
      v19 = 299;
      LODWORD(v23) = a2[7].LowPart;
LABEL_7:
      LODWORD(v22) = a2[1].HighPart;
      LODWORD(v21) = LowPart;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(a1 + 72),
        2u,
        4u,
        v19,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        v21,
        v22,
        v23,
        v24);
    }
LABEL_13:
    v2 = -1073741811;
    goto LABEL_14;
  }
  a2[2].QuadPart = 0LL;
LABEL_14:
  KeLowerIrql(v7);
  return v2;
}
