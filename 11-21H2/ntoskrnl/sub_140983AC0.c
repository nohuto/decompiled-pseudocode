/*
 * XREFs of sub_140983AC0 @ 0x140983AC0
 * Callers:
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 *     sub_140983B10 @ 0x140983B10 (sub_140983B10.c)
 *     sub_140983B80 @ 0x140983B80 (sub_140983B80.c)
 * Callees:
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_140250BDC @ 0x140250BDC (sub_140250BDC.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140983AC0(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  sub_140268284(a1 + 48);
  sub_140250BDC(a1 + 176);
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
    sub_14023FCF0(v3);
}
