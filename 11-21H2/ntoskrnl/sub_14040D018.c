/*
 * XREFs of sub_14040D018 @ 0x14040D018
 * Callers:
 *     sub_140400ACC @ 0x140400ACC (sub_140400ACC.c)
 *     sub_14040CC4C @ 0x14040CC4C (sub_14040CC4C.c)
 * Callees:
 *     sub_140400BBC @ 0x140400BBC (sub_140400BBC.c)
 *     sub_140401338 @ 0x140401338 (sub_140401338.c)
 *     sub_14056AF38 @ 0x14056AF38 (sub_14056AF38.c)
 */

_DWORD *__fastcall sub_14040D018(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int v6; // eax

  v6 = sub_140401338();
  if ( a2 < v6 )
    sub_14056AF38(1684633187LL);
  *a1 = 1732509696;
  a1[1] = a3;
  a1[2] = v6;
  sub_140400BBC();
  return a1;
}
