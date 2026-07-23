/*
 * XREFs of sub_1409AC7F8 @ 0x1409AC7F8
 * Callers:
 *     sub_1409AC998 @ 0x1409AC998 (sub_1409AC998.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     PsRemoveSiloContext @ 0x1409AB7E0 (PsRemoveSiloContext.c)
 */

__int64 __fastcall sub_1409AC7F8(__int64 a1)
{
  __int64 result; // rax
  UNICODE_STRING *v3; // rax
  wchar_t *Buffer; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  SourceString = 0LL;
  result = PsRemoveSiloContext(a1, (unsigned int)dword_140D05140, &SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(UNICODE_STRING **)(a1 + 1464);
    Buffer = v3[82].Buffer;
    v3[79] = 0LL;
    v3[79].Buffer = Buffer + 15;
    v5 = SourceString;
    v3[79].MaximumLength = 520;
    RtlCopyUnicodeString(v3 + 79, v5);
    PsDereferenceSiloContext((void *)SourceString);
    return 0LL;
  }
  return result;
}
