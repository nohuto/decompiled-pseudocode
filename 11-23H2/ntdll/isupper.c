/*
 * XREFs of isupper @ 0x18008FC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isupper(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180181150[v1] & 1;
}
