/*
 * XREFs of ?RemoveAllCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x1800073F8
 * Callers:
 *     ?Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ @ 0x180006BF0 (-Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RemoveAll@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180007380 (-RemoveAll@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x18000745C (-UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::RemoveAllCasters(
        Windows::UI::Composition::CompositionProjectedShadow *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  int updated; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 25);
  for ( i = *((_QWORD *)this + 24); i != v1; i += 8LL )
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(i);
  *((_QWORD *)this + 25) = *((_QWORD *)this + 24);
  updated = Windows::UI::Composition::CompositionProjectedShadow::UpdateCasters(this);
  v5 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A1,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return v5;
}
