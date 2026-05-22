/*
 * XREFs of ?SetGlobalPlaybackRate@CompositorCommon@Composition@UI@Windows@@QEAAJM@Z @ 0x18012980C
 * Callers:
 *     ?put_GlobalPlaybackRate@Api@CompositorCommon@Composition@UI@Windows@@UEAAJM@Z @ 0x18012C150 (-put_GlobalPlaybackRate@Api@CompositorCommon@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::SetGlobalPlaybackRate(
        Windows::UI::Composition::CompositorCommon *this,
        float a2)
{
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 >= 0.0 )
  {
    if ( a2 != 0.0 )
      a2 = fminf(16.0, fmaxf(a2, 0.0625));
    *((float *)this + 249) = a2;
    AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(this, 1);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)AnimationLoggingManager + 3) + 456LL),
      *((_DWORD *)AnimationLoggingManager + 32),
      4,
      *((float *)this + 249));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C2,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
