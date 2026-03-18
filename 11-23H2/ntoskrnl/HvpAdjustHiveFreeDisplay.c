/*
 * XREFs of HvpAdjustHiveFreeDisplay @ 0x14074FE94
 * Callers:
 *     HvFreeHivePartial @ 0x1407071A8 (HvFreeHivePartial.c)
 *     HvLoadHive @ 0x14074ED44 (HvLoadHive.c)
 *     HvpAddBin @ 0x14074F174 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x14080028C (HvpPerformLogFileRecovery.c)
 *     HvHiveStartMemoryBacked @ 0x140826290 (HvHiveStartMemoryBacked.c)
 * Callees:
 *     HvpAdjustBitmap @ 0x14074FF10 (HvpAdjustBitmap.c)
 */

__int64 __fastcall HvpAdjustHiveFreeDisplay(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 result; // rax

  if ( a2 > 0x7FFFE000 )
    return 3221225804LL;
  v5 = 0;
  v6 = 632LL * a3;
  while ( 1 )
  {
    result = HvpAdjustBitmap(a1, a2, a1 + v6 + 24 * (v5 + 13LL));
    if ( (int)result < 0 )
      break;
    if ( ++v5 >= 0x18 )
      return 0LL;
  }
  return result;
}
