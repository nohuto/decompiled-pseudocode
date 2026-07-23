/*
 * XREFs of sqrt @ 0x1403E2740
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E53A0 @ 0x1403E53A0 (sub_1403E53A0.c)
 */

double __cdecl sqrt(double X)
{
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0x7FF0000000000000LL )
  {
LABEL_7:
    if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 || X >= 0.0 )
      return sqrt(X);
LABEL_6:
    sub_1403E53A0((unsigned int)"sqrt", 5, 0, 1, 8, 33, *(__int64 *)&X, 0LL, 1);
    return X;
  }
  if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) == 0 )
  {
    if ( X < 0.0 )
      goto LABEL_6;
    goto LABEL_7;
  }
  sub_1403E53A0((unsigned int)"sqrt", 5, LODWORD(X), 1, 0, 33, *(__int64 *)&X, 0LL, 1);
  return X;
}
