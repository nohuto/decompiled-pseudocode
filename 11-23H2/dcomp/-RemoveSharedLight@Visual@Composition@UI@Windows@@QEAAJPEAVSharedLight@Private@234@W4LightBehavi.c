/*
 * XREFs of ?RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavior@234@@Z @ 0x18010B788
 * Callers:
 *     ?RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@@Z @ 0x1800019E0 (-RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollection.c)
 * Callees:
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002434 (-UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::RemoveSharedLight(__int64 a1, __int64 a2, int a3, const char *a4)
{
  int updated; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = Windows::UI::Composition::Visual::RemoveLight(a1, a2, a3, a4);
  if ( updated < 0 )
  {
    v7 = 2370LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  updated = Windows::UI::Composition::Visual::UpdateSharedLights(a1, a3);
  if ( updated < 0 )
  {
    v7 = 2372LL;
    goto LABEL_3;
  }
  return 0LL;
}
