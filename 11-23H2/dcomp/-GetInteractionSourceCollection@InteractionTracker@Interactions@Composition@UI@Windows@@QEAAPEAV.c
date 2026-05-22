/*
 * XREFs of ?GetInteractionSourceCollection@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAPEAVCompositionInteractionSourceCollection@2345@XZ @ 0x1801396F8
 * Callers:
 *     ?get_InteractionSources@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionSourceCollection@3456@@Z @ 0x18013C7C0 (-get_InteractionSources@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVInteractionTracker@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVInteractionTracker@4567@@Z @ 0x180134A34 (--$MakeAndInitialize2@VCompositionInteractionSourceCollection@Interactions@Composition@UI@Window.c)
 */

struct Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection *__fastcall Windows::UI::Composition::Interactions::InteractionTracker::GetInteractionSourceCollection(
        Windows::UI::Composition::Interactions::InteractionTracker *this)
{
  char *v1; // rbx
  struct Windows::UI::Composition::Compositor *v2; // rax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::Interactions::InteractionTracker *v7; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)this + 248;
  if ( !*((_QWORD *)this + 31) )
  {
    v2 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this + 3);
    v7 = this;
    v8 = v2;
    v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection,Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Interactions::InteractionTracker *>(
           (Microsoft::WRL2::NestableRuntimeClass **)this + 31,
           &v8,
           &v7);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        211LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteractiontracker.cpp",
        (const char *)(unsigned int)v3,
        v5);
  }
  return *(struct Windows::UI::Composition::Interactions::CompositionInteractionSourceCollection **)v1;
}
