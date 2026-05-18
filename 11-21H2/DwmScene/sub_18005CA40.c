/*
 * XREFs of sub_18005CA40 @ 0x18005CA40
 * Callers:
 *     sub_1800E51F0 @ 0x1800E51F0 (sub_1800E51F0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001D6B8 @ 0x18001D6B8 (sub_18001D6B8.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18005CA40(_QWORD *a1, __int64 a2, LPVOID *a3)
{
  LPVOID v6; // r8
  LPVOID v7; // rax
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = *a3;
  v9[0] = *(_QWORD *)a2;
  v9[1] = *(_QWORD *)(a2 + 8);
  v9[2] = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  sub_18005CB40(a1, v9, v6);
  *a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v7 = *a3;
  *a3 = 0LL;
  a1[7] = v7;
  if ( *(_QWORD *)a2 )
  {
    sub_180010884(*(char **)a2, (*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  if ( *a3 )
    sub_18001D6B8(*a3);
  return a1;
}
