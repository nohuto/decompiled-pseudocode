/*
 * XREFs of ?TryGetController@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@Z @ 0x1800060C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureNeedsRebuild@AnimationController@Composition@UI@Windows@@AEAAXXZ @ 0x18000617C (-EnsureNeedsRebuild@AnimationController@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Emplace_reallocate@AEBQEAVKeyFrameAnimator@Composition@UI@Windows@@@?$vector@PEAVKeyFrameAnimator@Composition@UI@Windows@@V?$allocator@PEAVKeyFrameAnimator@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVKeyFrameAnimator@Composition@UI@Windows@@QEAPEAV2345@AEBQEAV2345@@Z @ 0x1800449B8 (--$_Emplace_reallocate@AEBQEAVKeyFrameAnimator@Composition@UI@Windows@@@-$vector@PEAVKeyFrameAni.c)
 *     ??$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationController@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800814B8 (--$MakeAndInitialize2@VAnimationController@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Det.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimator::TryGetController(
        Windows::UI::Composition::KeyFrameAnimator *this,
        struct Windows::UI::Composition::AnimationController **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  _QWORD *v8; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::KeyFrameAnimator *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)this + 344);
  if ( !*((_QWORD *)this + 43) && !*((_QWORD *)this + 35) )
  {
    v12 = (Windows::UI::Composition::KeyFrameAnimator *)*((_QWORD *)this + 3);
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AnimationController,Windows::UI::Composition::AnimationController,Windows::UI::Composition::Compositor *>(
           v2,
           &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BB,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
        (const char *)(unsigned int)v5,
        v10);
      return v6;
    }
    v7 = *v2;
    v12 = this;
    v8 = (_QWORD *)*((_QWORD *)v7 + 26);
    if ( v8 == *((_QWORD **)v7 + 27) )
    {
      std::vector<Windows::UI::Composition::KeyFrameAnimator *>::_Emplace_reallocate<Windows::UI::Composition::KeyFrameAnimator * const &>(
        (char *)v7 + 200,
        v8,
        &v12);
    }
    else
    {
      *v8 = this;
      *((_QWORD *)v7 + 26) += 8LL;
    }
    Windows::UI::Composition::AnimationController::EnsureNeedsRebuild(v7);
  }
  if ( *v2 )
  {
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(*v2);
    *a2 = *v2;
  }
  return 0LL;
}
