/*
 * XREFs of KiRestoreDebugRegisterState @ 0x14041E860
 * Callers:
 *     NtContinueEx @ 0x14041EAD0 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041EF50 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14041FBE0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404209F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140420E30 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421270 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x140422B80 (KiCallUserMode.c)
 *     KxStartUserThread @ 0x140423870 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424080 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425920 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429630 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14042BF80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140430280 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1404309C0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431440 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
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
