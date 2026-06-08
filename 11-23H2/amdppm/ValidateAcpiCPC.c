/*
 * XREFs of ValidateAcpiCPC @ 0x1C002E738
 * Callers:
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 *     CpcRegisterIsSupportedEx @ 0x1C00051F4 (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005D08 (WPP_RECORDER_SF_DD.c)
 *     ValidateAcpiCPCRegister @ 0x1C002E91C (ValidateAcpiCPCRegister.c)
 */

__int64 __fastcall ValidateAcpiCPC(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edi
  int v6; // edx
  bool v7; // cc
  unsigned int *v8; // rbp
  char **v9; // r14
  _BYTE *v10; // r15
  _BYTE *v11; // r12
  __int64 i; // rsi
  __int64 v13; // rdx
  __int64 result; // rax
  _BYTE *v15; // rcx

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
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
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
    v8 = (unsigned int *)&CpcRegisterTable;
    v5 = 15;
    v9 = &off_1C000D238;
    v10 = &unk_1C000D241;
    v11 = &unk_1C000D240;
    goto LABEL_6;
  }
  if ( v3 == 2 )
  {
    v8 = (unsigned int *)&Cpc2RegisterTable;
    v5 = 19;
    v9 = &off_1C000D068;
    v10 = &unk_1C000D071;
    v11 = &unk_1C000D070;
    goto LABEL_6;
  }
LABEL_5:
  v8 = (unsigned int *)&Cpc3RegisterTable;
  v9 = &off_1C000D3A8;
  v10 = &unk_1C000D3B1;
  v11 = &unk_1C000D3B0;
LABEL_6:
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v13 = 3 * i;
    LOBYTE(a3) = v10[24 * i];
    LOBYTE(v13) = v11[24 * i];
    result = ValidateAcpiCPCRegister((char *)a1 + v8[6 * i], v13, a3, v9[3 * i]);
    if ( (int)result < 0 )
      return result;
  }
  if ( !CpcRegisterIsSupportedEx((__int64)(a1 + 32)) && *v15 != 126 && *(_QWORD *)(a1 + 33) != 1LL )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x34u,
        (__int64)&WPP_3fe783ebadc43b57788bf58e82506d17_Traceguids,
        KeGetPcr()->Prcb.Number);
    return 3221225473LL;
  }
  return 0LL;
}
