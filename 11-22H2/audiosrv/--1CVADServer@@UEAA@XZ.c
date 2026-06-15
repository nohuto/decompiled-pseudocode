/*
 * XREFs of ??1CVADServer@@UEAA@XZ @ 0x180017678
 * Callers:
 *     ??_GCVADServer@@UEAAPEAXI@Z @ 0x18004B0E0 (--_GCVADServer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RemoveAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800148CC (-RemoveAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXPEAU__PO.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??1?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015DEC (--1-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x180017948 (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180054A94 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ??1?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180073AE4 (--1-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  CServerAudioSessionControl *v3; // rcx
  struct CAudioStream **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rdx
  void *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  void *v10; // rcx
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)this = &CVADServer::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUnknown>::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IUnknown>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *(_OWORD *)v11 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 448);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  std::shared_ptr<std::function<void (void)>>::operator=(v11, (char *)this + 488);
  if ( v2 )
    LeaveCriticalSection(v2);
  std::shared_ptr<CPowerReference>::reset(v11);
  v3 = (CServerAudioSessionControl *)*((_QWORD *)this + 17);
  if ( v3 )
    CServerAudioSessionControl::RemoveClientReference(v3);
  v4 = (struct CAudioStream **)((char *)this + 168);
  if ( *((_QWORD *)this + 21) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
    if ( *((_QWORD *)*v4 + 6) )
    {
      if ( *((_BYTE *)this + 164) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 232LL))(*((_QWORD *)this + 18));
      CAudioSession::RemoveStream(*((CAudioSession **)this + 18), *v4, 1);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 21);
    if ( this != (CVADServer *)-192LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  }
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 18) = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  EnterCriticalSection(&g_csVadList);
  for ( i = g_VADServerList; i; i = *(_QWORD *)i )
  {
    if ( *(CVADServer **)(i + 16) == this )
    {
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAt(v6, (__int64 *)i);
      break;
    }
  }
  LeaveCriticalSection(&g_csVadList);
  if ( v11[1] )
    std::_Ref_count_base::_Decref(v11[1]);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((char *)this + 600);
  std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>((char *)this + 576);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 71);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 66);
  v8 = (void *)*((_QWORD *)this + 64);
  if ( v8 )
    operator delete(v8, 1uLL);
  wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::~com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>((__int64 *)this + 63);
  v9 = (std::_Ref_count_base *)*((_QWORD *)this + 62);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  DeleteCriticalSection(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v10 = (void *)*((_QWORD *)this + 23);
  if ( v10 )
    CoTaskMemFree(v10);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)this + 21);
  CoTaskMemFree(*((LPVOID *)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CVADServer *)((char *)this + 48));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>(this);
}
