/*
 * XREFs of sub_140802020 @ 0x140802020
 * Callers:
 *     sub_140801D60 @ 0x140801D60 (sub_140801D60.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_140802020(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  PVOID v5; // r10
  PVOID v6; // r11

  sub_140313C70(a2);
  v4 = sub_140313C70(v2 + v3);
  PoSetHiberRange(v6, 2u, v5, v4 - (_QWORD)v5, 0x20657450u);
}
