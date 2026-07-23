/*
 * XREFs of sub_140945A10 @ 0x140945A10
 * Callers:
 *     sub_140560174 @ 0x140560174 (sub_140560174.c)
 *     sub_140945A10 @ 0x140945A10 (sub_140945A10.c)
 * Callees:
 *     sub_140945A10 @ 0x140945A10 (sub_140945A10.c)
 *     sub_140959B60 @ 0x140959B60 (sub_140959B60.c)
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 */

__int64 __fastcall sub_140945A10(ULONG_PTR a1, ULONG_PTR *a2, _DWORD *a3)
{
  _QWORD *i; // rbx
  int v7; // esi

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
  {
    v7 = sub_140945A10(i, a2, a3);
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  v7 = sub_140959F9C(a1, 0LL);
  if ( v7 < 0 )
  {
    sub_140959B60(a1);
    *a2 = a1;
    *a3 = 1;
  }
  return (unsigned int)v7;
}
