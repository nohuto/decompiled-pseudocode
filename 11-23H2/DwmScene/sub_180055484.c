/*
 * XREFs of sub_180055484 @ 0x180055484
 * Callers:
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 * Callees:
 *     sub_180025AEC @ 0x180025AEC (sub_180025AEC.c)
 *     sub_180051F00 @ 0x180051F00 (sub_180051F00.c)
 *     sub_180055560 @ 0x180055560 (sub_180055560.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180055484(_QWORD *a1, __int64 *a2, void **a3, __int64 a4)
{
  void *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = *a3;
  v9 = a2[2];
  a2[2] = 0LL;
  v10 = a2[1];
  a2[1] = 0LL;
  v11 = *a2;
  *a2 = 0LL;
  v14[0] = v11;
  v14[1] = v10;
  v14[2] = v9;
  ((void (__fastcall *)(_QWORD *, _QWORD *, void *, __int64))sub_180055560)(a1, v14, v8, a4);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v12 = *a3;
  *a3 = 0LL;
  a1[7] = v12;
  sub_180051F00((__int64)a2);
  sub_180025AEC(a3);
  return a1;
}
