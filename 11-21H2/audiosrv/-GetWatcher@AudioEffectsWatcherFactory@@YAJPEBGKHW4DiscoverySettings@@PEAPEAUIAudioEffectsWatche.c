/*
 * XREFs of ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800D31F8
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x1800D4C30 (s_afxOpenAudioEffectsWatcher.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x1800D108C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     ??$AsWeak@UIAudioEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800D2274 (--$AsWeak@UIAudioEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioEffectsWatcher@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800D24EC (--$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoveryS.c)
 *     std::find_if_std::_Flist_iterator_std::_Flist_val_std::_Flist_simple_types_Microsoft::WRL::WeakRef_______lambda_8ea9f2c5e3a9fcb3919d37e759784c23___ @ 0x1800D27A8 (std--find_if_std--_Flist_iterator_std--_Flist_val_std--_Flist_simple_types_Microsoft--WRL--WeakR.c)
 *     std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___ @ 0x1800D282C (std--forward_list_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--remove_if__.c)
 *     ?attach@?$com_ptr_t@UIAudioEffectsWatcher@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIAudioEffectsWatcher@@@Z @ 0x1800D4AF8 (-attach@-$com_ptr_t@UIAudioEffectsWatcher@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIAudioEffe.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // rsi
  int EndpointStore; // eax
  unsigned int v7; // edi
  struct CEndpointStore *v8; // rbx
  _QWORD *v9; // r14
  int v10; // eax
  __int64 *v11; // rax
  int v12; // eax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  struct IUnknown **v15; // rdx
  struct IUnknown *v16; // rcx
  struct IUnknown *v18; // [rsp+38h] [rbp-31h] BYREF
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  struct CEndpointStore *v20; // [rsp+48h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+58h] [rbp-11h]
  __int128 v23; // [rsp+68h] [rbp-1h]
  _OWORD v24[4]; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  __int64 *v26; // [rsp+C8h] [rbp+5Fh] BYREF
  unsigned int v27; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+6Fh] BYREF
  int v29; // [rsp+E0h] [rbp+77h] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = a1;
  v5 = a5;
  *a5 = 0LL;
  v20 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore((RTL_SRWLOCK *)a1, (const unsigned __int16 *)a1, &v20);
  v7 = EndpointStore;
  v8 = v20;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x170,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_19;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)v20 + 4);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)v8 + 160);
  v9 = (_QWORD *)((char *)v8 + 200);
  std::forward_list_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::remove_if__lambda_18f5db6963bdb451b262a69b713c7ee0___((__int64 **)v8 + 25);
  v18 = 0LL;
  *(_QWORD *)&v22 = &v27;
  *((_QWORD *)&v22 + 1) = &v28;
  *(_QWORD *)&v23 = &v29;
  *((_QWORD *)&v23 + 1) = &v18;
  v24[0] = v22;
  v24[1] = v23;
  std::find_if_std::_Flist_iterator_std::_Flist_val_std::_Flist_simple_types_Microsoft::WRL::WeakRef_______lambda_8ea9f2c5e3a9fcb3919d37e759784c23___(
    &a5,
    *((_QWORD **)v8 + 25),
    0LL,
    (__int64)v24);
  if ( a5 )
    goto LABEL_12;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher,IAudioEffectsWatcher,unsigned short const * &,unsigned long &,int &,enum DiscoverySettings &>(
          &a5,
          &v26,
          &v27,
          &v28,
          &v29);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v19 = 0LL;
    v26 = &v19;
    v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v26);
    v12 = Microsoft::WRL::AsWeak<IAudioEffectsWatcher>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a5, v11);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x190,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
      goto LABEL_8;
    }
    v22 = (unsigned __int64)v9;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    *((_QWORD *)&v22 + 1) = v13;
    v14 = v19;
    v13[1] = v19;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    *v13 = *v9;
    *v9 = v13;
    v15 = a5;
    a5 = 0LL;
    wil::com_ptr_t<IAudioEffectsWatcher,wil::err_returncode_policy>::attach(&v18, v15);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
LABEL_12:
    if ( HasTooManyReferences(v18) )
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x196,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      v16 = v18;
      if ( v18 )
      {
        *v5 = v18;
        ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->AddRef)(v16);
      }
      else
      {
        *v5 = 0LL;
      }
      v7 = 0;
    }
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18D,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
    (const char *)(unsigned int)v10);
LABEL_8:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&a5);
LABEL_18:
  wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v18);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v21);
LABEL_19:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
  return v7;
}
