/*
 * XREFs of ?RemoveVisualByLightBehavior@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisual@345@W4LightBehavior@345@@Z @ 0x1801827A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001BB0 (-RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCollectionByLightBehavior@CompositionLight@Composition@UI@Windows@@IEAAAEAVVisualUnorderedCollectionImpl@234@W4LightBehavior@234@@Z @ 0x18018A9AC (-GetCollectionByLightBehavior@CompositionLight@Composition@UI@Windows@@IEAAAEAVVisualUnorderedCo.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::SharedLight::RemoveVisualByLightBehavior(
        __int64 a1,
        struct Windows::UI::Composition::Visual *a2,
        unsigned int a3)
{
  Windows::UI::Composition::VisualUnorderedCollectionImpl *CollectionByLightBehavior; // rax
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CollectionByLightBehavior = (Windows::UI::Composition::VisualUnorderedCollectionImpl *)Windows::UI::Composition::CompositionLight::GetCollectionByLightBehavior(
                                                                                           a1,
                                                                                           a3);
  v7 = Windows::UI::Composition::VisualUnorderedCollectionImpl::RemoveVisual(CollectionByLightBehavior, a2);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = Windows::UI::Composition::Visual::RemoveLight((__int64)a2, a1, a3, v8);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        127LL,
        (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
        (const char *)(unsigned int)v11,
        v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x77,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
      (const char *)(unsigned int)v7);
    return v9;
  }
}
