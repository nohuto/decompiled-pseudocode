/*
 * XREFs of KiInitiateUserApc @ 0x140424E20
 * Callers:
 *     NtContinueEx @ 0x14041F190 (NtContinueEx.c)
 *     NtRaiseException @ 0x14041F610 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140420C70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1404210B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1404214F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140421930 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140425FE0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140426430 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427310 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     NtCallEnclave @ 0x140429CF0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042D900 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14042F900 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 * Callees:
 *     KiDeliverApc @ 0x14030F890 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (__int64)&v1, v0 - 128);
}
