/*
 * XREFs of ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ @ 0x1801280F0
 * Callers:
 *     ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180138B90 (-Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0PEAW4InteractionBindingAxisModes@2345@@Z @ 0x180139080 (-GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInterac.c)
 *     ?SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0W4InteractionBindingAxisModes@2345@@Z @ 0x18013AA10 (-SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInterac.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z @ 0x180065324 (-MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ??$MakeAndInitialize2@VInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180120FBC (--$MakeAndInitialize2@VInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V12.c)
 */

struct Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *__fastcall Windows::UI::Composition::CompositorCommon::GetInteractionTrackerBindingManager(
        Windows::UI::Composition::CompositorCommon *this)
{
  int v2; // eax
  Microsoft::WRL2::ContextRuntimeClass *v3; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::ContextRuntimeClass *v6; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 134) )
  {
    v6 = 0LL;
    v7 = this;
    v2 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager,Windows::UI::Composition::Interactions::InteractionTrackerBindingManager,Windows::UI::Composition::Compositor *>(
           &v6,
           &v7);
    if ( v2 < 0 )
      Microsoft::WRL2::FailFast::ForHR((unsigned int)v2, retaddr);
    v3 = v6;
    v6 = 0LL;
    *((_QWORD *)this + 134) = v3;
    Microsoft::WRL2::ContextRuntimeClass::MarkCached(v3, 1);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v6);
  }
  return (struct Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *)*((_QWORD *)this + 134);
}
