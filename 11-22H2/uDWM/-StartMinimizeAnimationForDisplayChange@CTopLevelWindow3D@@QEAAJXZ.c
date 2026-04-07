/*
 * XREFs of ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E78D8
 * Callers:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 * Callees:
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180048B6C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___ @ 0x1800E73B4 (wil--details--lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___--_lambda_call__lambda_ef37.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::StartMinimizeAnimationForDisplayChange(CTopLevelWindow3D *this, __int64 a2)
{
  int started; // eax
  unsigned int v4; // edi
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled((__int64)this, a2) )
  {
    *(_QWORD *)v7 = this;
    v8 = 1;
    *((_BYTE *)this + 617) = 1;
    started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
    v4 = started;
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)started);
      wil::details::lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___::_lambda_call__lambda_ef37a2addf6cdd2bb3c23526ddfc0850___((__int64 *)v7);
      return v4;
    }
    v6 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F1,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v6);
      *((_BYTE *)this + 617) = 0;
      return v4;
    }
    *((_BYTE *)this + 617) = 0;
  }
  return 0LL;
}
