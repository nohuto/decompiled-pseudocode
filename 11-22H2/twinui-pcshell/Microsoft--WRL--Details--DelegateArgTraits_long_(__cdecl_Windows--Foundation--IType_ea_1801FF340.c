/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_0fdea9b2e80a09a178b72482c6f008f8___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::Invoke @ 0x1801FF340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_0fdea9b2e80a09a178b72482c6f008f8___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 48LL))(a3, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 184LL) + 88LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 184LL),
      (unsigned int)v8);
    return 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58E,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  }
  return v5;
}
