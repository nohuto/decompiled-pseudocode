/*
 * XREFs of RtlIsNameInExpression @ 0x14030C360
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14030C158 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14066F260 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14030C3E0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpIsNameInExpressionPrivate @ 0x14030C5A0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 */

BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // edi
  int v6; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  UnicodeString = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
