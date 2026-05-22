/*
 * XREFs of ?RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001A90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x180001BB0 (-RemoveVisual@VisualUnorderedCollectionImpl@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z.c)
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002434 (-UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::SharedLight::RemoveVisual(
        Windows::UI::Composition::Private::SharedLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2,
        struct Windows::UI::Composition::Visual *a3)
{
  unsigned int v5; // edi
  int updated; // eax
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == (Windows::UI::Composition::Private::SharedLight *)((char *)this + 80) )
  {
    v5 = 0;
  }
  else
  {
    if ( a2 != (Windows::UI::Composition::Private::SharedLight *)((char *)this + 40) )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    v5 = 1;
  }
  updated = Windows::UI::Composition::Visual::RemoveLight(a3, (char *)this - 136, v5);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 2370LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)(unsigned int)updated,
      v11);
    v10 = 93LL;
    goto LABEL_13;
  }
  updated = Windows::UI::Composition::Visual::UpdateSharedLights(a3, v5);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 2372LL;
    goto LABEL_11;
  }
  v7 = Windows::UI::Composition::VisualUnorderedCollectionImpl::RemoveVisual(a2, a3);
  if ( v7 >= 0 )
    return 0LL;
  v10 = 95LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
    (const char *)(unsigned int)v7,
    v11);
  return (unsigned int)v7;
}
