/*
 * XREFs of ??0CCrossProcessMemoryManager@@QEAA@XZ @ 0x14001A87C
 * Callers:
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001A6B8 (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessMemoryManager *__fastcall CCrossProcessMemoryManager::CCrossProcessMemoryManager(
        CCrossProcessMemoryManager *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICrossProcessMemoryManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CCrossProcessMemoryManager::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 4) = 24;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  return this;
}
