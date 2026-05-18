/*
 * XREFs of sub_18004576C @ 0x18004576C
 * Callers:
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180043EFC @ 0x180043EFC (sub_180043EFC.c)
 *     sub_180044918 @ 0x180044918 (sub_180044918.c)
 *     sub_1800465F0 @ 0x1800465F0 (sub_1800465F0.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18004576C(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v4 = (_QWORD *)sub_18001D684();
  if ( v4 )
    v4 = (_QWORD *)sub_180044918((__int64)v4, a2);
  sub_180043EFC(a1, v4);
  sub_18002C3FC(*a1 + 16LL, (__int64)&v6);
  sub_1800465F0(*a1);
  if ( v7 )
    j_LanguageEnumProc(v6);
  return a1;
}
