/*
 * XREFs of ?ToggleAllUpView@CAllUpViewService@@UEAAJPEAUHMONITOR__@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1800580A0
 * Callers:
 *     ?StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z @ 0x18054A110 (-StartSwipe@CAllUpViewService@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800582D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAllUpViewService::ToggleAllUpView(__int64 a1, __int64 a2, int a3)
{
  HRESULT v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, GUID *, GUID *); // rdi
  int v10; // eax
  int v11; // edi
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  int v15; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-40h]
  __int64 *v21; // [rsp+20h] [rbp-40h]
  void *ppvOut; // [rsp+30h] [rbp-30h] BYREF
  void *v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  void *v29; // [rsp+90h] [rbp+30h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  ppvOut = 0LL;
  if ( *(_QWORD *)(a1 - 24) )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
    v6 = IUnknown_QueryService(
           *(IUnknown **)(a1 - 24),
           (const GUID *const)&SID_ImmersiveLauncher,
           &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
           &ppvOut);
    v7 = retaddr;
    if ( v6 < 0 )
    {
      v17 = 57LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, 5LL);
      v7 = retaddr;
      if ( v6 >= 0 )
        goto LABEL_4;
      v17 = 59LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v6,
      v20);
  }
LABEL_4:
  v24 = *(_QWORD *)(a1 + 24);
  v8 = v24;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v24);
  v30 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *))(*(_QWORD *)v8 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  v21 = &v30;
  v10 = v9(v8, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v10,
      (int)&v30);
    goto LABEL_12;
  }
  v25 = v8;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
  v12 = v30;
  v26 = v30;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
  v27 = a3;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
  v29 = 0LL;
  v13 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(v13);
    *v14 = off_1807B17F0;
    v14[4] = off_1807B17D0;
    v14[6] = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14 + 6);
    v14[7] = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v14 + 7);
    *((_DWORD *)v14 + 16) = a3;
    v13 = v14 + 4;
  }
  v23 = v13;
  if ( v13 )
  {
    v23 = 0LL;
    v29 = v13;
    v11 = 0;
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"desktop\\internal\\shell\\inc\\private\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL,
      (int)&v30);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
  if ( v11 < 0 )
  {
    v18 = (unsigned int)v11;
    v19 = 111LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)v18,
      (int)v21);
    goto LABEL_11;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(
          *(_QWORD *)(a1 + 16),
          v29,
          1LL);
  v11 = v15;
  if ( v15 < 0 )
  {
    v18 = (unsigned int)v15;
    v19 = 114LL;
    goto LABEL_20;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_12:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v11;
}
