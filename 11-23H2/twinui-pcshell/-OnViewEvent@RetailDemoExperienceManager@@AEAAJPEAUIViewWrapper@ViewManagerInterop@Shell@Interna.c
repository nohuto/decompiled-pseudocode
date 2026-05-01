/*
 * XREFs of ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180458040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180174BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ @ 0x1801BCA48 (-_SetDefaults@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18045742C (--4-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wi.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x180459278 (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x18045954C (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall RetailDemoExperienceManager::OnViewEvent(
        RetailDemoExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, char *); // rbx
  __int64 **v10; // r14
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _QWORD *v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  LONG WindowLongW; // eax
  LONG v26; // eax
  int v27; // eax
  _OWORD *v28; // rax
  _OWORD *v29; // rbx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  _WORD *v34; // rcx
  __int64 result; // rax
  int v36[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+28h] [rbp-60h] BYREF
  __int128 v38; // [rsp+30h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v40[24]; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v42; // [rsp+90h] [rbp+8h]
  __int64 *v43; // [rsp+A0h] [rbp+18h] BYREF
  HWND hWnd; // [rsp+A8h] [rbp+20h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 464));
  try
  {
    v6 = (*(__int64 (**)(void))(*(_QWORD *)a3 + 48LL))();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x280,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v36[0]);
    if ( v42 )
    {
      if ( v42 == 4 )
      {
        RetailDemoExperienceManager::_RestoreWorkingArea(this);
        RetailDemoExperienceManager::_SetDefaults(this);
        v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 32LL))(
                *((_QWORD *)this + 24),
                *((_QWORD *)this + 25));
        if ( v32 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x2B8,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v32,
            v36[0]);
        v33 = *((_QWORD *)this + 30);
        *((_QWORD *)this + 30) = 0LL;
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
        v34 = (_WORD *)((char *)this + 248);
        if ( *((_QWORD *)this + 34) >= 8uLL )
          v34 = (_WORD *)*((_QWORD *)this + 31);
        *((_QWORD *)this + 33) = 0LL;
        *v34 = 0;
        PulseEvent(*((HANDLE *)this + 57));
      }
    }
    else
    {
      v8 = *((_QWORD *)this + 24);
      v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL);
      v10 = (__int64 **)((char *)this + 200);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 25);
      v11 = v9(v8, (char *)this + 200);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x284,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v11,
          v36[0]);
      v43 = 0LL;
      v12 = *v10;
      v13 = **v10;
      v43 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v13 + 32))(v12, &v43);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x288,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v14,
          v36[0]);
      v15 = (_QWORD *)((char *)this + 248);
      if ( *((_QWORD *)this + 34) >= 8uLL )
        v15 = (_QWORD *)*v15;
      v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(*v43 + 72))(v43, v15, 1LL);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x28B,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v16,
          v36[0]);
      *(_QWORD *)v36 = 0LL;
      v17 = *v43;
      *(_QWORD *)v36 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, int *))(v17 + 144))(v43, v36);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x28F,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v18,
          v36[0]);
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)v36 + 48LL))(*(_QWORD *)v36, 1LL, 1LL);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x290,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v19,
          v36[0]);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v36 + 32LL))(*(_QWORD *)v36, 0LL);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x291,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v20,
          v36[0]);
      v21 = (_QWORD *)((char *)this + 240);
      wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::operator=(
        (__int64 *)this + 30,
        (__int64)a2);
      v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v10 + 104))(*v10, *((_QWORD *)this + 30));
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x295,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v22,
          v36[0]);
      v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v10 + 128))(*v10, 0LL);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x298,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v23,
          v36[0]);
      hWnd = 0LL;
      v24 = (*(__int64 (__fastcall **)(__int64 *, HWND *))(*v43 + 24))(v43, &hWnd);
      if ( v24 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x29C,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v24,
          v36[0]);
      WindowLongW = GetWindowLongW(hWnd, -16);
      SetWindowLongW(hWnd, -16, WindowLongW & 0xFF30FFFF);
      v26 = GetWindowLongW(hWnd, -20);
      SetWindowLongW(hWnd, -20, v26 & 0xFFFFFEFF);
      v37 = 0LL;
      v27 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v21)(
              *v21,
              &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
              &v37);
      if ( v27 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1815,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v27,
          v36[0]);
      *(_QWORD *)&v38 = RetailDemoExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v38) = 0;
      *(_QWORD *)v40 = this;
      *(_OWORD *)&v40[8] = v38;
      v28 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v29 = v28;
      if ( v28 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v28);
        v29[1] = *(_OWORD *)v40;
        *((_QWORD *)v29 + 4) = *(_QWORD *)&v40[16];
        *(_QWORD *)v29 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_76a34c4b5f294ba24d477bfd9713c64c_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      }
      else
      {
        v29 = 0LL;
      }
      *(_QWORD *)&v38 = v29;
      v30 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v37 + 80LL))(v37, v29, (char *)this + 440);
      if ( v30 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2AC,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v30,
          v36[0]);
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v21 + 344LL))(*v21, 4LL);
      if ( v31 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2AF,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v31,
          v36[0]);
      RetailDemoExperienceManager::_Show(this);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v38);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v36);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C3,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v7);
  }
  return result;
}
