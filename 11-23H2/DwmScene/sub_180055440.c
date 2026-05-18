/*
 * XREFs of sub_180055440 @ 0x180055440
 * Callers:
 *     sub_1800551D8 @ 0x1800551D8 (sub_1800551D8.c)
 * Callees:
 *     sub_180025AEC @ 0x180025AEC (sub_180025AEC.c)
 *     sub_180055514 @ 0x180055514 (sub_180055514.c)
 */

_QWORD *__fastcall sub_180055440(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  void **v4; // r11
  void *v5; // rax

  sub_180055514(a1, a2, *a3);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v5 = *v4;
  *v4 = 0LL;
  a1[7] = v5;
  sub_180025AEC(v4);
  return a1;
}
