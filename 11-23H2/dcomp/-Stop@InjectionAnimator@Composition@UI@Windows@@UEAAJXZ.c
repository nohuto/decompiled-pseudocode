/*
 * XREFs of ?Stop@InjectionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18019BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z @ 0x180050AC0 (-NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::InjectionAnimator::Stop(Windows::UI::Composition::InjectionAnimator *this)
{
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  int v3; // eax
  unsigned int v4; // edi
  Windows::UI::Composition::CompositorCommon *v6; // rcx
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  unsigned int v8; // r8d
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v12; // [rsp+50h] [rbp+8h] BYREF

  BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(*((Windows::UI::Composition::CompositorCommon **)this + 3));
  v3 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
         BindingManager,
         *((_DWORD *)this + 43),
         *((_DWORD *)this + 44),
         &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
    if ( *((_QWORD *)v6 + 105) )
    {
      v12 = 0;
      AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(v6, 0);
      v8 = *((_DWORD *)this + 44);
      *((_QWORD *)&v10 + 1) = &v12;
      *(_QWORD *)&v10 = 1LL;
      LODWORD(v9) = 17;
      Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
        (__int64)AnimationLoggingManager,
        *((_DWORD *)this + 43),
        v8,
        1,
        v9,
        &v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinjectionanimator.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
