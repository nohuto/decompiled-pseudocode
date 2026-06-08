/*
 * XREFs of InitAcpiThrottleStates @ 0x1C004155C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ValidateAcpiThrottleStates @ 0x1C00380F0 (ValidateAcpiThrottleStates.c)
 *     Display_PCT_PTC @ 0x1C003DA90 (Display_PCT_PTC.c)
 *     Display_TSS @ 0x1C003DEF4 (Display_TSS.c)
 *     InitAcpi1ThrottleStates @ 0x1C0040F04 (InitAcpi1ThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0041094 (InitAcpi3ThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  __int64 v2; // rax
  int inited; // edi
  unsigned int *v4; // rdx
  struct _DEVICE_OBJECT *v5; // r8
  __int64 v6; // r9
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 280);
  inited = -1073741823;
  if ( (v2 & 0x3000000) != 0 )
  {
    inited = InitAcpi3ThrottleStates(a1);
    if ( inited >= 0 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCFFFFFFuLL;
    v2 = *(_QWORD *)(a1 + 280);
  }
  if ( (v2 & 0x300000) == 0 )
    goto LABEL_11;
  inited = InitAcpi1ThrottleStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_11;
  }
LABEL_7:
  v4 = *(unsigned int **)(a1 + 504);
  v8 = 0;
  inited = ValidateAcpiThrottleStates(a1 + 480, v4, &v8);
  if ( inited >= 0 )
  {
    inited = 0;
    Display_TSS(*(unsigned int **)(a1 + 504));
    Display_PCT_PTC((unsigned __int8 *)(a1 + 480), "_PTC", v5, v6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x12u,
        (__int64)&WPP_be6170989df535582dbbacf86aaceb18_Traceguids,
        inited);
  }
LABEL_11:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
