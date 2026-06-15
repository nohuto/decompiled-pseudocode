/*
 * XREFs of ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14008F35C
 * Callers:
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000A8CC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14001FB5C (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(__int64 a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  CompareAddress = 0LL;
  if ( WaitOnAddress((volatile void *)(a1 + 288), &CompareAddress, 8uLL, 0xFFFFFFFF) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1ED,
    (__int64)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
    (const char *)0x887C0033LL);
  return 2289827891LL;
}
