/*
 * XREFs of ??0SpectreNode@@QEAA@XZ @ 0x180014AF4
 * Callers:
 *     ??$MakeAndInitialize@VSpectreNode@@V1@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@AEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800149F4 (--$MakeAndInitialize@VSpectreNode@@V1@AEAV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details.c)
 *     ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BA00 (--$MakeAndInitialize@VSpectreNode@@V1@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
SpectreNode *__fastcall SpectreNode::SpectreNode(SpectreNode *this)
{
  *(_QWORD *)this = &ISpectreNode::`vftable';
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpectreNode>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &SpectreNode::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpectreNode>'};
  *((_QWORD *)this + 2) = &SpectreNode::`vftable'{for `SpectreMeshComponent'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return this;
}
