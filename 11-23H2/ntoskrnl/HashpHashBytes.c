/*
 * XREFs of HashpHashBytes @ 0x140A775E4
 * Callers:
 *     HashpHashMemory @ 0x140A7701C (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256Append @ 0x1403F3500 (SymCryptSha256Append.c)
 *     SymCryptSha384Append @ 0x1403FA4F8 (SymCryptSha384Append.c)
 *     SymCryptSha512Append @ 0x1403FA5F4 (SymCryptSha512Append.c)
 *     SymCryptSha1Append @ 0x1403FBE80 (SymCryptSha1Append.c)
 *     SymCryptMd5Append @ 0x1403FD1C0 (SymCryptMd5Append.c)
 */

__int64 __fastcall HashpHashBytes(_DWORD *a1, char *a2, unsigned int a3)
{
  __int64 result; // rax

  switch ( *a1 )
  {
    case 0x8003:
      return SymCryptMd5Append((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x8004:
      return SymCryptSha1Append((__int64)(a1 + 4), (__int64)a2, a3);
    case 0x800C:
      return SymCryptSha256Append(a1 + 4, a2, a3);
    case 0x800D:
      return SymCryptSha384Append();
    case 0x800E:
      return SymCryptSha512Append(a1 + 4, a2, a3);
  }
  return result;
}
