/*
 * XREFs of sub_14054310C @ 0x14054310C
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14054310C(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 == 1 )
    result = 0x2000LL;
  dword_140D0689C &= result;
  return result;
}
