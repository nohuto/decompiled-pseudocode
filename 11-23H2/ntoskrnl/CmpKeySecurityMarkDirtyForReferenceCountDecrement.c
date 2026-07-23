/*
 * XREFs of CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x140419D84
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14070D128 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     HvMarkCellDirty @ 0x1408ABF46 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpKeySecurityMarkDirtyForReferenceCountDecrement(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = HvMarkCellDirty(a2, a3, 0LL);
  if ( (int)result >= 0 )
  {
    if ( a1[3] != 1 )
      return 0LL;
    result = HvMarkCellDirty(a2, a1[1], 0LL);
    if ( (int)result >= 0 )
    {
      result = HvMarkCellDirty(a2, a1[2], 0LL);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
