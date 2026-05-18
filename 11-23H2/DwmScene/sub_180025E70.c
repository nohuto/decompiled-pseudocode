/*
 * XREFs of sub_180025E70 @ 0x180025E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180025E70(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
