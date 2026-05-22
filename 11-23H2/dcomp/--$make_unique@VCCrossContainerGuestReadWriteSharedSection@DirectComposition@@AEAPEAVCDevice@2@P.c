/*
 * XREFs of ??$make_unique@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@AEAPEAVCDevice@2@PEAVCCrossContainerGuestReadWriteSharedSectionProxy@2@AEAPEAEAEA_K$0A@@std@@YA?AV?$unique_ptr@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@U?$default_delete@VCCrossContainerGuestReadWriteSharedSection@DirectComposition@@@std@@@0@AEAPEAVCDevice@DirectComposition@@$$QEAPEAVCCrossContainerGuestReadWriteSharedSectionProxy@3@AEAPEAEAEA_K@Z @ 0x1800EC3A0
 * Callers:
 *     ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z @ 0x1800EC5E8 (-Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::make_unique<DirectComposition::CCrossContainerGuestReadWriteSharedSection,DirectComposition::CDevice * &,DirectComposition::CCrossContainerGuestReadWriteSharedSectionProxy *,unsigned char * &,unsigned __int64 &,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v9 = DefaultHeap::AllocClear(0x48uLL);
  v10 = v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v11 = *a4;
  v12 = *a3;
  v13 = *a5;
  v9[3] = *a2;
  *v9 = &DirectComposition::CCrossContainerGuestReadWriteSharedSection::`vftable';
  result = a1;
  v10[4] = v12;
  v10[7] = v11;
  v10[8] = v13;
  *a1 = v10;
  return result;
}
