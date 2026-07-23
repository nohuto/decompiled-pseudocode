/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x180108E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180108F4C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180109500 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  PWCH v4; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = UpcaseTable;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = RtlpUpcaseUnicodeStringPrivate(&v11, Expression);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    Name = &UnicodeString;
    Expression = &v11;
    IgnoreCase = 0;
  }
  LOBYTE(UpcaseTable) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(
                                (_DWORD)Expression,
                                (_DWORD)Name,
                                IgnoreCase,
                                (_DWORD)UpcaseTable,
                                (__int64)v4);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeUnicodeString(&v11);
  return IsNameInExpressionPrivate;
}
