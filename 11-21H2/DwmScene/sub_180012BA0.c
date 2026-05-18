/*
 * XREFs of sub_180012BA0 @ 0x180012BA0
 * Callers:
 *     sub_180064DC0 @ 0x180064DC0 (sub_180064DC0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_180012BA0(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  return a1;
}
