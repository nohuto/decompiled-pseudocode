/*
 * XREFs of ?Allocate@CCrossContainerHostReadOnlySharedSection@DirectComposition@@QEAAJ_KPEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EC9AC
 * Callers:
 *     ?AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1PEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z @ 0x1800EDB38 (-AllocateCrossContainerHostReadOnlySharedMemory@CDevice@DirectComposition@@QEAAJ_K0AEBU_GUID@@1P.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     McTemplateU0xqqt_EventWriteTransfer @ 0x1800EC80C (McTemplateU0xqqt_EventWriteTransfer.c)
 *     ??0CSharedAllocationBase@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z @ 0x1800FB210 (--0CSharedAllocationBase@DirectComposition@@QEAA@PEAVCSharedSectionBase@1@@Z.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSection::Allocate(
        DirectComposition::CCrossContainerHostReadOnlySharedSection *this,
        __int64 a2,
        struct DirectComposition::CCrossContainerHostReadOnlySharedAllocation **a3)
{
  DirectComposition::CSharedAllocationBase *v6; // rax
  DirectComposition::CSharedAllocationBase *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (DirectComposition::CSharedAllocationBase *)DefaultHeap::Alloc(0x40uLL);
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, 0x40uLL);
    DirectComposition::CSharedAllocationBase::CSharedAllocationBase(v7, this);
    *((_QWORD *)v7 + 7) = a2;
    *(_QWORD *)v7 = &DirectComposition::CCrossContainerHostReadOnlySharedAllocation::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
    *((_QWORD *)v7 + 2) = &DirectComposition::CCrossContainerHostReadOnlySharedAllocation::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
    ++*((_QWORD *)this + 5);
    v11 = (Microsoft_Windows_DirectCompositionEnableBits & 0x20) == 0;
    *a3 = v7;
    if ( !v11 )
      McTemplateU0xqqt_EventWriteTransfer(v10, v9, (__int64)this, 0, 0, 0);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\crosscontainerhostreadonlysharedsection.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
