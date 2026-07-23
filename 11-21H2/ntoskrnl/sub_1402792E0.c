/*
 * XREFs of sub_1402792E0 @ 0x1402792E0
 * Callers:
 *     sub_14027C6DC @ 0x14027C6DC (sub_14027C6DC.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_1406B85C8 @ 0x1406B85C8 (sub_1406B85C8.c)
 *     sub_1406FA730 @ 0x1406FA730 (sub_1406FA730.c)
 * Callees:
 *     sub_14024B1FC @ 0x14024B1FC (sub_14024B1FC.c)
 *     sub_14027938C @ 0x14027938C (sub_14027938C.c)
 *     sub_140594698 @ 0x140594698 (sub_140594698.c)
 */

__int64 __fastcall sub_1402792E0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // eax

  v3 = 0;
  if ( a2 )
    sub_14024B1FC(a2, (__int64)a1, 0LL);
  while ( 1 )
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      break;
    if ( (_QWORD *)v6[1] != a1 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    if ( (v6[24] & 0x800000) != 0 )
      v8 = sub_140594698(v6);
    else
      v8 = sub_14027938C(v6, a3);
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073740748 )
      v3 = v8;
  }
  return v3;
}
