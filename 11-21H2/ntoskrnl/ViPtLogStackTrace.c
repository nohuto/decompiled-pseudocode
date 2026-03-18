/*
 * XREFs of ViPtLogStackTrace @ 0x140A9DFBC
 * Callers:
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VfPtFreePoolNotification @ 0x140A9D69C (VfPtFreePoolNotification.c)
 *     VerifierMmCreateMdl @ 0x140A9FBB0 (VerifierMmCreateMdl.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AA8A0 (KeExpandKernelStackAndCalloutEx.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1405E47F4 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPtLogStackCallout @ 0x140A9DE70 (ViPtLogStackCallout.c)
 */

void __fastcall ViPtLogStackTrace(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 *v8; // rdx
  __int128 Parameter; // [rsp+30h] [rbp-18h] BYREF

  Parameter = 0LL;
  if ( (VfOptionFlags & 0x1000) == 0 || a2 != 1850304854 )
  {
    if ( VfPoolTraces )
    {
      if ( !MmIsSessionAddress(a1) )
      {
        v8 = (__int64 *)((char *)VfPoolTraces
                       + 424 * (_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1)));
        v8[2] = (__int64)KeGetCurrentThread();
        *v8 = a1;
        v8[1] = a3;
        *(_QWORD *)&Parameter = v8;
        DWORD2(Parameter) = a2;
        BYTE12(Parameter) = a4;
        if ( (VfOptionFlags & 2) == 0 )
        {
          if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
            ViPtLogStackCallout(&Parameter);
          else
            KeExpandKernelStackAndCalloutEx((PEXPAND_STACK_CALLOUT)ViPtLogStackCallout, &Parameter, 0xE30uLL, 1u, 0LL);
        }
      }
    }
  }
}
