/*
 * XREFs of sub_14023AD38 @ 0x14023AD38
 * Callers:
 *     sub_14023AC88 @ 0x14023AC88 (sub_14023AC88.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14023AD38(__int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r10d
  unsigned __int8 *i; // r9

  v3 = 0;
  if ( !dword_140C4A840 )
    return 0LL;
  for ( i = (unsigned __int8 *)(qword_140C4A858 + 54); a1 != *((_WORD *)i - 1) || a2 < *i || a2 > i[1]; i += 16 )
  {
    if ( ++v3 >= (unsigned int)dword_140C4A840 )
      return 0LL;
  }
  return *(_QWORD *)(i - 10) + (((a3 >> 5) + 8 * ((a3 & 0x1F) + 32LL * a2)) << 12);
}
