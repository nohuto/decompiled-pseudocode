/*
 * XREFs of HalpProcInitSystem @ 0x140A54E70
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdateMicrocode @ 0x1403B607C (HalpMcUpdateMicrocode.c)
 *     HalpProcGetFeatureBits @ 0x1403BAD80 (HalpProcGetFeatureBits.c)
 *     HalMcFinishMicrocode @ 0x1403BAEE8 (HalMcFinishMicrocode.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051E084 (HalpInterruptStartBlockedProcessors.c)
 *     HalpMcUpdateInitialize @ 0x14082481C (HalpMcUpdateInitialize.c)
 *     HalpProcInitDiscard @ 0x140AF8908 (HalpProcInitDiscard.c)
 *     HalpBlkInitSystem @ 0x140AF8974 (HalpBlkInitSystem.c)
 */

__int64 __fastcall HalpProcInitSystem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  switch ( (_DWORD)a1 )
  {
    case 4:
      HalpMcUpdateMicrocode(a1, a2, a3);
      return 0LL;
    case 0x13:
      HalpFeatureBits &= HalpProcGetFeatureBits();
      return 0LL;
    case 0xC:
      HalpProcInitDiscard(a3);
      v4 = 12LL;
      goto LABEL_10;
  }
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 != 21 )
      return 0LL;
    HalMcFinishMicrocode();
    v4 = 21LL;
LABEL_10:
    HalpBlkInitSystem(v4);
    return 0LL;
  }
  HalpMcUpdateInitialize(a3, 0LL);
  if ( HalpInterruptBlockedProcessors )
    HalpInterruptStartBlockedProcessors(0);
  return 0LL;
}
