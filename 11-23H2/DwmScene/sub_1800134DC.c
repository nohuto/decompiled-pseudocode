/*
 * XREFs of sub_1800134DC @ 0x1800134DC
 * Callers:
 *     sub_1800137B0 @ 0x1800137B0 (sub_1800137B0.c)
 *     sub_180024210 @ 0x180024210 (sub_180024210.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180032900 @ 0x180032900 (sub_180032900.c)
 *     sub_18003B9D0 @ 0x18003B9D0 (sub_18003B9D0.c)
 *     sub_18003D4BC @ 0x18003D4BC (sub_18003D4BC.c)
 *     sub_18004F228 @ 0x18004F228 (sub_18004F228.c)
 *     sub_18004F360 @ 0x18004F360 (sub_18004F360.c)
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 *     sub_18005D118 @ 0x18005D118 (sub_18005D118.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_18007F33C @ 0x18007F33C (sub_18007F33C.c)
 *     sub_180081340 @ 0x180081340 (sub_180081340.c)
 *     sub_18008349C @ 0x18008349C (sub_18008349C.c)
 *     sub_180087790 @ 0x180087790 (sub_180087790.c)
 *     sub_18008BBA8 @ 0x18008BBA8 (sub_18008BBA8.c)
 *     sub_18008DF40 @ 0x18008DF40 (sub_18008DF40.c)
 *     sub_18008ECF0 @ 0x18008ECF0 (sub_18008ECF0.c)
 *     sub_180097934 @ 0x180097934 (sub_180097934.c)
 *     sub_18009CB54 @ 0x18009CB54 (sub_18009CB54.c)
 * Callees:
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

void **__fastcall sub_1800134DC(void **a1, void **a2)
{
  size_t v3; // r8

  if ( a1 != a2 )
  {
    v3 = (size_t)a2[2];
    if ( (unsigned __int64)a2[3] >= 0x10 )
      a2 = (void **)*a2;
    sub_180011BA0(a1, a2, v3);
  }
  return a1;
}
