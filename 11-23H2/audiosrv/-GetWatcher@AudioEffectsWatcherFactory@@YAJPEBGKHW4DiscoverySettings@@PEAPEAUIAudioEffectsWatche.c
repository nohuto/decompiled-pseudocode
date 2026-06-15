/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D5CD8
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800D7350 (s_afxOpenAudioEffectsWatcher.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800EE050 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180051B6C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$AsWeak@UIAudioEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800D4EE4 (--$AsWeak@UIAudioEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioEffectsWatcher@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800D5168 (--$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoveryS.c)
 *     std::find_if_std::_Flist_iterator_std::_Flist_val_std::_Flist_simple_types_Microsoft::WRL::WeakRef_______lambda_8ea9f2c5e3a9fcb3919d37e759784c23___ @ 0x1800D536C (std--find_if_std--_Flist_iterator_std--_Flist_val_std--_Flist_simple_types_Microsoft--WRL--WeakR.c)
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___ @ 0x1800D53F0 (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--remove_if__.c)
 *     ?attach@?$com_ptr_t@UIAudioEffectsWatcher@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIAudioEffectsWatcher@@@Z @ 0x1800D7218 (-attach@-$com_ptr_t@UIAudioEffectsWatcher@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIAudioEffe.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // r14
  int EndpointStore; // eax
  unsigned int v7; // ebx
  struct CEndpointStore *v8; // rbx
  struct CEndpointStore *v9; // rdi
  unsigned int **v10; // r15
  int v11; // eax
  unsigned int v12; // esi
  __int64 *v13; // rax
  int v14; // eax
  unsigned int *v15; // rsi
  __int64 v16; // rcx
  struct IUnknown **v17; // rdx
  struct IUnknown *v19; // rcx
  struct IUnknown *v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  struct CEndpointStore *v22[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v23; // [rsp+50h] [rbp-28h] BYREF
  unsigned int *v24; // [rsp+58h] [rbp-20h]
  int *v25; // [rsp+60h] [rbp-18h]
  struct IUnknown **v26; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 *v28; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+48h] BYREF
  int v31; // [rsp+C8h] [rbp+50h] BYREF

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v28 = a1;
  v5 = a5;
  *a5 = 0LL;
  v22[0] = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore((CEndpointStoreCache *)a1, (const unsigned __int16 *)a1, v22);
  v7 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x176,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_17:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)v22);
    return v7;
  }
  v8 = v22[0];
  v9 = (struct CEndpointStore *)((char *)v22[0] + 160);
  EnterCriticalSection((LPCRITICAL_SECTION)v22[0] + 4);
  v22[1] = v9;
  v10 = (unsigned int **)((char *)v8 + 200);
  std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___((__int64 **)v8 + 25);
  v20 = 0LL;
  v23 = &v29;
  v24 = &v30;
  v25 = &v31;
  v26 = &v20;
  std::find_if_std::_Flist_iterator_std::_Flist_val_std::_Flist_simple_types_Microsoft::WRL::WeakRef_______lambda_8ea9f2c5e3a9fcb3919d37e759784c23___(
    &a5,
    *((_QWORD **)v8 + 25),
    0LL,
    (__int64)&v23);
  if ( !a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
    v11 = Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher,IAudioEffectsWatcher,unsigned short const * &,unsigned long &,int &,enum DiscoverySettings &>(
            &a5,
            &v28,
            &v29,
            &v30,
            &v31);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x193,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v11);
LABEL_6:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      if ( v9 )
        LeaveCriticalSection((LPCRITICAL_SECTION)v9);
      v7 = v12;
      goto LABEL_17;
    }
    v21 = 0LL;
    v28 = &v21;
    v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v28);
    v14 = Microsoft::WRL::AsWeak<IAudioEffectsWatcher>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a5, v13);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x196,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
      goto LABEL_6;
    }
    v23 = (unsigned int *)((char *)v8 + 200);
    v24 = 0LL;
    v15 = (unsigned int *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v24 = v15;
    v16 = v21;
    *((_QWORD *)v15 + 1) = v21;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    *(_QWORD *)v15 = *v10;
    *v10 = v15;
    v17 = a5;
    a5 = 0LL;
    wil::com_ptr_t<IAudioEffectsWatcher,wil::err_returncode_policy>::attach(&v20, v17);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
  }
  if ( HasTooManyReferences(v20) )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    if ( v9 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v9);
    goto LABEL_17;
  }
  v19 = v20;
  if ( v20 )
  {
    *v5 = v20;
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->AddRef)(v19);
  }
  else
  {
    *v5 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  if ( v9 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
  return 0LL;
}
