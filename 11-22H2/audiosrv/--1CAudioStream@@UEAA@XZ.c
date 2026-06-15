/*
 * XREFs of ??1CAudioStream@@UEAA@XZ @ 0x180016988
 * Callers:
 *     ??_ECAudioStream@@UEAAPEAXI@Z @ 0x180013F50 (--_ECAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1_WaitTask@@QEAA@XZ @ 0x1800140DC (--1_WaitTask@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1StreamGroupParams@@QEAA@XZ @ 0x180016C24 (--1StreamGroupParams@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180047644 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800486BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAXXZ @ 0x18004A8FC (-_Tidy@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE78C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall CAudioStream::~CAudioStream(CAudioStream *this)
{
  PTP_WAIT *v2; // rdi
  wil::details **v3; // rsi
  __int64 *v4; // rdi
  void *v5; // rcx
  void *v6; // rdi
  void *v7; // rcx
  void *v8; // rdx
  std::_Ref_count_base *v9; // rcx
  void *v10; // rcx
  wil::details *v11; // rcx
  wil::details *v12; // rcx
  void *v13; // rdx
  void *v14; // rdi
  wil::details *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rcx
  void *v19; // rcx

  *(_QWORD *)this = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 1) = &CAudioStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioStreamInfo,IAudioStreamPolicyVolumeClient,IDuckingController>'};
  *((_QWORD *)this + 2) = &CAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *((_QWORD *)this + 3) = &CAudioStream::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDuckingController>'};
  v2 = (PTP_WAIT *)*((_QWORD *)this + 46);
  *((_QWORD *)this + 46) = 0LL;
  if ( v2 )
  {
    _WaitTask::~_WaitTask(v2);
    operator delete(v2, 0x28uLL);
  }
  v3 = (wil::details **)((char *)this + 384);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
    (wil::details **)this + 48,
    0LL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 16);
  v4 = (__int64 *)*((_QWORD *)this + 79);
  if ( v4 )
  {
    v5 = (void *)v4[1];
    if ( v5 )
      operator delete(v5, 0x50uLL);
    wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>(v4);
    operator delete(v4, 0x10uLL);
  }
  v6 = (void *)*((_QWORD *)this + 78);
  if ( v6 )
  {
    StreamGroupParams::~StreamGroupParams(*((StreamGroupParams **)this + 78));
    operator delete(v6, 0x58uLL);
  }
  v7 = (void *)*((_QWORD *)this + 77);
  if ( v7 )
    CoTaskMemFree(v7);
  std::vector<_GUID>::_Tidy((char *)this + 592);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 72);
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 70);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v10 = (void *)*((_QWORD *)this + 66);
  if ( v10 )
    operator delete(v10);
  v11 = (wil::details *)*((_QWORD *)this + 51);
  if ( v11 )
    wil::details::CloseHandle(v11, v8);
  v12 = (wil::details *)*((_QWORD *)this + 50);
  if ( v12 )
    wil::details::CloseHandle(v12, v8);
  if ( *v3 )
    wil::details::delete_wnf_subscription_state(*v3, (struct wil::details::wnf_subscription_state_base *)v8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 47);
  v14 = (void *)*((_QWORD *)this + 46);
  if ( v14 )
  {
    _WaitTask::~_WaitTask(*((PTP_WAIT **)this + 46));
    operator delete(v14, 0x28uLL);
  }
  v15 = (wil::details *)*((_QWORD *)this + 45);
  if ( v15 )
    wil::details::CloseHandle(v15, v13);
  NtDeleteWnfStateName((char *)this + 348);
  v16 = *((_QWORD *)this + 38);
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
      v16,
      *((_QWORD *)this + 39));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 38),
      (*((_QWORD *)this + 40) - *((_QWORD *)this + 38)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v17 = *((_QWORD *)this + 29);
  if ( v17 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(
      v17,
      *((_QWORD *)this + 30));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 29),
      (*((_QWORD *)this + 31) - *((_QWORD *)this + 29)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_QWORD *)this + 31) = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 28);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 27);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)this + 26);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)this + 25);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)this + 23);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v18 = (void *)*((_QWORD *)this + 16);
  if ( v18 )
    operator delete(v18);
  v19 = (void *)*((_QWORD *)this + 15);
  if ( v19 )
    operator delete(v19);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 7);
  *((_DWORD *)this + 9) = -1073741823;
}
