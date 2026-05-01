/*
 * XREFs of ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x1800F2108
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F33AC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVStartExperie.c)
 *     ??$As@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F3664 (--$As@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlLauncher::InitializeStartExperienceManager(
        IUnknown **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  __int64 (__fastcall *v4)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  IUnknown **v7; // r12
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  int v10; // eax
  unsigned int v11; // r14d
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  __int64 v19; // rdx
  __int64 v20[3]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v20[0] = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.StartMenu",
    0x2Bu,
    0x2Au);
  v5 = v4(a2, v22, v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v19 = 810LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v5,
      v20[0]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
    return v6;
  }
  v7 = this + 23;
  v5 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IStartExperienceManager>(
         v20,
         this + 23);
  v6 = v5;
  if ( v5 < 0 )
  {
    v19 = 811LL;
    goto LABEL_22;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
  IUnknown_SetSite(*v7, this[2]);
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(v8);
    v9[2] = this;
    *v9 = off_1807A4028;
  }
  else
  {
    v9 = 0LL;
  }
  v20[0] = (__int64)v9;
  v10 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v7)->lpVtbl[10].QueryInterface)(
          *v7,
          v9,
          (char *)this + 248);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x337,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v10,
      v20[0]);
  }
  else
  {
    v12 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(v12);
      v13[2] = this;
      *v13 = off_1807A4050;
    }
    else
    {
      v13 = 0LL;
    }
    v20[1] = (__int64)v13;
    v14 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v7)->lpVtbl[10].Release)(
            *v7,
            v13,
            (char *)this + 256);
    v11 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x342,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v14,
        v20[0]);
    }
    else
    {
      v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>(v15);
        v16[2] = this;
        *v16 = off_1807A4078;
      }
      else
      {
        v16 = 0LL;
      }
      v20[2] = (__int64)v16;
      v17 = ((__int64 (__fastcall *)(IUnknown *, _QWORD *, char *))(*v7)->lpVtbl[9].AddRef)(
              *v7,
              v16,
              (char *)this + 264);
      v11 = v17;
      if ( v17 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35C,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v17,
          v20[0]);
      else
        v11 = 0;
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    }
    if ( v13 )
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  }
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  return v11;
}
