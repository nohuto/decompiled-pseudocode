/*
 * XREFs of KiRestoreDebugRegisterState @ 0x14041EF20
 * Callers:
 *     NtContinueEx @ 0x14041F190 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F610 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x140423240 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429CF0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14042C580 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140430880 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x8B22u) & 2) != 0 && (v3 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}
