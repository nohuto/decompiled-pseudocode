/*
 * XREFs of ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C
 * Callers:
 *     ?TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18000FE54 (-TryGetSaDeviceResourceManagerForEndpoint@@YAJPEBVCEndpointCharacteristics@@PEAPEAUISaDeviceReso.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18003CDF0 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180040290 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCBtAudioResourceManager@@AEBU_GUID@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCBtAudioResourceManager@@@12@AEBU_GUID@@@Z @ 0x1801135C8 (--$Make@VCBtAudioResourceManager@@AEBU_GUID@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCBtAudioReso.c)
 *     ?SetCaptureEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z @ 0x180117734 (-SetCaptureEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z.c)
 *     ?SetRenderEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z @ 0x18011782C (-SetRenderEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CBtAudioResourceManagerCache::GetBtAudioResourceManager(
        CBtAudioResourceManagerCache *this,
        const unsigned __int16 **a2,
        struct _GUID *a3,
        struct ISaDeviceResourceManager **a4)
{
  _QWORD *i; // rbx
  __int64 v8; // rax
  CBtAudioResourceManager **v9; // rax
  CBtAudioResourceManager *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v13; // rdi
  int v14; // eax
  const unsigned __int16 *v15; // rdx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ebx
  int v22[2]; // [rsp+20h] [rbp-48h] BYREF
  RTL_SRWLOCK *v23; // [rsp+28h] [rbp-40h] BYREF
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  AcquireSRWLockExclusive(&g_BtAudioResourceManagerCache);
  v23 = &g_BtAudioResourceManagerCache;
  for ( i = (_QWORD *)qword_1801C25D8; i; i = (_QWORD *)*i )
  {
    v24 = *(_OWORD *)(i[1] + 24LL);
    v8 = v24 - *(_QWORD *)&a3->Data1;
    if ( (_QWORD)v24 == *(_QWORD *)&a3->Data1 )
      v8 = *((_QWORD *)&v24 + 1) - *(_QWORD *)a3->Data4;
    if ( !v8 )
      break;
  }
  *(_QWORD *)v22 = 0LL;
  if ( i )
  {
    v10 = (CBtAudioResourceManager *)i[1];
    *(_QWORD *)v22 = v10;
    if ( v10 )
      (*(void (__fastcall **)(CBtAudioResourceManager *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v9 = Microsoft::WRL::Details::Make<CBtAudioResourceManager,_GUID const &>((CBtAudioResourceManager **)&v24, a3);
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)v22 = v10;
    v11 = v24;
    if ( (_QWORD)v24 )
    {
      *(_QWORD *)&v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( !v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB3,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
      return 2147942414LL;
    }
    *(_QWORD *)&v24 = &qword_1801C25D8;
    *((_QWORD *)&v24 + 1) = 0LL;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    *((_QWORD *)&v24 + 1) = v13;
    v13[1] = v10;
    (*(void (__fastcall **)(CBtAudioResourceManager *))(*(_QWORD *)v10 + 8LL))(v10);
    *v13 = qword_1801C25D8;
    qword_1801C25D8 = (__int64)v13;
  }
  v14 = (*((__int64 (__fastcall **)(const unsigned __int16 **))*a2 + 7))(a2);
  v15 = a2[3];
  if ( v14 )
  {
    v18 = CBtAudioResourceManager::SetCaptureEndpoint(v10, v15);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
      return v19;
    }
  }
  else
  {
    v16 = CBtAudioResourceManager::SetRenderEndpoint(v10, v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
      return v17;
    }
  }
  if ( v10 )
  {
    v20 = (**(__int64 (__fastcall ***)(CBtAudioResourceManager *, GUID *, struct ISaDeviceResourceManager **))v10)(
            v10,
            &GUID_f8e41890_845d_432e_bf76_4ba0ba1702ab,
            a4);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
      return v21;
    }
  }
  else
  {
    *a4 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v23);
  return 0LL;
}
