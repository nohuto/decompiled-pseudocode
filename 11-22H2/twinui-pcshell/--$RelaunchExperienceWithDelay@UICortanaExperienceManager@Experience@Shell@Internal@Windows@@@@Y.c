/*
 * XREFs of ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1800F4FB4
 * Callers:
 *     _lambda_88c37ada13575a8c3149dc5b04aa0d80_::operator() @ 0x1801FEA28 (_lambda_88c37ada13575a8c3149dc5b04aa0d80_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::IsUndockingDisabled @ 0x1800A8784 (_anonymous_namespace_--IsUndockingDisabled.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??$QueueTaskWithDelay@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@KPEAPEAUIUnknown@@$$QEAV_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@Z @ 0x1800F50FC (--$QueueTaskWithDelay@V_lambda_8dbc538158d5108f20dcfeb0066e7b3f_@@@ComTaskPool@Internal@Windows@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        IUnknown *a1,
        __int64 a2)
{
  char result; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
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
    v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v14,
            &GUID_3b810852_511f_4404_89ae_347bc2e8b561,
            &v15,
            (int *)&v13);
    if ( v10 >= 0 )
    {
      v11[0] = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
      v11[1] = (__int64)StartWindowTelemetry::CortanaRecoveryDuringShutdown;
      v7 = Windows::Internal::ComTaskPool::QueueTaskWithDelay<_lambda_8dbc538158d5108f20dcfeb0066e7b3f_>(
             v5,
             v4,
             v6,
             v11);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
      if ( v7 >= 0 )
        return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      v8 = (unsigned int)v7;
      v9 = 234LL;
    }
    else
    {
      v8 = (unsigned int)v10;
      v9 = 212LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v8,
      v11[0]);
    return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  return result;
}
