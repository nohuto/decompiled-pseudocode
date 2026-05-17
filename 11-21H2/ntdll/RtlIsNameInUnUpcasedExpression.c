/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x180107CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x180107DCC (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180108344 (RtlpUpcaseUnicodeStringPrivate.c)
 */

char __fastcall RtlIsNameInUnUpcasedExpression(int a1, UNICODE_STRING *p_UnicodeString, char a3, __int64 a4)
{
  __int64 v4; // rdi
  UNICODE_STRING *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  char IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+40h] [rbp-18h] BYREF

  v4 = a4;
  LODWORD(v5) = a1;
  UnicodeString.Buffer = 0LL;
  v15.Buffer = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus(v6, v7, v8);
    v9 = RtlpUpcaseUnicodeStringPrivate(&v15);
    if ( v9 < 0 )
      RtlRaiseStatus(v9, v10, v11);
    p_UnicodeString = &UnicodeString;
    v5 = &v15;
    a3 = 0;
  }
  LOBYTE(a4) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate((_DWORD)v5, (_DWORD)p_UnicodeString, a3, a4, v4);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v15.Buffer )
    RtlFreeUnicodeString(&v15);
  return IsNameInExpressionPrivate;
}
