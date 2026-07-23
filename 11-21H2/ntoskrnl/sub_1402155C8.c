/*
 * XREFs of sub_1402155C8 @ 0x1402155C8
 * Callers:
 *     sub_14021538C @ 0x14021538C (sub_14021538C.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140592400 (MmMapMdl.c)
 * Callees:
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

signed __int64 __fastcall sub_1402155C8(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = sub_1402FDD20(); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = sub_140317A10(v1);
  do
  {
    if ( (dword_140D06880 & 0x4000000) != 0 )
      _mm_lfence();
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
