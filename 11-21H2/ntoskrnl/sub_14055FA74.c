/*
 * XREFs of sub_14055FA74 @ 0x14055FA74
 * Callers:
 *     sub_14055FA74 @ 0x14055FA74 (sub_14055FA74.c)
 *     sub_14055FAFC @ 0x14055FAFC (sub_14055FAFC.c)
 * Callees:
 *     sub_14055FA74 @ 0x14055FA74 (sub_14055FA74.c)
 */

char __fastcall sub_14055FA74(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  int v12; // eax

  *a3 = 0;
  *a4 = 0;
  if ( a1 != a2 )
  {
    v8 = (_QWORD *)(a1 + 16);
    v9 = *(_QWORD **)(a1 + 16);
    do
    {
      if ( v9 == v8 )
        return 0;
      v10 = v9;
      v11 = v9[4];
      v9 = (_QWORD *)*v9;
    }
    while ( !(unsigned __int8)sub_14055FA74(v11, a2, a3, a4) );
    v12 = *((_DWORD *)v10 + 12);
    ++*a3;
    *a4 = v12;
  }
  return 1;
}
