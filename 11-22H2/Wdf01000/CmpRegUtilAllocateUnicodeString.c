/*
 * XREFs of CmpRegUtilAllocateUnicodeString @ 0x1C00B1F64
 * Callers:
 *     CmRegUtilUcValueSetUcString @ 0x1C00B1D5C (CmRegUtilUcValueSetUcString.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 */

__int64 __fastcall CmpRegUtilAllocateUnicodeString(_UNICODE_STRING *String, unsigned __int16 Length)
{
  __int64 v2; // rdi
  wchar_t *PoolWithTag; // rax

  v2 = Length;
  String->MaximumLength = Length + 2;
  String->Length = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x63557050u);
  String->Buffer = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v2 + 2);
  return 0LL;
}
