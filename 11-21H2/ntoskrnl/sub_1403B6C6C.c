/*
 * XREFs of sub_1403B6C6C @ 0x1403B6C6C
 * Callers:
 *     sub_140A521EC @ 0x140A521EC (sub_140A521EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B6C6C(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = a2;
  if ( a2 >= 8 )
    v2 = a2 - 8;
  result = 45057 - (unsigned int)(a2 < 8);
  *a1 = result;
  a1[1] = v2;
  return result;
}
