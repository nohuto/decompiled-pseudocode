/*
 * XREFs of sub_140638840 @ 0x140638840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140638840(unsigned int a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a2 | a1;
  if ( (v2 & 0x3000000) != 0 )
    return 3221225659LL;
  LOBYTE(v2) = (a2 & 4) == 0;
  result = KsrCleanupPageDatabase(v2);
  if ( (int)result >= 0 )
    dword_140C5B11C &= ~4u;
  return result;
}
