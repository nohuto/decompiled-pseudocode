/*
 * XREFs of ?TryGetAnimationController@CompositionObject@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVAnimationController@234@@Z @ 0x180006020
 * Callers:
 *     ?TryGetAnimationController@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAnimationController@345@@Z @ 0x180005F70 (-TryGetAnimationController@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionObject::TryGetAnimationController(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2,
        struct Windows::UI::Composition::AnimationController **a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(Windows::UI::Composition::CompositionObject *, HSTRING, Microsoft::WRL2::NestableRuntimeClass **))(v4 + 144))(
         this,
         a2,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v9 = 876LL;
  }
  else
  {
    if ( !v12 )
      return 0LL;
    v5 = (*(__int64 (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, struct Windows::UI::Composition::AnimationController **))(*(_QWORD *)v12 + 408LL))(
           v12,
           a3);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
      }
      return 0LL;
    }
    v9 = 880LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
    (const char *)(unsigned int)v5,
    v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
  return v6;
}
