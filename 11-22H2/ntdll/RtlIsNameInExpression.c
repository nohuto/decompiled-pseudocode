/*
 * XREFs of RtlIsNameInExpression @ 0x1801079B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180107B3C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1801080D0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

char __fastcall RtlIsNameInExpression(int a1, UNICODE_STRING *p_UnicodeString, char a3, __int64 a4)
{
  int v6; // eax
  wchar_t *Buffer; // rbx
  char IsNameInExpressionPrivate; // di
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( !a3 || a4 )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    p_UnicodeString = &UnicodeString;
    a3 = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(a1, (_DWORD)p_UnicodeString, a3, 0, a4);
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
