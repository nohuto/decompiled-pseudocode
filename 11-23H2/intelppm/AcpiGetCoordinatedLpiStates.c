/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x1C003C07C
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003F368 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     AcpiParseProcessorContainer @ 0x1C003CEB8 (AcpiParseProcessorContainer.c)
 *     Display_LPI @ 0x1C003D64C (Display_LPI.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi
  __int64 Pool2; // rax
  unsigned int *v10; // rdi
  __int64 v12; // rbp
  __int64 i; // rbp
  __int64 v14; // rcx
  __int64 j; // rdi
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  int v19; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+54h] [rbp-34h]
  __int64 v21; // [rsp+58h] [rbp-30h]
  int v22; // [rsp+60h] [rbp-28h]
  int v23; // [rsp+64h] [rbp-24h]
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF

  v24 = 0LL;
  v20 = 0;
  v4 = 0LL;
  v5 = 32LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v5, 1919119952LL);
    v10 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v20 = 0;
    v23 = 0;
    v6 = *(_QWORD *)(a1 + 16);
    v19 = 1;
    v21 = Pool2;
    v22 = v5;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, int *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v6,
           0LL,
           2703748LL,
           0LL,
           &v19,
           0LL,
           &v24);
    v8 = v7;
    if ( v7 != -2147483643 )
      break;
    v5 = *v10;
    ExFreePoolWithTag(v10, (ULONG)0);
  }
  if ( v7 >= 0 && v24 )
  {
    v4 = (_DWORD *)ExAllocatePool2(64LL, 40 * v10[1] + 8, 1919119952LL);
    if ( v4 )
    {
      v12 = 0LL;
      *v4 = v10[1];
      if ( v10[1] )
      {
        while ( 1 )
        {
          v8 = AcpiParseProcessorContainer(v10, (unsigned int)v12, &v4[8 * v12 + 2 + 2 * (unsigned int)v12]);
          if ( v8 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v10[1] )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
        {
          v14 = *(_QWORD *)&v4[10 * i + 6];
          if ( v14 )
            Display_LPI(v14, *(_QWORD *)&v4[10 * i + 4]);
        }
        *a2 = v4;
        v4 = 0LL;
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( v10 )
    ExFreePoolWithTag(v10, (ULONG)0);
  if ( v4 )
  {
    for ( j = 0LL; (unsigned int)j < *v4; j = (unsigned int)(j + 1) )
    {
      v16 = *(void **)&v4[10 * j + 4];
      if ( v16 )
        ExFreePoolWithTag(v16, (ULONG)0);
      v17 = *(void **)&v4[10 * j + 10];
      if ( v17 )
        ExFreePoolWithTag(v17, (ULONG)0);
      v18 = *(void **)&v4[10 * j + 6];
      if ( v18 )
        ExFreePoolWithTag(v18, (ULONG)0);
    }
    ExFreePoolWithTag(v4, (ULONG)0);
  }
  return (unsigned int)v8;
}
