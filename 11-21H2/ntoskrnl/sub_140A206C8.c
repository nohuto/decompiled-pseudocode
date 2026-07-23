/*
 * XREFs of sub_140A206C8 @ 0x140A206C8
 * Callers:
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 *     sub_140A20B1C @ 0x140A20B1C (sub_140A20B1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A206C8(__int64 **a1, int a2, _QWORD *a3)
{
  __int64 *i; // r9

  for ( i = *a1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)a1 )
      return 3221226021LL;
    if ( (i[6] & 3) != 0 && *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 0LL;
}
