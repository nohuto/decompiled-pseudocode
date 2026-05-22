/*
 * XREFs of ?RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4LightBehavior@234@@Z @ 0x180001B20
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001BB0 (-RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002140 (-UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::RemoveVisualByLightBehavior(
        __int64 a1,
        struct Windows::UI::Composition::Visual *a2,
        unsigned int a3)
{
  __int64 v6; // rax
  int updated; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  if ( a3 )
  {
    if ( a3 != 1 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v6 = 176LL;
  }
  else
  {
    v6 = 216LL;
  }
  updated = Windows::UI::Composition::VisualUnorderedCollectionImpl::RemoveVisual(
              (Windows::UI::Composition::VisualUnorderedCollectionImpl *)(v6 + a1),
              a2);
  v8 = updated;
  if ( updated < 0 )
  {
    v11 = 183LL;
  }
  else
  {
    v9 = Windows::UI::Composition::Visual::RemoveLight(a2, a1, a3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBA,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
        (const char *)(unsigned int)v9,
        v12);
    updated = Windows::UI::Composition::CompositionLight::UpdateTargets(a1, a3);
    v8 = updated;
    if ( updated >= 0 )
      return 0LL;
    v11 = 188LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
    (const char *)(unsigned int)updated,
    v12);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock(&v14);
  return v8;
}
