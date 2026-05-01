/*
 * XREFs of ?_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ @ 0x18045EF54
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18045E604 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@VIShellExperienceViewLifetime@Cortana@TwinUI@@@?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIShellExperienceViewLifetime@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x180427B1C (--$As@VIShellExperienceViewLifetime@Cortana@TwinUI@@@-$ComPtr@UIShellExperienceView@Experience@S.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180428FC0 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Exp_ea_180428FC0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180429708 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180429760 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180429760.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SearchAppExperienceManager::_CreateShellExperienceView(SearchAppExperienceManager *this)
{
  _QWORD *v2; // r15
  int v3; // ebx
  __int64 v4; // rdx
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  char *v10; // rax
  char *v11; // rbx
  int v12; // eax
  int v13; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-61h] BYREF
  __int128 v15; // [rsp+58h] [rbp-49h] BYREF
  int v16[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v17; // [rsp+70h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-29h] BYREF
  __int64 v19; // [rsp+90h] [rbp-11h]
  HSTRING_HEADER v20; // [rsp+98h] [rbp-9h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+Fh]
  HSTRING_HEADER v22; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v13 = 13;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.SearchApp",
    0x2Bu,
    0x2Au);
  *(_QWORD *)v16 = v19;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v20,
    L"Microsoft.Search_8wekyb3d8bbwe!CortanaUI",
    0x29u,
    0x28u);
  v17 = v21;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v22,
    L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI",
    0x31u,
    0x30u);
  *(_QWORD *)v14 = v23;
  *(_QWORD *)&v15 = *((_QWORD *)this + 51);
  v2 = (_QWORD *)((char *)this + 512);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (__int64 *)this + 64,
         &v15,
         v14,
         &v17,
         v16,
         &v13);
  if ( v3 < 0 )
  {
    v4 = 730LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::As<TwinUI::Cortana::IShellExperienceViewLifetime>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 64,
         (__int64 *)this + 63);
  if ( v3 < 0 )
  {
    v4 = 732LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v15 = SearchAppExperienceManager::_OnViewChangedHandler;
  DWORD2(v15) = 0;
  *(_QWORD *)v14 = this;
  *(_OWORD *)&v14[8] = v15;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>((__int64)v6);
    v7[1] = *(_OWORD *)v14;
    *((_QWORD *)v7 + 4) = *(_QWORD *)&v14[16];
    *(_QWORD *)v7 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>::*)(Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,_lambda_931beb00e51d342d82439ed6609a09c4_,-1,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)&v15 = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v7, (char *)this + 520);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)v14 = SearchAppExperienceManager::_OnViewEventHandler;
    *(_DWORD *)&v14[8] = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)v14;
    v10 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v10);
      *(HSTRING_HEADER *)(v11 + 16) = hstringHeader;
      *(_QWORD *)v11 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>::*)(Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_41b5fd1e85b5fa293ba99f420d7ce4cb_,-1,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>::`vftable';
    }
    else
    {
      v11 = 0LL;
    }
    *(_QWORD *)v14 = v11;
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v11, (char *)this + 528);
    v9 = v12;
    if ( v12 >= 0 )
      v9 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E2,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    if ( v11 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
