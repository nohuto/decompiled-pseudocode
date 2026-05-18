/*
 * XREFs of sub_1800A94B8 @ 0x1800A94B8
 * Callers:
 *     sub_1800890B4 @ 0x1800890B4 (sub_1800890B4.c)
 *     sub_18008C810 @ 0x18008C810 (sub_18008C810.c)
 *     sub_1800A9530 @ 0x1800A9530 (sub_1800A9530.c)
 *     unknown_libname_57 @ 0x180105D6F (unknown_libname_57.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

__int64 __fastcall sub_1800A94B8(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
  {
    sub_1800126E8(v2, *(_QWORD *)(a1 + 136));
    sub_180010884(*(char **)(a1 + 128), (*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  return sub_180067B58(a1);
}
