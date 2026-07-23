/*
 * XREFs of sub_14052F89C @ 0x14052F89C
 * Callers:
 *     sub_140530270 @ 0x140530270 (sub_140530270.c)
 * Callees:
 *     sub_14052E940 @ 0x14052E940 (sub_14052E940.c)
 *     sub_14052F224 @ 0x14052F224 (sub_14052F224.c)
 */

__int64 *__fastcall sub_14052F89C(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, __int64 *a6)
{
  __int64 v7; // r9
  unsigned __int16 v8; // si
  unsigned __int8 v9; // r10
  __int64 v10; // rdx
  _QWORD *v11; // rax
  char v12; // r12
  int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rdx
  char v18; // di
  __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *result; // rax
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+78h] [rbp+10h] BYREF

  v24 = a2;
  v7 = 2 * ((unsigned __int64)a2 >> 8);
  v8 = a2;
  v9 = a2;
  v10 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 320) )
    v11 = (_QWORD *)(v10 + 8 * (v7 + ((unsigned __int8)(v9 >> 3) >= 0x10u)));
  else
    v11 = (_QWORD *)(v10 + 8 * v7);
  v12 = 0;
  LOWORD(v13) = 0;
  v14 = *v11 + 16LL * v9;
  v15 = 0x10000LL;
  if ( (*(_OWORD *)v14 & 1) != 0 && !a5 )
  {
    v12 = 1;
    v15 = (unsigned __int16)((unsigned int)*(_QWORD *)(v14 + 8) >> 8);
  }
  v16 = *(_DWORD *)(a3 + 4);
  v17 = 0LL;
  v23 = 0LL;
  if ( v16 == 1 )
  {
    v18 = 1;
    v19 = sub_14052E940(a1, &v24, &v23);
    v17 = v23;
    LOWORD(v13) = v19;
    v20 = 0LL;
  }
  else if ( v16 )
  {
    v18 = 1;
    v13 = *(_DWORD *)(a3 + 48);
    v17 = *(_QWORD *)(a3 + 40) >> 12;
    v23 = v17;
    v20 = 0LL;
  }
  else
  {
    v18 = 0;
    v20 = 2LL;
  }
  *(_QWORD *)(v14 + 8) = ((unsigned __int64)(unsigned __int16)v13 << 8) | *(_DWORD *)(a1 + 248) & 7;
  *(_QWORD *)v14 = (4 * (v20 | (v17 << 10))) | 1;
  if ( v12 )
  {
    sub_14052F224(a1, v8, v15, v7, 1);
    if ( v18 )
      sub_14052F224(a1, v8, v13, v21, 1);
  }
  result = a6;
  if ( a6 )
    *a6 = v15;
  return result;
}
