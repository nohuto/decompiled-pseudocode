/*
 * XREFs of HalpProcInitSystem @ 0x140A8A680
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsHvPresent @ 0x140377F7C (HalpIsHvPresent.c)
 *     HalpMcUpdateMicrocode @ 0x14037FF58 (HalpMcUpdateMicrocode.c)
 *     HalpProcGetFeatureBits @ 0x14037FFB4 (HalpProcGetFeatureBits.c)
 *     HalMcFinishMicrocode @ 0x1403B0E04 (HalMcFinishMicrocode.c)
 *     PrExtLogToTelemetry @ 0x1403B4F64 (PrExtLogToTelemetry.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051AA54 (HalpInterruptStartBlockedProcessors.c)
 *     HalpMcUpdateInitialize @ 0x14081E114 (HalpMcUpdateInitialize.c)
 *     HalpBlkInitSystem @ 0x140B48F28 (HalpBlkInitSystem.c)
 *     HalpProcInitDiscard @ 0x140B75924 (HalpProcInitDiscard.c)
 */

__int64 __fastcall HalpProcInitSystem(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = a1;
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
      goto LABEL_11;
  }
  if ( (_DWORD)a1 != 17 )
  {
    if ( (_DWORD)a1 != 21 )
    {
      if ( (_DWORD)a1 == 32 && !HalpIsHvPresent() )
        PrExtLogToTelemetry();
      return 0LL;
    }
    HalMcFinishMicrocode(a3, a2);
LABEL_11:
    HalpBlkInitSystem(v3);
    return 0LL;
  }
  HalpMcUpdateInitialize(a3, 0LL);
  if ( HalpInterruptBlockedProcessors )
    HalpInterruptStartBlockedProcessors(0);
  return 0LL;
}
