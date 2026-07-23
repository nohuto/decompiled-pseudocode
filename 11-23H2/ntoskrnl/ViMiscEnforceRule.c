/*
 * XREFs of ViMiscEnforceRule @ 0x140AE1548
 * Callers:
 *     VfMiscMmAllocateContiguousMemoryEx_Entry @ 0x140AE01C0 (VfMiscMmAllocateContiguousMemoryEx_Entry.c)
 *     VfMiscMmAllocateContiguousMemory_Entry @ 0x140AE01F0 (VfMiscMmAllocateContiguousMemory_Entry.c)
 * Callees:
 *     VfUtilIsSignedDriver @ 0x1405CE8A8 (VfUtilIsSignedDriver.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2A4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViMiscEnforceRule(__int64 a1, __int64 a2, char a3)
{
  if ( (VfRuleClasses & 0x400000) != 0 || !VfUtilIsSignedDriver() )
  {
    if ( a3 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x8BuLL, 0LL, 0LL, 0LL);
  }
}
