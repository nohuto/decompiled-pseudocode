/*
 * XREFs of ??0CAPOEndpointNotificationsHandler@@QEAA@XZ @ 0x1400649A4
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEBGAEAPEAUIMMDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsHandler@@AEAPEBGAEAPEAUIMMDevice@@@Z @ 0x14006416C (--$MakeAndInitialize@VCAPOEndpointNotificationsHandler@@V1@AEAPEBGAEAPEAUIMMDevice@@@Details@WRL.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAPOEndpointNotificationsHandler *__fastcall CAPOEndpointNotificationsHandler::CAPOEndpointNotificationsHandler(
        CAPOEndpointNotificationsHandler *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeCallback>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpointVolumeCallback>::`vftable'{for `IAudioEndpointVolumeCallback'};
  *((_QWORD *)this + 2) = &CAPOEndpointNotificationsHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CAPOEndpointNotificationsHandler::`vftable';
  *((_QWORD *)this + 1) = &CAPOEndpointNotificationsHandler::`vftable'{for `IAudioEndpointVolumeCallback'};
  *((_QWORD *)this + 2) = &CAPOEndpointNotificationsHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 7LL;
  *((_WORD *)this + 20) = 0;
  *((_QWORD *)this + 9) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 2, 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 128), 0, 0);
  *((_BYTE *)this + 168) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  return this;
}
