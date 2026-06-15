/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIMMNotificationClient@@@WRL@Microsoft@@QEAA@XZ @ 0x18005D648
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18005D3CC (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0CEndpointNotificationDelegator@@QEAA@XZ @ 0x1801043A4 (--0CEndpointNotificationDelegator@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>(
        _QWORD *a1)
{
  a1[4] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMMNotificationClient>::`vftable'{for `IMMNotificationClient'};
  a1[2] = &AtmosCheck::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
