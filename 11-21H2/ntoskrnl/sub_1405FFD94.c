/*
 * XREFs of sub_1405FFD94 @ 0x1405FFD94
 * Callers:
 *     sub_140A9A468 @ 0x140A9A468 (sub_140A9A468.c)
 * Callees:
 *     <none>
 */

char sub_1405FFD94()
{
  int v0; // ecx
  __int64 v1; // rax

  v0 = 0;
  if ( !off_140D4E250 )
    return 0;
  v1 = 0LL;
  while ( ((__int64)(&off_140D4E250)[v1 + 1] & 1) == 0 )
  {
    v1 = 4LL * (unsigned int)++v0;
    if ( !(&off_140D4E250)[v1] )
      return 0;
  }
  return 1;
}
