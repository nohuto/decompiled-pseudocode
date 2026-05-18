/*
 * XREFs of sub_1800ACC70 @ 0x1800ACC70
 * Callers:
 *     sub_1800ACF20 @ 0x1800ACF20 (sub_1800ACF20.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 */

void **__fastcall sub_1800ACC70(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
  v7 = *(_QWORD *)(a1 + 72);
  v2 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v9 = 0LL;
  v8 = v2;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 288);
  v8 = *(_QWORD *)(a1 + 296);
  v9 = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 320);
  v8 = *(_QWORD *)(a1 + 328);
  v9 = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 272);
  v8 = *(_QWORD *)(a1 + 280);
  v9 = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(_QWORD *)(a1 + 208);
  v9 = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)&v9);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = *(_QWORD *)(a1 + 192);
  v9 = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  sub_180010910((__int64)&v7);
  sub_180010910((__int64)&v9);
  sub_1800126E8(*(_QWORD *)(a1 + 216), *(_QWORD *)(a1 + 224));
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 360);
  if ( v3 >= 0x10 )
    sub_180010884(*(char **)(a1 + 336), v3 + 1);
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 15LL;
  *(_BYTE *)(a1 + 336) = 0;
  sub_180010910(a1 + 320);
  sub_180010910(a1 + 304);
  sub_180010910(a1 + 288);
  sub_180010910(a1 + 272);
  v4 = *(char **)(a1 + 240);
  if ( v4 )
  {
    sub_180010884(v4, (*(_QWORD *)(a1 + 256) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 216);
  if ( v5 )
  {
    sub_1800126E8(v5, *(_QWORD *)(a1 + 224));
    sub_180010884(*(char **)(a1 + 216), (*(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 216)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 216) = 0LL;
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  sub_180010910(a1 + 200);
  sub_180010910(a1 + 184);
  return sub_1800A86F4(a1);
}
