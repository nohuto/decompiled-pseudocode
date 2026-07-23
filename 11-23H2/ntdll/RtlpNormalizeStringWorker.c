/*
 * XREFs of RtlpNormalizeStringWorker @ 0x180089D10
 * Callers:
 *     RtlNormalizeString @ 0x180089C90 (RtlNormalizeString.c)
 * Callees:
 *     Normalization__Normalize @ 0x180089EE8 (Normalization__Normalize.c)
 *     Normalization__GuessCharCountBySize @ 0x18010E520 (Normalization__GuessCharCountBySize.c)
 */

__int64 __fastcall RtlpNormalizeStringWorker(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, int *a5)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // r10d

  v6 = -1LL;
  v7 = *a5;
  *a5 = 0;
  if ( a3 == -1 )
  {
    do
      ++v6;
    while ( *(_WORD *)(a2 + 2 * v6) );
    a3 = v6 + 1;
  }
  if ( (int)v7 <= 0 || !a4 )
  {
    if ( a2 && a3 >= 0 )
      *a5 = Normalization__GuessCharCountBySize(a1, (unsigned int)a3);
    else
      return (unsigned int)-1073741811;
    return v8;
  }
  if ( a4 >= a2 + 2LL * a3 || a4 + 2 * v7 <= a2 )
    return (unsigned int)Normalization__Normalize(a1, a2, a3, a4, v7, (__int64)a5);
  return 3221225485LL;
}
