/*
 * XREFs of sub_180020060 @ 0x180020060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 */

_QWORD *__fastcall sub_180020060(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::ITimeProvider::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B988(a1);
  return a1;
}
