/*
 * XREFs of isgraph @ 0x1800943B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isgraph(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180174150[v1] & 0x117;
}
