/*
 * XREFs of ValidateAcpiCPC @ 0x1C002D828
 * Callers:
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00047F4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000536C (WPP_RECORDER_SF_DD.c)
 *     ValidateAcpiCPCRegister @ 0x1C002D9B8 (ValidateAcpiCPCRegister.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edi
  int v6; // edx
  bool v7; // cc
  _BYTE *v8; // rbp
  __int64 i; // rsi
  __int64 v10; // rdx
  __int64 result; // rax
  _BYTE *v12; // rcx

  v3 = a1[1];
  v5 = 21;
  if ( v3 == 1 )
  {
    v6 = *a1;
    if ( *a1 != 17 )
      goto LABEL_15;
  }
  else if ( v3 == 2 )
  {
    v6 = *a1;
    if ( *a1 != 21 )
      goto LABEL_15;
    v7 = 1;
    goto LABEL_13;
  }
  v7 = v3 <= 3;
  if ( v3 == 3 )
  {
    v6 = *a1;
    if ( *a1 == 23 )
      goto LABEL_5;
LABEL_15:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x33u,
        (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
        KeGetPcr()->Prcb.Number,
        v6);
    return 3221225473LL;
  }
LABEL_13:
  if ( !v7 )
  {
    v6 = *a1;
    if ( (unsigned int)*a1 >= 0x17 )
      goto LABEL_5;
    goto LABEL_15;
  }
  if ( v3 == 1 )
  {
    v8 = &CpcRegisterTable;
    v5 = 15;
    goto LABEL_6;
  }
  if ( v3 == 2 )
  {
    v8 = &Cpc2RegisterTable;
    v5 = 19;
    goto LABEL_6;
  }
LABEL_5:
  v8 = &Cpc3RegisterTable;
LABEL_6:
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v10 = 3 * i;
    LOBYTE(a3) = v8[24 * i + 17];
    LOBYTE(v10) = v8[24 * i + 16];
    result = ValidateAcpiCPCRegister((char *)a1 + *(unsigned int *)&v8[24 * i], v10, a3, *(_QWORD *)&v8[24 * i + 8]);
    if ( (int)result < 0 )
      return result;
  }
  if ( !CpcRegisterIsSupportedEx((__int64)(a1 + 32)) && *v12 != 126 && *(_QWORD *)(a1 + 33) != 1LL )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x34u,
        (__int64)&WPP_a6b065e9623e3dbf1cba1de742264dc6_Traceguids,
        KeGetPcr()->Prcb.Number);
    return 3221225473LL;
  }
  return 0LL;
}
