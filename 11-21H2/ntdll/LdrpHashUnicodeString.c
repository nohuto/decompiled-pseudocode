/*
 * XREFs of LdrpHashUnicodeString @ 0x18004FB5C
 * Callers:
 *     LdrpInsertDataTableEntry @ 0x18004D144 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpMapDllFullPath @ 0x18005133C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpAddRedirectedFunction @ 0x1800E0E90 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18004FB90 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(_UNICODE_STRING *a1)
{
  __int64 result; // rax
  ULONG HashValue; // [rsp+38h] [rbp+10h] BYREF

  HashValue = 0;
  RtlHashUnicodeString(a1, 1u, 0, &HashValue);
  result = HashValue;
  if ( !HashValue )
    return 0x80000000LL;
  return result;
}
