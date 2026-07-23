/*
 * XREFs of sub_140A11A00 @ 0x140A11A00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140A129F4 @ 0x140A129F4 (sub_140A129F4.c)
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A15E88 @ 0x140A15E88 (sub_140A15E88.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A11A00(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  PVOID v9; // rdi
  PVOID *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  int *v15; // rdx
  int v16; // r15d
  __int64 v17; // rdx
  int i; // eax
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  PVOID *v22; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _DWORD *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  int *v29; // [rsp+70h] [rbp-90h]
  WCHAR v30[264]; // [rsp+80h] [rbp-80h] BYREF

  v25 = a2;
  v28 = a3;
  v7 = a1;
  v27 = a1;
  v8 = 0;
  v9 = 0LL;
  v21 = 0;
  v10 = 0LL;
  P = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v21 = 1;
LABEL_28:
    v8 = 1;
    goto LABEL_29;
  }
  v11 = sub_140792CCC(a3, a5, 24577);
  if ( !v11 )
    goto LABEL_29;
  v12 = sub_140842A24(a3, v11);
  v26 = v12;
  v13 = v12;
  if ( !v12 )
  {
LABEL_5:
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingWildcardFiles");
    goto LABEL_29;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(v12 + 2 * v14) );
  if ( (*(_DWORD *)a6 & 1) == 0 )
  {
    if ( !(unsigned int)sub_140A129F4(a6) )
      goto LABEL_5;
    v13 = v26;
  }
  v15 = *(int **)(a6 + 72);
  v16 = 0;
  v29 = v15;
  if ( *v15 <= 0 )
  {
LABEL_27:
    v7 = v27;
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_28;
  }
  while ( (unsigned int)sub_140A12DA0(v25, a6, v13, (unsigned int)v14, &v15[12 * v16 + 2], &P) )
  {
    sub_140A15E88(&v24);
    memset(v30, 0, 0x208uLL);
    v9 = P;
    for ( i = sub_140A15ECC(v30, v17, P, &v24); i >= 0; i = sub_140A1641C(v30, v19, v24) )
    {
      if ( v10 )
      {
        sub_14075E448(v10);
        v22 = 0LL;
      }
      i = sub_14075E160(&v22, v30, 0LL, 0LL, 0LL);
      v10 = v22;
      if ( i < 0 )
        break;
      if ( (int)sub_140841610(&v21, v25, v28, a5, (__int64)v22) >= 0 )
        goto LABEL_27;
    }
    if ( i != -2147483642 )
      sub_1406E0C3C(3LL, (__int64)"SdbpCheckMatchingWildcardFiles");
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x74705041u);
      v9 = 0LL;
      P = 0LL;
    }
    v15 = v29;
    if ( ++v16 >= *v29 )
      goto LABEL_27;
    v13 = v26;
  }
  sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingWildcardFiles");
  v9 = P;
  v7 = v27;
LABEL_29:
  sub_140A15E88(&v24);
  sub_14075E448(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x74705041u);
  result = v8;
  *v7 = v21;
  return result;
}
