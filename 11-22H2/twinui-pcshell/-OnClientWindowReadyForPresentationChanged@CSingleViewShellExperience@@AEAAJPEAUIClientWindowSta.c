/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18002C730
 * Callers:
 *     <none>
 * Callees:
 *     ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18002C6F8 (--1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002C838 (-ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x18002C99C (-StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z.c)
 *     ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x18002CA94 (-Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010DABC (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl_ea_18010DABC.c)
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180174D70 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnstashPendingShow@CSingleViewShellExperience@@AEAA?AW4ShowOptions@1@XZ @ 0x18019E008 (-UnstashPendingShow@CSingleViewShellExperience@@AEAA-AW4ShowOptions@1@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSingleViewShellExperience::OnClientWindowReadyForPresentationChanged(
        CSingleViewShellExperience *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  unsigned int v5; // esi
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v7; // rbx
  unsigned int v8; // eax
  _QWORD v10[40]; // [rsp+20h] [rbp-168h] BYREF

  v5 = *((_DWORD *)this + 10);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v7 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    v10,
    "OnClientWindowReadinessProcessed");
  v10[0] = &SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::`vftable';
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::StartActivity(
    (SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v10,
    v7,
    StringRawBuffer,
    v5);
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( (unsigned int)SHIsSameObject(*((struct IUnknown **)this + 3), a2) && *((_DWORD *)this + 16) == 1 )
  {
    v8 = CSingleViewShellExperience::UnstashPendingShow(this);
    CSingleViewShellExperience::ShowView(this, v8);
  }
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::Stop(
    (SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v10,
    *((_DWORD *)this + 10));
  SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed::~OnClientWindowReadinessProcessed((SingleViewExperienceTelemetry::OnClientWindowReadinessProcessed *)v10);
  return 0LL;
}
