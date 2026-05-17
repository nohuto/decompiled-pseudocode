/*
 * XREFs of isalpha @ 0x18008FAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isalpha(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180181150[v1] & 0x103;
}
