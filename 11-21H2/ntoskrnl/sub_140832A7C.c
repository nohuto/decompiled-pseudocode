/*
 * XREFs of sub_140832A7C @ 0x140832A7C
 * Callers:
 *     sub_140832AB0 @ 0x140832AB0 (sub_140832AB0.c)
 *     sub_1409116D0 @ 0x1409116D0 (sub_1409116D0.c)
 *     sub_140B15550 @ 0x140B15550 (sub_140B15550.c)
 * Callees:
 *     sub_140832AB0 @ 0x140832AB0 (sub_140832AB0.c)
 */

__int64 __fastcall sub_140832A7C(unsigned int *a1, __int64 a2)
{
  if ( (*a1 & 0x80u) == 0 )
    return *a1;
  else
    return sub_140832AB0(a1, *a1, a2);
}
