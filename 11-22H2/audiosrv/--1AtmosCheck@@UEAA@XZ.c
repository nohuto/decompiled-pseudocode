/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x18015A0D8
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x18015A8B0 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D64 (-InternalRelease@-$ComPtr@UIPolicyConfig@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE78C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180159CE4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_t_ea_180159CE4.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC58 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details *v5; // rcx

  *(_QWORD *)this = &AtmosCheck::`vftable';
  *((_QWORD *)this + 1) = &AtmosCheck::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &AtmosCheck::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  AtmosCheck::Uninitialize(this);
  v2 = (void *)*((_QWORD *)this + 84);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 86) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 84) = 0LL;
    *((_QWORD *)this + 85) = 0LL;
    *((_QWORD *)this + 86) = 0LL;
  }
  std::_Deallocate<16,0>(
    *((void **)this + 79),
    (*((_QWORD *)this + 80) - *((_QWORD *)this + 79)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  std::_List_node<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>,void *>>>(
    v3,
    *((_QWORD ***)this + 77));
  std::_Deallocate<16,0>(*((void **)this + 77), 0x38uLL);
  `eh vector destructor iterator'(
    (char *)this + 272,
    48LL,
    7LL,
    (void (*)(void *))AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 31);
  v5 = (wil::details *)*((_QWORD *)this + 30);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v4);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 28);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  Microsoft::WRL::ComPtr<IPolicyConfig>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>((__int64)this);
}
