/*
 * XREFs of ?RemoveAllVisuals@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@@Z @ 0x1800019E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightBehavior@CompositionLight@Composition@UI@Windows@@IEAA?AW4LightBehavior@234@PEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001A54 (-GetLightBehavior@CompositionLight@Composition@UI@Windows@@IEAA-AW4LightBehavior@234@PEAVVisualU.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18007C16C (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavior@234@@Z @ 0x18010B788 (-RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavi.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::SharedLight::RemoveAllVisuals(
        Windows::UI::Composition::Private::SharedLight *this,
        struct Windows::UI::Composition::VisualUnorderedCollectionImpl *a2)
{
  char *v2; // rbp
  __int64 v4; // rdi
  unsigned int i; // r14d
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 136;
  v4 = 0LL;
  for ( i = Windows::UI::Composition::CompositionLight::GetLightBehavior((char *)this - 136);
        (unsigned int)v4 < *((_DWORD *)a2 + 6);
        v4 = (unsigned int)(v4 + 1) )
  {
    v7 = Windows::UI::Composition::Visual::RemoveSharedLight(*(_QWORD *)(*(_QWORD *)a2 + 8 * v4), v2, i);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x99,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedlight.cpp",
        (const char *)(unsigned int)v7,
        v8);
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(*(Microsoft::WRL2::NestableRuntimeClass **)(*(_QWORD *)a2 + 8 * v4));
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v4) = 0LL;
  }
  *((_DWORD *)a2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 8LL);
  ++*((_DWORD *)a2 + 8);
  return 0LL;
}
