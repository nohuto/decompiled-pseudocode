/*
 * XREFs of sub_1405723CC @ 0x1405723CC
 * Callers:
 *     sub_1402A08BC @ 0x1402A08BC (sub_1402A08BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405723CC(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 <= dword_140D068E8 )
    result = a2 << 20;
  else
    result = (unsigned int)((dword_140D068E8 << 20) - 1);
  *a1 = result;
  return result;
}
