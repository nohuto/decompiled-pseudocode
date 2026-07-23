/*
 * XREFs of RtlpGetStackLimits @ 0x14022EA70
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x140227910 (RtlEnoughStackSpaceForStackCapture.c)
 *     IoGetStackLimits @ 0x14022EA40 (IoGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x1402A4530 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4FD0 (RtlUnwindEx.c)
 *     MiDoStackCopy @ 0x14062D2F0 (MiDoStackCopy.c)
 *     PspGetSetContextInternal @ 0x140724C00 (PspGetSetContextInternal.c)
 *     ViMiscValidateKeWaitUsage @ 0x140AE1600 (ViMiscValidateKeWaitUsage.c)
 *     MmVerifierTrimMemory @ 0x140AE80F0 (MmVerifierTrimMemory.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x14022EAC0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x14041F4C0 (KeGetCurrentStackPointer.c)
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
