/*
 * XREFs of SymCryptMd5Append @ 0x1403FD3A0
 * Callers:
 *     HashpHashBytes @ 0x140A77894 (HashpHashBytes.c)
 * Callees:
 *     SymCryptHashAppendInternal @ 0x1404030A8 (SymCryptHashAppendInternal.c)
 */

__int64 __fastcall SymCryptMd5Append(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptHashAppendInternal(SymCryptMd5Algorithm_default, a1, a2, a3);
}
