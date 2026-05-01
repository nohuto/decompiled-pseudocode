/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x180097648
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1800FF230 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1805F1238 (-AddSideBySideAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1805F2990 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v4; // di
  __int64 v5; // rbx
  unsigned int v6; // ecx
  HSTRING v7; // r13
  HSTRING v8; // rax
  int v9; // r15d
  __int64 v10; // r12
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  int v14; // esi
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  __int64 (__fastcall *v19)(__int64, HSTRING, HSTRING, _QWORD, int, _QWORD *, struct EventRegistrationToken *); // [rsp+40h] [rbp-39h]
  _QWORD v22[4]; // [rsp+58h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-1h] BYREF
  HSTRING string; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0;
  a3->value = 0LL;
  v5 = *((_QWORD *)this + 12);
  v22[2] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_DWORD *)this + 33);
  if ( (v6 & 2) != 0 )
  {
    string = 0LL;
    v16 = WindowsCreateStringReference(L"ShellExperience", 0xFu, &hstringHeader, &string);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
      JUMPOUT(0x1800978B3LL);
    }
    v4 = 1;
    v8 = string;
    v7 = string;
    v6 = *((_DWORD *)this + 33);
  }
  else
  {
    v7 = 0LL;
    v8 = string;
  }
  if ( (v4 & 1) != 0 )
    v8 = 0LL;
  string = v8;
  v9 = (v6 >> 3) & 1;
  if ( (v6 & 0x10) != 0 )
    goto LABEL_22;
  v10 = *((_QWORD *)this + 13);
  v19 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD, int, _QWORD *, struct EventRegistrationToken *))(*(_QWORD *)v10 + 48LL);
  v11 = v5;
  v22[0] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v22[1] = this;
  v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *v12 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
    *((_DWORD *)v12 + 3) = 1;
    *v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v13[2] = 0LL;
    if ( v13 + 2 != v22 )
    {
      v13[2] = v5;
      v11 = 0LL;
      v22[0] = 0LL;
    }
    v13[3] = this;
    *v13 = off_18061F9E0;
  }
  else
  {
    v13 = 0LL;
  }
  v22[3] = v13;
  v14 = v19(v10, a2, v7, *((_QWORD *)this + 2), v9, v13, a3);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v14 == -2147483629 || v14 >= 0 )
LABEL_22:
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v14);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v14;
}
