/*
 * XREFs of ?RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightBehavior@CompositionLight@Composition@UI@Windows@@IEAA?AW4LightBehavior@234@PEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001A54 (-GetLightBehavior@CompositionLight@Composition@UI@Windows@@IEAA-AW4LightBehavior@234@PEAVVisualU.c)
 *     ?RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z @ 0x180001C58 (-RemoveLight@Visual@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@W4LightBehavior@234@@Z.c)
 *     ?UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002140 (-UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::RemoveAllVisuals(
        Windows::UI::Composition::CompositionLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2)
{
  char *v2; // rbp
  __int64 v4; // rdi
  unsigned int i; // r14d
  int updated; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 136;
  v4 = 0LL;
  for ( i = Windows::UI::Composition::CompositionLight::GetLightBehavior((char *)this - 136);
        (unsigned int)v4 < *((_DWORD *)a2 + 6);
        v4 = (unsigned int)(v4 + 1) )
  {
    v9 = Windows::UI::Composition::Visual::RemoveLight(*(_QWORD *)(*(_QWORD *)a2 + 8 * v4), v2, i);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD7,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
        (const char *)(unsigned int)v9,
        v10);
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(*(Microsoft::WRL2::NestableRuntimeClass **)(*(_QWORD *)a2 + 8 * v4));
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = 0LL;
  }
  *((_DWORD *)a2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 8LL);
  ++*((_DWORD *)a2 + 8);
  updated = Windows::UI::Composition::CompositionLight::UpdateTargets(v2, i);
  v7 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE1,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
    (const char *)(unsigned int)updated,
    v10);
  return v7;
}
