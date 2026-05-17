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

__int64 __fastcall LdrpHashUnicodeString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  LOBYTE(a2) = 1;
  RtlHashUnicodeString(a1, a2, 0LL, &v3);
  result = v3;
  if ( !v3 )
    return 0x80000000LL;
  return result;
}
