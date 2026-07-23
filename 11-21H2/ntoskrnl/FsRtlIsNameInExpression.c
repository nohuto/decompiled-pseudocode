/*
 * XREFs of FsRtlIsNameInExpression @ 0x140219D90
 * Callers:
 *     sub_140218F84 @ 0x140218F84 (sub_140218F84.c)
 *     sub_14064A96C @ 0x14064A96C (sub_14064A96C.c)
 * Callees:
 *     sub_140219EC0 @ 0x140219EC0 (sub_140219EC0.c)
 *     sub_14021A3A0 @ 0x14021A3A0 (sub_14021A3A0.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

BOOLEAN __stdcall FsRtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // edi
  NTSTATUS v6; // eax
  BOOLEAN v7; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  UnicodeString = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = sub_14021A3A0(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
  }
  v7 = sub_140219EC0(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return v7;
}
