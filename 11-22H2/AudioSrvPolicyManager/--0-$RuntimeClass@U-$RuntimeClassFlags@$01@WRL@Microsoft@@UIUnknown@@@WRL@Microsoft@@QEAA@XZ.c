/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18001BAAC
 * Callers:
 *     ??$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStreamClassPolicyManager@@@12@XZ @ 0x18001B1CC (--$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStreamClassPolicy.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x18001BB34 (--0CApplicationManager@@QEAA@XZ.c)
 *     ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18001F5D0 (--$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@.c)
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x180024CCC (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     ??0CApplication@@QEAA@XZ @ 0x18002C230 (--0CApplication@@QEAA@XZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18001BB0C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>(a1);
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
