/*
 * XREFs of sub_1800A86F4 @ 0x1800A86F4
 * Callers:
 *     sub_1800A3D14 @ 0x1800A3D14 (sub_1800A3D14.c)
 *     sub_1800A5FBC @ 0x1800A5FBC (sub_1800A5FBC.c)
 *     sub_1800A8810 @ 0x1800A8810 (sub_1800A8810.c)
 *     sub_1800ACC70 @ 0x1800ACC70 (sub_1800ACC70.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

void **__fastcall sub_1800A86F4(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffect::`vftable';
  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
  {
    sub_1800126E8(v2, *(_QWORD *)(a1 + 160));
    sub_180010884(*(char **)(a1 + 152), (*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 152)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 >= 0x10 )
    sub_180010884(*(char **)(a1 + 104), v3 + 1);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 15LL;
  *(_BYTE *)(a1 + 104) = 0;
  sub_180010910(a1 + 88);
  sub_180010910(a1 + 72);
  sub_180010910(a1 + 56);
  sub_180010910(a1 + 40);
  sub_180010910(a1 + 24);
  sub_180010910(a1 + 8);
  result = &Spectre::Engine::IImageProcessingEffect::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IImageProcessingEffect::`vftable';
  return result;
}
