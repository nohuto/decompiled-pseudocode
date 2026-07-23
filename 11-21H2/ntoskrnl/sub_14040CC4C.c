/*
 * XREFs of sub_14040CC4C @ 0x14040CC4C
 * Callers:
 *     sub_140401320 @ 0x140401320 (sub_140401320.c)
 * Callees:
 *     sub_14040D018 @ 0x14040D018 (sub_14040D018.c)
 *     sub_14040D558 @ 0x14040D558 (sub_14040D558.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

_DWORD *__fastcall sub_14040CC4C(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // esi
  unsigned __int64 v7; // r14

  v4 = a3 << 6;
  v7 = (a3 << 6) + (unsigned int)sub_14040D558(a3) + 64;
  if ( a2 < v7 )
    sub_14056AF38(1836016739LL);
  a1[3] = 0;
  *a1 = 1733099520;
  a1[1] = a3;
  a1[2] = v7;
  a1[4] = v4;
  sub_14040D018(a1 + 16, a2 - 64, a3);
  return a1;
}
