/*
 * XREFs of ?_FireViewEvent@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804701F8
 * Callers:
 *     ?OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18046F930 (-OnEventQueued@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800E1628 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x180142034 (-InternalRelease@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeDelegates@V_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18046F07C (--$InvokeDelegates@V_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_@@U-$ITypedEventHandler@PEAUIShellE.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_HSTRING_____&_Windows::Foundation::Collections::IPropertySet___&_ @ 0x18046F2CC (Microsoft--WRL--Details--MakeAndInitialize__TwinUI--Cortana--ShellExperienceView--_FireViewEvent.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent(
        TwinUI::Cortana::ShellExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  volatile signed __int32 *v9[2]; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v10[2]; // [rsp+30h] [rbp-20h] BYREF
  TwinUI::Cortana::ShellExperienceView *v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  HSTRING v14; // [rsp+78h] [rbp+28h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  v14 = a2;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v4 = Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg_Windows::Internal::Shell::Experience::IShellExperienceViewEventArg_HSTRING_______Windows::Foundation::Collections::IPropertySet_____(
         &v16,
         &v14,
         &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v12 = v16;
    v11 = this;
    v5 = 0;
    v9[0] = 0LL;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v10, (RTL_SRWLOCK *)this + 36);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
      (__int64 *)v9,
      (volatile int *)this + 70);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v10);
    if ( v9[0] )
    {
      v10[0] = (RTL_SRWLOCK *)&v11;
      v10[1] = (RTL_SRWLOCK *)&v12;
      v5 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_3f330b8b04ee50d7a1fc1ebaa52a6160_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(
             v10,
             v9[0],
             (RTL_SRWLOCK *)this + 35);
    }
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::InternalRelease(v9);
    if ( v5 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v6 = (unsigned int)v5;
    v7 = 368LL;
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 367LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
    (const char *)v6);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return (unsigned int)v5;
}
