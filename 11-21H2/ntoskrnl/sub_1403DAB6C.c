/*
 * XREFs of sub_1403DAB6C @ 0x1403DAB6C
 * Callers:
 *     sub_14085DE38 @ 0x14085DE38 (sub_14085DE38.c)
 * Callees:
 *     sub_140243794 @ 0x140243794 (sub_140243794.c)
 *     sub_14024393C @ 0x14024393C (sub_14024393C.c)
 */

__int64 __fastcall sub_1403DAB6C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  unsigned __int8 v6; // dl
  KIRQL v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  sub_14024393C(a1, &v8);
  v4 = (_QWORD *)(a2 + 80);
  v5 = *(_QWORD **)(a1 + 48);
  if ( *v5 != a1 + 40 )
    __fastfail(3u);
  v4[1] = v5;
  *v4 = a1 + 40;
  *v5 = v4;
  v6 = v8;
  *(_QWORD *)(a1 + 48) = v4;
  return sub_140243794(a1, v6);
}
