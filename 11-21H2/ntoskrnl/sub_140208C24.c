/*
 * XREFs of sub_140208C24 @ 0x140208C24
 * Callers:
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406E9124 @ 0x1406E9124 (sub_1406E9124.c)
 *     sub_1407F0FC0 @ 0x1407F0FC0 (sub_1407F0FC0.c)
 *     sub_140854148 @ 0x140854148 (sub_140854148.c)
 *     sub_14085475C @ 0x14085475C (sub_14085475C.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 *     sub_14099B8FC @ 0x14099B8FC (sub_14099B8FC.c)
 * Callees:
 *     sub_140208D18 @ 0x140208D18 (sub_140208D18.c)
 */

__int64 __fastcall sub_140208C24(_WORD *a1, unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rbp
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r11
  _WORD *v11; // r8
  unsigned __int64 v12; // rcx
  __int16 v13; // dx
  __int64 v14; // rdi
  __int64 v15; // r9

  v4 = ((__int64 (*)(void))sub_140208D18)();
  v6 = v4;
  if ( v4 >= 0 && v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = (unsigned __int64)*(unsigned __int16 *)(v5 + 2) >> 1;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    if ( v4 < 0 )
      return v6;
  }
  v9 = sub_140208D18(a2);
  v6 = v9;
  if ( v9 >= 0 && a2 )
  {
    v11 = (_WORD *)*((_QWORD *)a2 + 1);
    v12 = (unsigned __int64)*a2 >> 1;
  }
  else
  {
    v11 = 0LL;
    v12 = 0LL;
    if ( v9 < 0 )
      return v6;
  }
  v13 = 0;
  v6 = 0;
  v14 = v8 - v10;
  if ( v14 )
  {
    v15 = v7 + 2 * v10 - (_QWORD)v11;
    while ( v12 )
    {
      --v12;
      *(_WORD *)((char *)v11 + v15) = *v11;
      ++v13;
      ++v11;
      if ( !--v14 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( v12 )
      v6 = -2147483643;
  }
  *a1 = 2 * (v13 + v10);
  return v6;
}
