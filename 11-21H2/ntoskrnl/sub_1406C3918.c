/*
 * XREFs of sub_1406C3918 @ 0x1406C3918
 * Callers:
 *     sub_1406C34B4 @ 0x1406C34B4 (sub_1406C34B4.c)
 *     sub_1406C38A8 @ 0x1406C38A8 (sub_1406C38A8.c)
 *     sub_1409DDFF0 @ 0x1409DDFF0 (sub_1409DDFF0.c)
 * Callees:
 *     sub_1402E1260 @ 0x1402E1260 (sub_1402E1260.c)
 */

__int64 __fastcall sub_1406C3918(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        char a8,
        char a9)
{
  unsigned int v9; // r10d
  int v11; // r8d
  unsigned int v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = a3;
  v9 = a6;
  if ( a3 )
  {
    if ( a3 < a2 )
      return 3221225473LL;
    if ( ((a3 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != a3 )
      return 3221225473LL;
    if ( a3 > (unsigned __int64)a6 - 2 )
      return 3221225473LL;
    v11 = sub_1402E1260(a3, (unsigned int)*(unsigned __int16 *)(a3 + a1) + 2, (int *)&v13);
    if ( v11 < 0 || v13 > v9 || a8 && v13 > a7 )
      return 3221225473LL;
    if ( !a4 )
      goto LABEL_14;
    if ( a4 < v13 )
      return 3221225473LL;
  }
  else
  {
    v11 = 0;
    if ( !a4 )
      goto LABEL_14;
  }
  if ( a4 < a2 )
    return 3221225473LL;
LABEL_14:
  if ( ((a4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) != a4
    || a9 && a4 && (a5 > v9 || a4 > v9 - a5)
    || a8 && (a7 < a2 || a4 > a7 || !a4) )
  {
    return 3221225473LL;
  }
  return (unsigned int)v11;
}
