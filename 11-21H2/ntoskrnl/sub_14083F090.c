/*
 * XREFs of sub_14083F090 @ 0x14083F090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14076A0A8 @ 0x14076A0A8 (sub_14076A0A8.c)
 *     sub_14076A134 @ 0x14076A134 (sub_14076A134.c)
 *     sub_14076A3C4 @ 0x14076A3C4 (sub_14076A3C4.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_14077B394 @ 0x14077B394 (sub_14077B394.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083F090(ULONG_PTR a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // eax
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  _WORD *v11; // rdx
  int v12; // eax
  unsigned int *v13; // rsi
  void *v15; // rcx
  __int64 Pool2; // rax
  int v17; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+64h] [rbp-35h] BYREF
  PVOID P; // [rsp+68h] [rbp-31h] BYREF
  _WORD v20[40]; // [rsp+70h] [rbp-29h] BYREF

  v18 = 0;
  P = 0LL;
  v3 = 1024;
  v17 = 1024;
  *a3 = 0;
  while ( 1 )
  {
    if ( v3 > *(_DWORD *)(a2 + 8) )
    {
      v15 = *(void **)a2;
      *(_DWORD *)(a2 + 8) = v3;
      if ( v15 )
        ExFreePoolWithTag(v15, 0x5A706E50u);
      Pool2 = ExAllocatePool2(256LL, *(unsigned int *)(a2 + 8), 1517317712LL);
      *(_QWORD *)a2 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    v6 = *(int *)(a2 + 12);
    v7 = *(_DWORD *)(a1 + 28);
    v8 = *(_QWORD *)(a1 + 16);
    v17 = 0;
    v9 = sub_14077DA5C(
           *(__int64 *)&qword_140D00AC0,
           v8,
           v7,
           0,
           0LL,
           qword_1400084F0[5 * v6 + 4],
           (__int64)&v18,
           *(_QWORD *)a2,
           *(_DWORD *)(a2 + 8),
           (__int64)&v17,
           0);
    v10 = v9;
    if ( v9 != -1073741789 )
      break;
    v3 = v17;
  }
  if ( v9 == -1073741275 )
    return 0;
  if ( v9 < 0 )
    return v10;
  if ( v18 == 13 )
  {
    sub_140773030(*(int **)a2, v20);
    v11 = v20;
  }
  else
  {
    if ( v18 != 18 )
      return v10;
    v11 = *(_WORD **)a2;
  }
  v12 = sub_14076A3C4(qword_1400084F0[5 * *(int *)(a2 + 12)], (__int64)v11, (volatile signed __int32 **)&P);
  v13 = (unsigned int *)P;
  v10 = v12;
  if ( v12 >= 0 )
    sub_14076A134(*(_DWORD *)(a2 + 12), (ULONG_PTR)P, a1, 0LL);
  if ( v13 )
  {
    sub_14076A0A8(v13[7], *((_QWORD *)v13 + 2));
    sub_14077B394(v13);
  }
  return v10;
}
