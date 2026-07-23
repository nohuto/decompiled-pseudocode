/*
 * XREFs of sub_140411408 @ 0x140411408
 * Callers:
 *     sub_140406130 @ 0x140406130 (sub_140406130.c)
 * Callees:
 *     sub_140400B14 @ 0x140400B14 (sub_140400B14.c)
 *     sub_140400C00 @ 0x140400C00 (sub_140400C00.c)
 *     sub_140400C78 @ 0x140400C78 (sub_140400C78.c)
 *     sub_140400CC0 @ 0x140400CC0 (sub_140400CC0.c)
 *     sub_140400DA0 @ 0x140400DA0 (sub_140400DA0.c)
 */

__int64 __fastcall sub_140411408(char a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  unsigned int v8; // edi
  int v9; // r15d
  bool v10; // zf
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // r12
  _DWORD *v14; // r13
  __int64 v15; // r14
  int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // r8
  unsigned int v19; // ebx
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // [rsp+88h] [rbp+10h]
  int v24; // [rsp+A8h] [rbp+30h]

  v22 = a2;
  v6 = (__int64)a5;
  v7 = a4;
  v8 = ~(-1 << a1);
  v9 = 1 << (a1 - 1);
  v10 = a6 == 1;
  LODWORD(v11) = a6 - 1;
  v24 = a6 - 1;
  v12 = ~v9;
  if ( !v10 )
  {
    v13 = a4 - (_QWORD)a5;
    v14 = a5;
    v15 = a2;
    v11 = (unsigned int)v11;
    do
    {
      v16 = sub_140400C78(v15);
      v17 = v8 & v16 & v12;
      v18 = (unsigned __int64)-(__int64)(v8 & v16 & v9) >> 32;
      v19 = v9 - (v8 & v16);
      v20 = ~((unsigned __int64)-(__int64)(v8 & v16 & v9) >> 32);
      *v14 = v20;
      *(_DWORD *)((char *)v14 + v13) = (v17 & (unsigned int)v18 | v19 & v20) >> 1;
      sub_140400DA0();
      sub_140400B14();
      sub_140400CC0();
      sub_140400C00();
      ++v14;
      --v11;
    }
    while ( v11 );
    v6 = (__int64)a5;
    LODWORD(v11) = v24;
    v7 = a4;
    a2 = v22;
  }
  *(_DWORD *)(v6 + 4LL * (unsigned int)v11) = 0;
  result = (v8 >> 1) & (v12 >> 1) & ((unsigned int)sub_140400C78(a2) >> 1);
  *(_DWORD *)(v7 + 4LL * (unsigned int)v11) = result;
  return result;
}
