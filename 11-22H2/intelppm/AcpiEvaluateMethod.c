/*
 * XREFs of AcpiEvaluateMethod @ 0x1C0029190
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0028C48 (InitAcpiLpiStates.c)
 *     AcpiEval_OSC @ 0x1C0029018 (AcpiEval_OSC.c)
 *     AcpiEval_CPC @ 0x1C00296AC (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0029CFC (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C002A118 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CSD @ 0x1C002A368 (AcpiEval_CSD.c)
 *     AcpiEval_PCCP @ 0x1C003AE0C (AcpiEval_PCCP.c)
 *     AcpiEval_PCT_PTC @ 0x1C003B010 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PDC @ 0x1C003B20C (AcpiEval_PDC.c)
 *     AcpiEval_PPC @ 0x1C003B314 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C003B488 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C003B830 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C003B990 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C003BC94 (AcpiEval_XPSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiEvaluateMethod(__int64 a1, int a2, __int64 *a3, unsigned int **a4, _DWORD *a5)
{
  __int64 *v6; // rsi
  int v8; // ebx
  __int64 v9; // rdi
  __int64 Pool2; // rax
  unsigned int *v11; // r14
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v17; // eax
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  int v19; // [rsp+58h] [rbp-9h] BYREF
  int v20; // [rsp+5Ch] [rbp-5h]
  __int64 v21; // [rsp+60h] [rbp-1h]
  int v22; // [rsp+68h] [rbp+7h]
  int v23; // [rsp+6Ch] [rbp+Bh]
  int v24; // [rsp+70h] [rbp+Fh] BYREF
  int v25; // [rsp+74h] [rbp+13h]
  __int64 *v26; // [rsp+78h] [rbp+17h]
  int v27; // [rsp+80h] [rbp+1Fh]
  int v28; // [rsp+84h] [rbp+23h]
  __int64 v29; // [rsp+D0h] [rbp+6Fh] BYREF

  v29 = 0LL;
  v18 = 0LL;
  v25 = 0;
  v6 = a3;
  v20 = 0;
  if ( !a3 )
  {
    if ( !a2 )
      return (unsigned int)-1073741585;
    LODWORD(v29) = 1114203457;
    v6 = &v29;
    HIDWORD(v29) = a2;
LABEL_4:
    v8 = 8;
    goto LABEL_5;
  }
  v17 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 1130980673 )
  {
    if ( v17 != 1114203457 )
    {
      if ( v17 == 1231643969 )
      {
        v8 = 12;
      }
      else
      {
        if ( v17 != 1399416129 )
          return (unsigned int)-1073741584;
        v8 = *((_DWORD *)a3 + 2) + 15;
      }
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v8 = *((_DWORD *)a3 + 2);
LABEL_5:
  v9 = 1024LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v9, 1919119952LL);
    v11 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v25 = 0;
    v28 = 0;
    v20 = 0;
    v23 = 0;
    v12 = *(_QWORD *)(a1 + 16);
    v21 = Pool2;
    v24 = 1;
    v26 = v6;
    v27 = v8;
    v19 = 1;
    v22 = v9;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, int *, int *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            &v24,
            &v19,
            0LL,
            &v18);
    v14 = v13;
    if ( v13 != -2147483643 )
      break;
    v9 = v11[1];
    ExFreePoolWithTag(v11, (ULONG)0);
  }
  if ( v13 >= 0 && (v15 = v18, v18) )
  {
    *a4 = v11;
  }
  else
  {
    *a4 = 0LL;
    ExFreePoolWithTag(v11, (ULONG)0);
    v15 = v18;
  }
  if ( a5 )
    *a5 = v15;
  return v14;
}
