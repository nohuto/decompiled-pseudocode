/*
 * XREFs of sub_18001C61C @ 0x18001C61C
 * Callers:
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_18004C480 @ 0x18004C480 (sub_18004C480.c)
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_18004F4AC @ 0x18004F4AC (sub_18004F4AC.c)
 *     sub_18004F760 @ 0x18004F760 (sub_18004F760.c)
 *     sub_18004FBD8 @ 0x18004FBD8 (sub_18004FBD8.c)
 *     sub_18004FDD4 @ 0x18004FDD4 (sub_18004FDD4.c)
 *     sub_1800503B4 @ 0x1800503B4 (sub_1800503B4.c)
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     sub_180081210 @ 0x180081210 (sub_180081210.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_180082D18 @ 0x180082D18 (sub_180082D18.c)
 *     sub_18008323C @ 0x18008323C (sub_18008323C.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 *     sub_1800A58E8 @ 0x1800A58E8 (sub_1800A58E8.c)
 *     sub_1800A78BC @ 0x1800A78BC (sub_1800A78BC.c)
 *     sub_1800A7DC0 @ 0x1800A7DC0 (sub_1800A7DC0.c)
 *     sub_1800AF488 @ 0x1800AF488 (sub_1800AF488.c)
 *     sub_1800AF71C @ 0x1800AF71C (sub_1800AF71C.c)
 *     sub_1800AFAA8 @ 0x1800AFAA8 (sub_1800AFAA8.c)
 *     sub_1800B1B34 @ 0x1800B1B34 (sub_1800B1B34.c)
 *     sub_1800CB76C @ 0x1800CB76C (sub_1800CB76C.c)
 *     sub_1800D5B6C @ 0x1800D5B6C (sub_1800D5B6C.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     sub_1800D5EA0 @ 0x1800D5EA0 (sub_1800D5EA0.c)
 * Callees:
 *     sub_18001DE60 @ 0x18001DE60 (sub_18001DE60.c)
 */

_QWORD *__fastcall sub_18001C61C(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a3 + v4) );
  v6 = sub_18001DE60(a2);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 15LL;
  *(_BYTE *)v6 = 0;
  return a1;
}
