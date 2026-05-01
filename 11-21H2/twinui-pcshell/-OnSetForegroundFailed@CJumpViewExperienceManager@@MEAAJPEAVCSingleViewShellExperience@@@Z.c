/*
 * XREFs of ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180373170
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1800383D0 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x18012DAE0 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x18012DBD8 (-CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x18037231C (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x180372A1C (-JumpViewCancelledDueToForeground@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180374330 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x18037466C (-TransferToCurrentThread@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::OnSetForegroundFailed(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CJumpViewExperienceManager *v3; // rdi
  _BYTE v5[320]; // [rsp+20h] [rbp-158h] BYREF

  v3 = (CJumpViewExperienceManager *)((char *)this - 64);
  CJumpViewExperienceManager::FireCancelledEvent((CJumpViewExperienceManager *)((char *)this - 64));
  if ( **((_DWORD **)this + 64) == 1 )
  {
    JumpViewProvider::ShowJumpViewActivity::TransferToCurrentThread((char *)this + 464, v5);
    JumpViewProvider::ShowJumpViewActivity::JumpViewCancelledDueToForeground((JumpViewProvider::ShowJumpViewActivity *)v5);
    CJumpViewExperienceManager::DismissImpl(v3, 1);
    CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout(v3);
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v5);
  }
  return 0LL;
}
