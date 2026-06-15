/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140005270
 * Callers:
 *     ??0CAPOProcessingHostObject@@QEAA@XZ @ 0x140005134 (--0CAPOProcessingHostObject@@QEAA@XZ.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x140005238 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x140052E68 (--0CpuManager@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@@Z @ 0x14007429C (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssW.c)
 *     ??0CRTThreadManager@@QEAA@XZ @ 0x1400745C0 (--0CRTThreadManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
