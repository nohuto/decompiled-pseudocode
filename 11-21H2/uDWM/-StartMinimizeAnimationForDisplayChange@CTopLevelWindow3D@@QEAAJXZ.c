/*
 * XREFs of ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E6C6C
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ @ 0x18000D10C (-IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001EB10 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___ @ 0x180062FF8 (wil--details--lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___--_lambda_call__lambda_ef37.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::StartMinimizeAnimationForDisplayChange(CTopLevelWindow3D *this, __int64 a2)
{
  int started; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)CDesktopManager::IsMinimizeRestoreAnimationsUpdateEnabled((__int64)this, a2) )
  {
    *(_QWORD *)v7 = this;
    v8 = 1;
    *((_BYTE *)this + 617) = 1;
    started = CTopLevelWindow3D::StartAnimation((__int64)this, 3);
    v4 = started;
    if ( started < 0 )
    {
      v5 = 569LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)started);
      wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___((__int64 *)v7);
      return v4;
    }
    started = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v4 = started;
    if ( started < 0 )
    {
      v5 = 574LL;
      goto LABEL_6;
    }
    wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___((__int64 *)v7);
  }
  return 0LL;
}
