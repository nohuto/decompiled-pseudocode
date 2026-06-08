/*
 * XREFs of InitAcpiLpiStates @ 0x1C0028C48
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     AcpiEvaluateMethod @ 0x1C0029190 (AcpiEvaluateMethod.c)
 *     ValidateProcessorLpiStates @ 0x1C0039390 (ValidateProcessorLpiStates.c)
 *     AcpiParseLpiObject @ 0x1C003C4F0 (AcpiParseLpiObject.c)
 *     Display_LPI @ 0x1C003D64C (Display_LPI.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // edi
  _DWORD *v3; // rcx
  __int64 v5; // rdx
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  PVOID v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // [rsp+50h] [rbp+20h] BYREF
  PVOID v12; // [rsp+58h] [rbp+28h] BYREF
  PVOID P; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v12 = 0LL;
  v11 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x80000u);
  v2 = AcpiEvaluateMethod(a1, 1229999199, 0, (unsigned int)&P, (__int64)&v11);
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 272) |= *(_QWORD *)(a1 + 280) & 0xE0000000000LL;
    v2 = AcpiParseLpiObject(P, v5, 0LL, &v12);
  }
  if ( P )
    ExFreePoolWithTag(P, (ULONG)0);
  if ( v2 >= 0 )
  {
    v2 = ValidateProcessorLpiStates(v12);
    if ( v2 >= 0 )
    {
      v8 = v12;
      v2 = 0;
      v12 = 0LL;
      v9 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 544) = v8;
      Display_LPI(v8, v9);
      goto LABEL_9;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v6 = 12;
    v7 = 2;
LABEL_15:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3u,
      v6,
      (__int64)&WPP_3f00c735b857353bd4d9db51bf8c8f84_Traceguids,
      v2);
    goto LABEL_9;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
  v12 = 0LL;
  if ( v2 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v6 = 11;
    v7 = 3;
    goto LABEL_15;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_3f00c735b857353bd4d9db51bf8c8f84_Traceguids);
LABEL_9:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v2 < 0 )
    *(_QWORD *)(a1 + 280) &= 0xFFFFE1FFFFFFFFFFuLL;
  v3 = v12;
  if ( v12 )
  {
    v10 = 0LL;
    if ( *((_DWORD *)v12 + 4) )
    {
      do
      {
        if ( *(_QWORD *)&v3[20 * v10 + 24] )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)&v3[20 * v10 + 22]);
          v3 = v12;
        }
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < v3[4] );
    }
    ExFreePoolWithTag(v3, (ULONG)0);
  }
  return (unsigned int)v2;
}
