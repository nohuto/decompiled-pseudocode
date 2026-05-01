/*
 * XREFs of ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x18005CE10
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x18005CDB0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18005CDB0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@QEAA@AEBV012@@Z @ 0x18017E520 (--0-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microso.c)
 *     ??$QueueTaskWithDelay@V_lambda_eb2c18d22b535205c554a19bae5aba9b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_eb2c18d22b535205c554a19bae5aba9b_@@@Z @ 0x1801A9EA8 (--$QueueTaskWithDelay@V_lambda_eb2c18d22b535205c554a19bae5aba9b_@@@ComTaskPool@Internal@Windows@.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5470 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::IStartExperienceManager>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-10h] BYREF
  void (*v11)(void); // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF
  int v14; // [rsp+48h] [rbp+18h] BYREF
  int v15; // [rsp+4Ch] [rbp+1Ch]
  __int64 v16; // [rsp+50h] [rbp+20h] BYREF

  v15 = HIDWORD(a2);
  v13 = 0LL;
  v16 = a1;
  v14 = 1;
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v13,
         &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee,
         &v16,
         &v14);
  if ( v2 < 0 )
  {
    v3 = (unsigned int)v2;
    v4 = 163LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v3,
      v10);
    return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>(
    &v10,
    &v13);
  v11 = StartWindowTelemetry::StartRecoveryDuringShutdown;
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_eb2c18d22b535205c554a19bae5aba9b_>(v6, v5, v7, &v10);
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v10);
  if ( v8 < 0 )
  {
    v3 = (unsigned int)v8;
    v4 = 185LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
}
