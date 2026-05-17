/*
 * XREFs of RtlIsNameInExpression @ 0x180107C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180107DCC (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180108344 (RtlpUpcaseUnicodeStringPrivate.c)
 */

char __fastcall RtlIsNameInExpression(int a1, UNICODE_STRING *p_UnicodeString, char a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
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
      RtlRaiseStatus(v6, v7, v8);
    p_UnicodeString = &UnicodeString;
    a3 = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(a1, (_DWORD)p_UnicodeString, a3, 0, a4);
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
