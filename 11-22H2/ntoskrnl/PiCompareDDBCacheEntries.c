/*
 * XREFs of PiCompareDDBCacheEntries @ 0x1407D52C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406DA1F0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PiCompareDDBCacheEntries(_RTL_AVL_TABLE *a1, const UNICODE_STRING *a2, const UNICODE_STRING *a3)
{
  LONG v6; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx

  v6 = RtlCompareUnicodeString(a2 + 1, a3 + 1, 1u);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 > 0 )
    return 1LL;
  if ( a1->TableContext )
    return 2LL;
  v8 = *(_DWORD *)&a2[2].Length;
  v9 = *(_DWORD *)&a3[2].Length;
  if ( v8 < v9 )
    return 0LL;
  return 2 - (unsigned int)(v9 < v8);
}
