/*
 * XREFs of IoQueryFullDriverPath @ 0x1403B5230
 * Callers:
 *     sub_1409440D0 @ 0x1409440D0 (sub_1409440D0.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoQueryFullDriverPath(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  __int64 Pool2; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 3221226021LL;
  Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(v2 + 74), 538996553LL);
  a2->Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  a2->MaximumLength = *(_WORD *)(v2 + 74);
  RtlCopyUnicodeString(a2, (PCUNICODE_STRING)(v2 + 72));
  return 0LL;
}
