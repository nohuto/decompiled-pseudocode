/*
 * XREFs of ?Create@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@UEAAJPEAPEAUICompositionIslandEnvironment@234@@Z @ 0x18006C240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandEnvironment@Composition@UI@Windows@@@Z @ 0x18006C290 (--$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironmentStatics::Create(
        Windows::UI::Composition::CompositionIslandEnvironmentStatics *this,
        struct Windows::UI::Composition::ICompositionIslandEnvironment **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionIslandEnvironment,Windows::UI::Composition::CompositionIslandEnvironment>(&v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandenvironment.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
    return v4;
  }
  else
  {
    *a2 = (struct Windows::UI::Composition::ICompositionIslandEnvironment *)((v7 + 24) & -(__int64)(v7 != 0));
    return 0LL;
  }
}
