/*
 * XREFs of KiSaveDebugRegisterState @ 0x14041F330
 * Callers:
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KyStartUserThread @ 0x140423F70 (KyStartUserThread.c)
 *     KiApcInterrupt @ 0x140424AD0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140425290 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1404255F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425950 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425CB0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140426010 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1404276A0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     KiDivideErrorFault @ 0x14042C000 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14042C540 (KxDebugTrapOrFault.c)
 *     KiNmiInterruptStart @ 0x14042C980 (KiNmiInterruptStart.c)
 *     KiBreakpointTrap @ 0x14042CF00 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14042D280 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14042DD00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14042E3C0 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14042E780 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14042EB00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14042EE80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14042F200 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14042F600 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14042F980 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140430500 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x140430900 (KiAlignmentFault.c)
 *     KiMcheckAbort @ 0x140430C80 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1404313C0 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x140431A40 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432C80 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140433000 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140433380 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x1404339C0 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140AF7E40 (KiSystemCall32Shadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveDebugRegisterState()
{
  __int64 v0; // rbp
  KPCR *Pcr; // r9
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 KernelDr1; // rdx
  unsigned __int64 KernelDr3; // rdx
  unsigned __int64 KernelDr7; // rdx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx

  Pcr = KeGetPcr();
  v2 = __readdr(0);
  v3 = __readdr(1u);
  *(_QWORD *)(v0 + 88) = v2;
  *(_QWORD *)(v0 + 96) = v3;
  v4 = __readdr(2u);
  v5 = __readdr(3u);
  *(_QWORD *)(v0 + 104) = v4;
  *(_QWORD *)(v0 + 112) = v5;
  v6 = __readdr(6u);
  v7 = __readdr(7u);
  *(_QWORD *)(v0 + 120) = v6;
  *(_QWORD *)(v0 + 128) = v7;
  result = 0LL;
  __writedr(7u, 0LL);
  if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (v7 & 0x300) != 0 )
  {
    if ( (KiCpuTracingFlags & 2) != 0 )
    {
      *(_QWORD *)(v0 + 152) = 0LL;
      *(_QWORD *)(v0 + 144) = 0LL;
      *(_QWORD *)(v0 + 168) = 0LL;
      *(_QWORD *)(v0 + 160) = 0LL;
    }
    else
    {
      v9 = KiLastBranchTOSMSR;
      if ( KiLastBranchTOSMSR )
      {
        v10 = __readmsr(KiLastBranchTOSMSR);
        v9 = v10;
      }
      v11 = __readmsr(v9 + KiLastBranchFromBaseMSR);
      *(_DWORD *)(v0 + 152) = v11;
      v12 = KiLastBranchToBaseMSR;
      *(_DWORD *)(v0 + 156) = HIDWORD(v11);
      *(_QWORD *)(v0 + 144) = __readmsr(v9 + v12);
      *(_QWORD *)(v0 + 168) = __readmsr(KiLastExceptionFromBaseMSR);
      *(_QWORD *)(v0 + 160) = __readmsr(KiLastExceptionToBaseMSR);
      v13 = __readmsr(0x1D9u);
      v14 = HIDWORD(v13);
      result = (unsigned int)v13 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v14, result));
    }
  }
  if ( (Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7 & 0x355) != 0 )
  {
    KernelDr1 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr1;
    __writedr(0, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr0);
    __writedr(1u, KernelDr1);
    KernelDr3 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr3;
    __writedr(2u, Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr2);
    __writedr(3u, KernelDr3);
    KernelDr7 = Pcr->Prcb.ProcessorState.SpecialRegisters.KernelDr7;
    result = 0LL;
    __writedr(6u, 0LL);
    __writedr(7u, KernelDr7);
    if ( (KeGetPcr()->Prcb.FeatureBits & 0x20000) != 0 && (KernelDr7 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
    {
      if ( (KernelDr7 & 0x200) != 0 )
        LODWORD(result) = 2;
      if ( (KernelDr7 & 0x100) != 0 )
        LODWORD(result) = result | 1;
      v18 = result;
      v19 = __readmsr(0x1D9u);
      v20 = HIDWORD(v19);
      result = v18 | (unsigned int)v19 & 0xFFFFFFFC;
      __writemsr(0x1D9u, __PAIR64__(v20, result));
    }
  }
  return result;
}
