/*
 * XREFs of ?AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001EE4 (-AddVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001F90 (-AddLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002434 (-UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::SharedLight::AddVisual(
        Windows::UI::Composition::Private::SharedLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2,
        struct Windows::UI::Composition::Visual *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // edi
  int updated; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::UI::Composition::VisualUnorderedCollectionImpl::AddVisual(a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
      (const char *)(unsigned int)v6,
      v13);
    return v7;
  }
  else
  {
    if ( a2 == (Windows::UI::Composition::Private::SharedLight *)((char *)this + 80) )
    {
      v8 = 0;
    }
    else
    {
      if ( a2 != (Windows::UI::Composition::Private::SharedLight *)((char *)this + 40) )
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      v8 = 1;
    }
    updated = Windows::UI::Composition::Visual::AddLight(a3, (char *)this - 136, v8);
    v10 = updated;
    if ( updated < 0 )
    {
      v12 = 2350LL;
    }
    else
    {
      updated = Windows::UI::Composition::Visual::UpdateSharedLights(a3, v8);
      v10 = updated;
      if ( updated >= 0 )
        return 0LL;
      v12 = 2352LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)(unsigned int)updated,
      v13);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
      (const char *)v10,
      v14);
    return v10;
  }
}
