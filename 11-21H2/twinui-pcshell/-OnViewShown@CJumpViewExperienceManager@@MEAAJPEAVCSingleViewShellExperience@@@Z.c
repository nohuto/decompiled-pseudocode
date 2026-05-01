/*
 * XREFs of ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373610
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18012DAE0 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x18012DBD8 (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180370E00 (--$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@I.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x180371008 (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@She.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180374330 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x18037466C (-TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnViewShown(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  HSTRING v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-168h] BYREF
  HSTRING v9; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v10[320]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  JumpViewProvider::ShowJumpViewActivity::TransferToCurrentThread((char *)this + 464, v10);
  v3 = (HSTRING)*((_QWORD *)this + 37);
  v8 = 0LL;
  v9 = v3;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
         &v8,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::JumpViewExperienceManager *,Windows::Internal::Shell::Experience::JumpViewExperienceEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CJumpViewExperienceManager *,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs *>(
           (__int64)this + 8,
           (__int64)this - 64,
           v8);
    v5 = v4;
    if ( v4 >= 0 )
    {
      CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout((CJumpViewExperienceManager *)((char *)this - 64));
      wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 474LL;
  }
  else
  {
    v6 = 473LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v10);
  return v5;
}
