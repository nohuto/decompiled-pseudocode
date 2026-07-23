/*
 * XREFs of sub_1409BE594 @ 0x1409BE594
 * Callers:
 *     RtlNormalizeString @ 0x1409BE510 (RtlNormalizeString.c)
 * Callees:
 *     sub_1409BD350 @ 0x1409BD350 (sub_1409BD350.c)
 *     sub_1409BDA38 @ 0x1409BDA38 (sub_1409BDA38.c)
 */

__int64 __fastcall sub_1409BE594(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4, int *a5)
{
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v9; // r10d

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
  if ( (int)v7 > 0 && a4 )
  {
    if ( a4 < a2 + 2LL * a3 && a4 + 2 * v7 > a2 )
      return 3221225485LL;
    return (unsigned int)sub_1409BDA38(a1, a2, a3, a4, v7, a5);
  }
  else if ( a2 && a3 >= 0 )
  {
    *a5 = sub_1409BD350(a1, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
