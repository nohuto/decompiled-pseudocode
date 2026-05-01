/*
 * XREFs of ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180488CAC
 * Callers:
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180489090 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006BB90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AccessibilityExperienceManager::_OnViewCreated(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // si
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v17; // eax
  int v18; // eax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  __int64 v21; // [rsp+38h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  __int64 v24; // [rsp+50h] [rbp-19h] BYREF
  __int128 v25; // [rsp+58h] [rbp-11h] BYREF
  char v26[8]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v27[24]; // [rsp+70h] [rbp+7h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v28; // [rsp+88h] [rbp+1Fh]
  char v29; // [rsp+90h] [rbp+27h]
  _BYTE v30[16]; // [rsp+98h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v22 = a2;
  v20 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v23 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         &v20,
         &v23);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EA,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_35;
  }
  if ( !*((_QWORD *)this + 46) )
    Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)this + 46, (__int64 *)&v20);
  if ( !*((_QWORD *)this + 47) )
  {
    v5 = 0;
    goto LABEL_35;
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 48LL))(v23, v26);
  v28 = &v22;
  v6 = 1;
  v29 = 1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(**((_QWORD **)this + 47) + 104LL))(
         *((_QWORD *)this + 47),
         v22);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 47) + 56LL))(*((_QWORD *)this + 47), v30);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 771LL;
      goto LABEL_11;
    }
    v24 = 0LL;
    v9 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           &v20,
           &v24);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 774LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_31:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      goto LABEL_32;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v30);
    v5 = v9;
    if ( v9 < 0 )
    {
      v10 = 775LL;
      goto LABEL_16;
    }
    *(_QWORD *)&v25 = AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged;
    DWORD2(v25) = 0;
    *(_QWORD *)v27 = this;
    *(_OWORD *)&v27[8] = v25;
    v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v11);
      v12[1] = *(_OWORD *)v27;
      *((_QWORD *)v12 + 4) = *(_QWORD *)&v27[16];
      *(_QWORD *)v12 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_76a34c4b5f294ba24d477bfd9713c64c_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)&v25 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v23 + 80LL))(v23, v12, (char *)this + 384);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v22 + 344LL))(
              v22,
              4LL);
      v5 = v13;
      if ( v13 >= 0 )
      {
        v21 = 0LL;
        v15 = *((_QWORD *)this + 33);
        v16 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
        if ( v16(v15, &IID_ITouchKeyboardExperienceManager, &GUID_9516d866_ca0f_40ca_8997_efa618b50f99, &v21) < 0
          || (v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21), v5 = v17, v17 >= 0) )
        {
          v6 = 0;
          v5 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x315,
            (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
        goto LABEL_30;
      }
      v14 = 784LL;
    }
    else
    {
      v14 = 781LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
LABEL_30:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    goto LABEL_31;
  }
  v8 = 768LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_32:
  if ( v6 )
  {
    v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD))(*(_QWORD *)v22 + 344LL))(
            v22,
            0LL);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FD,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v18);
  }
LABEL_35:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return v5;
}
