/*
 * XREFs of sub_14028CA70 @ 0x14028CA70
 * Callers:
 *     sub_140213FA8 @ 0x140213FA8 (sub_140213FA8.c)
 *     sub_140228464 @ 0x140228464 (sub_140228464.c)
 *     sub_1402C3410 @ 0x1402C3410 (sub_1402C3410.c)
 *     sub_1405B0E30 @ 0x1405B0E30 (sub_1405B0E30.c)
 *     sub_1405C1CE0 @ 0x1405C1CE0 (sub_1405C1CE0.c)
 *     sub_140B05620 @ 0x140B05620 (sub_140B05620.c)
 * Callees:
 *     sub_14023073C @ 0x14023073C (sub_14023073C.c)
 *     sub_14028CB64 @ 0x14028CB64 (sub_14028CB64.c)
 *     sub_14028CEE0 @ 0x14028CEE0 (sub_14028CEE0.c)
 *     sub_14028CF90 @ 0x14028CF90 (sub_14028CF90.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_1405B766C @ 0x1405B766C (sub_1405B766C.c)
 */

__int64 __fastcall sub_14028CA70(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r12
  unsigned int v7; // r15d
  int v8; // r8d
  int v9; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    sub_14028CF90(a1, a2);
  v6 = qword_14001C780[v3];
  v7 = 1;
  if ( (a3 & 1) != 0 && (unsigned int)sub_14023073C(v3) )
  {
    v7 = 0;
    sub_1405B766C(a1, (unsigned int)v3, 0LL);
  }
  v8 = 512;
  v9 = a1;
  if ( (unsigned int)v3 > 1 )
    v9 = a1 & 0xFFFFFE00;
  else
    v8 = v6;
  sub_1402C38D0(
    *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
    v9,
    v8,
    0,
    0);
  if ( (unsigned int)sub_14028CEE0(a1, (unsigned int)v3, a3) )
    return sub_14028CB64(48 * a1 - 0x220000000000LL, (a3 & 1) == 0, v7);
  else
    return 0LL;
}
