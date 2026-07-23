/*
 * XREFs of sub_140208BE0 @ 0x140208BE0
 * Callers:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_140208BA0 @ 0x140208BA0 (sub_140208BA0.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140208BE0(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx

  v1 = *a1;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  v2 = a1[1];
  if ( (v2 & 1) != 0 || v1 > v2 || v2 == 0xFFFF || !*((_QWORD *)a1 + 1) && (v1 || v2) )
    return 3221225485LL;
  else
    return 0LL;
}
