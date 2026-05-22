/*
 * XREFs of ?AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z @ 0x180001E50
 * Callers:
 *     <none>
 * Callees:
 *     ?AddVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001EE4 (-AddVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001F90 (-AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002140 (-UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::AddVisual(
        Windows::UI::Composition::CompositionLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2,
        struct Windows::UI::Composition::Visual *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  char *v8; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi
  int updated; // eax
  unsigned int v13; // ebx
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::UI::Composition::VisualUnorderedCollectionImpl::AddVisual(a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
      (const char *)(unsigned int)v6,
      v15);
    return v7;
  }
  else
  {
    v8 = (char *)this - 136;
    if ( a2 == (Windows::UI::Composition::CompositionLight *)((char *)this + 80) )
    {
      v9 = 0;
    }
    else
    {
      if ( a2 != (Windows::UI::Composition::CompositionLight *)((char *)this + 40) )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v9 = 1;
    }
    v10 = Windows::UI::Composition::Visual::AddLight(a3, v8, v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
        (const char *)(unsigned int)v10,
        v15);
      return v11;
    }
    else
    {
      updated = Windows::UI::Composition::CompositionLight::UpdateTargets(v8, v9);
      v13 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x86,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
          (const char *)(unsigned int)updated,
          v15);
        return v13;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
