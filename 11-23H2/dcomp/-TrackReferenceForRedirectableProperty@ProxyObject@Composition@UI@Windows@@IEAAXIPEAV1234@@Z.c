/*
 * XREFs of ?TrackReferenceForRedirectableProperty@ProxyObject@Composition@UI@Windows@@IEAAXIPEAV1234@@Z @ 0x18002E500
 * Callers:
 *     ?TrackReference@Visual@Composition@UI@Windows@@UEAAXI@Z @ 0x18002E4C0 (-TrackReference@Visual@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?TrackReference@CompositionGradientBrush@Composition@UI@Windows@@UEAAXI@Z @ 0x180095380 (-TrackReference@CompositionGradientBrush@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?TrackReference@CompositionClip@Composition@UI@Windows@@UEAAXI@Z @ 0x180155CA0 (-TrackReference@CompositionClip@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?TrackReference@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXI@Z @ 0x180159C90 (-TrackReference@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?TrackReference@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXI@Z @ 0x1801814A0 (-TrackReference@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXI@Z.c)
 *     ?TrackReference@CompositionShape@Composition@UI@Windows@@UEAAXI@Z @ 0x180189B00 (-TrackReference@CompositionShape@Composition@UI@Windows@@UEAAXI@Z.c)
 * Callees:
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z @ 0x180065324 (-MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z.c)
 *     ??$MakeAndInitialize2@VAnimationLoggingManager@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVAnimationLoggingManager@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180068798 (--$MakeAndInitialize2@VAnimationLoggingManager@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::TrackReferenceForRedirectableProperty(
        Windows::UI::Composition::ProxyObject *this,
        int a2,
        struct Windows::UI::Composition::ProxyObject *a3)
{
  __int64 v5; // rbx
  Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  int v7; // eax
  Microsoft::WRL2::ContextRuntimeClass *v8; // rcx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 || a2 == *((_DWORD *)this + 32) )
  {
    v5 = *((_QWORD *)this + 3);
    if ( !*(_QWORD *)(v5 + 840) )
    {
      v11 = 0LL;
      *(_QWORD *)v9 = v5;
      v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::AnimationLoggingManager,Windows::UI::Composition::AnimationLoggingManager,Windows::UI::Composition::Compositor *>(
             &v11,
             v9);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x111C,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v7,
          v9[0]);
      v8 = v11;
      *(_QWORD *)(v5 + 840) = v11;
      Microsoft::WRL2::ContextRuntimeClass::MarkCached(v8, 1);
    }
    Windows::UI::Composition::AnimationLoggingManager::TrackReference(
      *(Windows::UI::Composition::AnimationLoggingManager **)(v5 + 840),
      this);
  }
  else
  {
    if ( !a3 || a2 != *((_DWORD *)a3 + 32) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(
                                *((Windows::UI::Composition::CompositorCommon **)this + 3),
                                1);
    Windows::UI::Composition::AnimationLoggingManager::TrackReference(AnimationLoggingManager, a3);
  }
}
