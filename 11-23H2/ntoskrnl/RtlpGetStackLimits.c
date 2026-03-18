/*
 * XREFs of RtlpGetStackLimits @ 0x14022E960
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227800 (RtlEnoughStackSpaceForStackCapture.c)
 *     IoGetStackLimits @ 0x14022E930 (IoGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x1402A42A0 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4D40 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x14062CDA0 (MiDoStackCopy.c)
 *     PspGetSetContextInternal @ 0x140724A00 (PspGetSetContextInternal.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE1610 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140AE8100 (MmVerifierTrimMemory.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022E9B0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041F130 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+18h] BYREF

  CurrentStackPointer = KeGetCurrentStackPointer();
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v6, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
