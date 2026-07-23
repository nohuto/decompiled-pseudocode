/*
 * XREFs of sub_14028AB90 @ 0x14028AB90
 * Callers:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_140206780 @ 0x140206780 (sub_140206780.c)
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_1402A4660 @ 0x1402A4660 (sub_1402A4660.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     sub_1402FBEC0 @ 0x1402FBEC0 (sub_1402FBEC0.c)
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     sub_14066B830 @ 0x14066B830 (sub_14066B830.c)
 *     sub_1406FE720 @ 0x1406FE720 (sub_1406FE720.c)
 *     sub_14084C934 @ 0x14084C934 (sub_14084C934.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     sub_1409CB770 @ 0x1409CB770 (sub_1409CB770.c)
 *     sub_1409CE8C4 @ 0x1409CE8C4 (sub_1409CE8C4.c)
 *     sub_1409CE94C @ 0x1409CE94C (sub_1409CE94C.c)
 * Callees:
 *     sub_14028AC10 @ 0x14028AC10 (sub_14028AC10.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14028AB90(_DWORD *a1)
{
  void **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  void **v5; // rcx

  v2 = (void **)(a1 + 2);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (v3[7] & 1) != 0 )
    {
      v4 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (void **)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    sub_14028AC10(v3, 0LL);
    ExFreePoolWithTag(v3, 0);
  }
}
