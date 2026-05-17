/*
 * XREFs of LdrpMakePermanentImageCommit @ 0x18002DBCC
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x18002BAB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpLocateMrdata @ 0x1800E0C64 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpMakePermanentImageCommit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  unsigned __int64 i; // r8

  result = a1 & 0xFFF;
  v3 = (__int64 *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  for ( i = (unsigned __int64)(result + a2 + 4095) >> 12; i; --i )
  {
    result = *v3;
    *v3 = *v3;
    v3 += 512;
  }
  return result;
}
