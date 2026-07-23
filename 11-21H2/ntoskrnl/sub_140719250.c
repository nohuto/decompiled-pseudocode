/*
 * XREFs of sub_140719250 @ 0x140719250
 * Callers:
 *     sub_1407172C8 @ 0x1407172C8 (sub_1407172C8.c)
 *     sub_140719180 @ 0x140719180 (sub_140719180.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140719250(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int i; // ecx

  result = 0LL;
  for ( i = a1 >> 2; i; --i )
    result = (unsigned int)(*a2++ + __ROL4__(result, 3));
  return result;
}
