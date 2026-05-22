/*
 * XREFs of ?StartAnimationWithController@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAVAnimationController@234@@Z @ 0x1800773C0
 * Callers:
 *     ?StartAnimationWithController@AnimationController@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV1234@@Z @ 0x18011BF90 (-StartAnimationWithController@AnimationController@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::ProxyObject::StartAnimationWithController(
        Windows::UI::Composition::ProxyObject *this,
        HSTRING a2,
        struct Windows::UI::Composition::CompositionAnimation *a3,
        struct Windows::UI::Composition::AnimationController *a4)
{
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int32 *v11; // rcx
  int v13[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)this;
  *(_QWORD *)v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(Windows::UI::Composition::ProxyObject *, HSTRING, struct Windows::UI::Composition::CompositionAnimation *, _QWORD, int *))(v4 + 152))(
         this,
         a2,
         a3,
         0LL,
         v13);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x263,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v13);
    return v8;
  }
  else if ( a4
         && (v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::UI::Composition::AnimationController *))(**(_QWORD **)v13 + 416LL))(
                    *(_QWORD *)v13,
                    a4),
             v10 = v9,
             v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x267,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v13);
    return v10;
  }
  else
  {
    v11 = *(volatile signed __int32 **)v13;
    if ( *(_QWORD *)v13 )
    {
      *(_QWORD *)v13 = 0LL;
      if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 64LL))(v11, v7);
      }
    }
    return 0LL;
  }
}
