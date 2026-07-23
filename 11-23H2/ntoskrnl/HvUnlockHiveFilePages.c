/*
 * XREFs of HvUnlockHiveFilePages @ 0x1407EA27C
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     HvpViewMapAdjustFlag @ 0x1408297DC (HvpViewMapAdjustFlag.c)
 */

__int64 __fastcall HvUnlockHiveFilePages(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 0x800000) != 0 )
  {
    if ( (result & 0x20000) != 0 )
      result = HvpViewMapAdjustFlag(a1 + 224);
    *(_DWORD *)(a1 + 160) &= ~0x800000u;
  }
  return result;
}
