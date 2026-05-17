/*
 * XREFs of RtlStringCchLengthW @ 0x18004B2B4
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x180031550 (RtlpIdnToUnicodeWorker.c)
 *     RtlpNameprepAsciiRealWorker @ 0x180031CBC (RtlpNameprepAsciiRealWorker.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18004AA90 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlGetParentLocaleName @ 0x18004D7D0 (RtlGetParentLocaleName.c)
 *     LdrpMultiSZCchLength @ 0x18006E1D8 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18006E290 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpValidAttribute @ 0x1800F56E8 (RtlpValidAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( !a1 || a2 > 0x7FFFFFFF )
  {
    result = 3221225485LL;
LABEL_13:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  for ( i = a2; i; --i )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = i == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( i )
      *a3 = a2 - i;
    else
      *a3 = 0LL;
  }
  if ( !i )
    goto LABEL_13;
  return result;
}
