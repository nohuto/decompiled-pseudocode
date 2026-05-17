/*
 * XREFs of RtlStringCchLengthW @ 0x180015F28
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x18000D858 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x18000E670 (RtlpIdnToUnicodeWorker.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x180010438 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlGetParentLocaleName @ 0x180013E30 (RtlGetParentLocaleName.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18007021C (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x180070294 (LdrpMultiSZCchLength.c)
 *     RtlpValidAttribute @ 0x1800F5460 (RtlpValidAttribute.c)
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
