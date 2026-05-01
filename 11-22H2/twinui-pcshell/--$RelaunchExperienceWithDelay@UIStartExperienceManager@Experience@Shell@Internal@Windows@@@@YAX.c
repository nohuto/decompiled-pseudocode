/*
 * XREFs of ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1800F4F10
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x1800F59A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800F59A0.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::IsUndockingDisabled @ 0x1800A8784 (_anonymous_namespace_--IsUndockingDisabled.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??$QueueTaskWithDelay@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@Z @ 0x1800F5064 (--$QueueTaskWithDelay@V_lambda_97c937cd63ba9d1d43dfa1c46a848e31_@@@ComTaskPool@Internal@Windows@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        IUnknown *a1,
        __int64 a2)
{
  char result; // al
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v13; // [rsp+48h] [rbp+18h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  IUnknown *v15; // [rsp+58h] [rbp+28h] BYREF

  v13 = a2;
  result = anonymous_namespace_::IsUndockingDisabled();
  if ( !result )
  {
    v14 = 0LL;
    LODWORD(v13) = 1;
    v15 = a1;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
           &v14,
           &GUID_94bd88e6_2b15_469b_8b49_352bb7d48d4e,
           &v15,
           (int *)&v13);
    if ( v4 < 0 )
    {
      v9 = (unsigned int)v4;
      v10 = 212LL;
    }
    else
    {
      v11[0] = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
      v11[1] = (__int64)StartWindowTelemetry::StartRecoveryDuringShutdown;
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_97c937cd63ba9d1d43dfa1c46a848e31_>(
             v6,
             v5,
             v7,
             v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
      if ( v8 >= 0 )
        return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v9 = (unsigned int)v8;
      v10 = 234LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v9,
      v11[0]);
    return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  return result;
}
