/*
 * XREFs of ??$make_unique@VCSharedSection@DirectComposition@@AEAPEAVCDevice@2@PEAVCSharedSectionProxy@2@AEAPEAEAEAPEAXAEA_K$0A@@std@@YA?AV?$unique_ptr@VCSharedSection@DirectComposition@@U?$default_delete@VCSharedSection@DirectComposition@@@std@@@0@AEAPEAVCDevice@DirectComposition@@$$QEAPEAVCSharedSectionProxy@3@AEAPEAEAEAPEAXAEA_K@Z @ 0x18007E9D0
 * Callers:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18007EA64 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::make_unique<DirectComposition::CSharedSection,DirectComposition::CDevice * &,DirectComposition::CSharedSectionProxy *,unsigned char * &,void * &,unsigned __int64 &,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  _QWORD *v10; // rax
  _QWORD *v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  _QWORD *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v10 = DefaultHeap::AllocClear(0x50uLL);
  v11 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v12 = *a4;
  v13 = *a3;
  v14 = *a6;
  v15 = *a5;
  v10[3] = *a2;
  *v10 = &DirectComposition::CSharedSection::`vftable';
  result = a1;
  v11[4] = v13;
  v11[7] = v12;
  v11[8] = v15;
  v11[9] = v14;
  *a1 = v11;
  return result;
}
