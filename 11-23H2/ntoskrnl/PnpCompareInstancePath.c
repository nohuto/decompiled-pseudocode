/*
 * XREFs of PnpCompareInstancePath @ 0x1406D7DE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PnpCompareInstancePath(_RTL_AVL_TABLE *a1, PCUNICODE_STRING *a2, PCUNICODE_STRING *a3)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeString(a2[1], a3[1], 1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
