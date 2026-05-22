/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1800470DC
 * Callers:
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x180047020 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 *     ??0MagnifierProcessor@@QEAA@XZ @ 0x1801AF454 (--0MagnifierProcessor@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
