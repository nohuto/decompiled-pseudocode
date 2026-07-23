/*
 * XREFs of sub_14099FAA4 @ 0x14099FAA4
 * Callers:
 *     sub_14099F6D8 @ 0x14099F6D8 (sub_14099F6D8.c)
 * Callees:
 *     sub_14099EC88 @ 0x14099EC88 (sub_14099EC88.c)
 *     sub_14099F898 @ 0x14099F898 (sub_14099F898.c)
 *     sub_14099F8D8 @ 0x14099F8D8 (sub_14099F8D8.c)
 *     sub_14099FA50 @ 0x14099FA50 (sub_14099FA50.c)
 */

__int64 __fastcall sub_14099FAA4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v10; // rcx
  int v11; // r8d
  _QWORD *v12; // r14
  _QWORD *i; // rsi
  __int64 v14; // rbx
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1 + 728;
  v7 = 0;
  v16 = 0;
  sub_14099FA50(a3, a1 + 728, a4, 5);
  if ( sub_14099F8D8(a1, &v16) )
  {
    v11 = v16;
LABEL_3:
    sub_14099EC88(v10, a4, v11);
    return (unsigned int)-1073741637;
  }
  if ( (*(_DWORD *)(v5 + 32) & 8) != 0 )
  {
    v11 = 3;
    goto LABEL_3;
  }
  v12 = (_QWORD *)(a1 + 176);
  *(_DWORD *)(v5 + 32) |= 0x20000u;
  for ( i = *(_QWORD **)(a1 + 176); i != v12; i = (_QWORD *)*i )
  {
    v14 = *(i - 1);
    sub_14099FA50(a3, v14 + 568, a4, 6);
    sub_14099F898(a2, (_QWORD *)(v14 + 568));
  }
  return v7;
}
