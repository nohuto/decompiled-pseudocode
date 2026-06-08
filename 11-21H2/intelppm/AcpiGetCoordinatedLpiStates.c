/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x1C003AD8C
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003E18C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     AcpiParseProcessorContainer @ 0x1C003B9D0 (AcpiParseProcessorContainer.c)
 *     Display_LPI @ 0x1C003C16C (Display_LPI.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, unsigned int **a2)
{
  unsigned int *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi
  __int64 Pool2; // rax
  unsigned int *v10; // rdi
  unsigned int v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 i; // rdi
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  int v20; // [rsp+50h] [rbp-38h] BYREF
  int v21; // [rsp+54h] [rbp-34h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+60h] [rbp-28h]
  int v24; // [rsp+64h] [rbp-24h]
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF

  v25 = 0LL;
  v21 = 0;
  v4 = 0LL;
  v5 = 32LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v5, 1919119952LL);
    v10 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v21 = 0;
    v24 = 0;
    v6 = *(_QWORD *)(a1 + 16);
    v20 = 1;
    v22 = Pool2;
    v23 = v5;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, int *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v6,
           0LL,
           2703748LL,
           0LL,
           &v20,
           0LL,
           &v25);
    v8 = v7;
    if ( v7 != -2147483643 )
      break;
    v5 = *v10;
    ExFreePoolWithTag(v10, (ULONG)0);
  }
  if ( v7 >= 0 && v25 )
  {
    v4 = (unsigned int *)ExAllocatePool2(64LL, 40 * v10[1] + 8, 1919119952LL);
    if ( v4 )
    {
      v12 = v10[1];
      v13 = 0LL;
      *v4 = v12;
      if ( v10[1] )
      {
        while ( 1 )
        {
          v8 = AcpiParseProcessorContainer(v10, (unsigned int)v13, &v4[8 * v13 + 2 + 2 * (unsigned int)v13]);
          if ( v8 < 0 )
            break;
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v10[1] )
          {
            v12 = *v4;
            goto LABEL_15;
          }
        }
      }
      else
      {
LABEL_15:
        v14 = 0LL;
        if ( v12 )
        {
          do
          {
            v15 = *(_QWORD *)&v4[10 * v14 + 6];
            if ( v15 )
              Display_LPI(v15, *(_QWORD *)&v4[10 * v14 + 4]);
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *v4 );
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
    for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
    {
      v17 = *(void **)&v4[10 * i + 4];
      if ( v17 )
        ExFreePoolWithTag(v17, (ULONG)0);
      v18 = *(void **)&v4[10 * i + 10];
      if ( v18 )
        ExFreePoolWithTag(v18, (ULONG)0);
      v19 = *(void **)&v4[10 * i + 6];
      if ( v19 )
        ExFreePoolWithTag(v19, (ULONG)0);
    }
    ExFreePoolWithTag(v4, (ULONG)0);
  }
  return (unsigned int)v8;
}
