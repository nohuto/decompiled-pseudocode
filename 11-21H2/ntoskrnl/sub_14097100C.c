/*
 * XREFs of sub_14097100C @ 0x14097100C
 * Callers:
 *     sub_140974020 @ 0x140974020 (sub_140974020.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 */

UNICODE_STRING *__fastcall sub_14097100C(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *v2; // rax
  UNICODE_STRING *v3; // rbx

  v2 = (UNICODE_STRING *)sub_1402828F0(256, SourceString->Length + 64LL, 0x73486D4Du);
  v3 = v2;
  if ( v2 )
  {
    v2[3].Buffer = &v2[4].Length;
    v2[3].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(v2 + 3, SourceString);
  }
  return v3;
}
