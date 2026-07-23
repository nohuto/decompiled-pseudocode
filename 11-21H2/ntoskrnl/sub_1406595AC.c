/*
 * XREFs of sub_1406595AC @ 0x1406595AC
 * Callers:
 *     sub_1406598AC @ 0x1406598AC (sub_1406598AC.c)
 *     sub_140659AD4 @ 0x140659AD4 (sub_140659AD4.c)
 * Callees:
 *     sub_140419E30 @ 0x140419E30 (sub_140419E30.c)
 *     sub_140419F18 @ 0x140419F18 (sub_140419F18.c)
 */

void __fastcall sub_1406595AC(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 48)) <= 1 )
    __fastfail(0xEu);
  a1[362] = a2;
  a1[365] = *(_QWORD *)(a2 + 8LL * a3 + 88);
  sub_140419E30(a2);
  v5 = *(_QWORD **)(a2 + 80);
  v6 = a1 + 363;
  if ( *v5 != a2 + 72 )
    __fastfail(3u);
  *v6 = a2 + 72;
  a1[364] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 80) = v6;
  sub_140419F18(a2);
}
