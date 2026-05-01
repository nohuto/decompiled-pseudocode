/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISwitchItemController@@@WRL@Microsoft@@QEAA@XZ @ 0x18056C530
 * Callers:
 *     ??$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAU3@@Z @ 0x18056C160 (--$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@.c)
 *     ??$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU3@@Z @ 0x180589DDC (--$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@We.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISwitchItemController>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
