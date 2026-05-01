/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18009814C
 * Callers:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180748C48 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___ @ 0x180098328 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180098328.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v4; // si
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, HSTRING, __int64, _QWORD); // r12
  void *v12; // rax
  __int64 v13; // rbx
  int v14; // edi
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v17; // [rsp+48h] [rbp-21h]
  __int64 v18[3]; // [rsp+50h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-1h] BYREF
  __int64 v20; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v17 = a2;
  v4 = 0;
  LODWORD(v16) = 0;
  a3->value = 0LL;
  v5 = *((_QWORD *)this + 12);
  v16 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *((_DWORD *)this + 33);
  if ( (v6 & 2) != 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShellExperience", 0x10u, 0xFu);
    v4 = 1;
    v8 = v20;
    v7 = v20;
    v6 = *((_DWORD *)this + 33);
  }
  else
  {
    v7 = 0LL;
    v8 = v20;
  }
  if ( (v4 & 1) != 0 )
    v8 = 0LL;
  v20 = v8;
  v9 = (v6 >> 3) & 1;
  if ( (v6 & 0x10) != 0 )
    goto LABEL_16;
  v10 = *((_QWORD *)this + 13);
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _QWORD))(*(_QWORD *)v10 + 48LL);
  v18[0] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v18[1] = (__int64)this;
  v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12
      ? Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::___Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_acf5f06f90f65198d6029ed629ca6feb___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___(
          v12,
          v18)
      : 0LL;
  v18[2] = v13;
  v14 = v11(v10, v17, v7, *((_QWORD *)this + 2));
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v18);
  if ( v14 == -2147483629 || v14 >= 0 )
LABEL_16:
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v14,
      v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return (unsigned int)v14;
}
