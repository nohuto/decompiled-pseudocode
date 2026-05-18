/*
 * XREFs of sub_180017600 @ 0x180017600
 * Callers:
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_1800C4D60 @ 0x1800C4D60 (sub_1800C4D60.c)
 *     sub_1800C5100 @ 0x1800C5100 (sub_1800C5100.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800D08F0 @ 0x1800D08F0 (sub_1800D08F0.c)
 *     sub_1800D25B0 @ 0x1800D25B0 (sub_1800D25B0.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001762C @ 0x18001762C (sub_18001762C.c)
 */

__int64 __fastcall sub_180017600(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  sub_18001762C();
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
    sub_180010530(v3);
  return a1;
}
