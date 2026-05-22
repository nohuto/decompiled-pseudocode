/*
 * XREFs of ?RemoveCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@@Z @ 0x18000764C
 * Callers:
 *     ?Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180007150 (-Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUIComposi.c)
 * Callees:
 *     ?UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ @ 0x18000745C (-UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??4?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801414D0 (--4-$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::RemoveCaster(
        Windows::UI::Composition::CompositionProjectedShadow *this,
        struct Windows::UI::Composition::CompositionProjectedShadowCaster *a2)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v5; // r9
  struct Windows::UI::Composition::CompositionProjectedShadowCaster **i; // rcx
  __int64 v7; // rbp
  __int64 j; // rbx
  int updated; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 24);
  v3 = 0;
  v5 = (*((_QWORD *)this + 25) - v2) >> 3;
  if ( (int)v5 <= 0 )
    return 0LL;
  for ( i = (struct Windows::UI::Composition::CompositionProjectedShadowCaster **)*((_QWORD *)this + 24); *i != a2; ++i )
  {
    if ( ++v3 >= (int)v5 )
      return 0LL;
  }
  v7 = *((_QWORD *)this + 25);
  for ( j = v2 + 8LL * v3 + 8; j != v7; j += 8LL )
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionShape>::operator=(j - 8, j);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(*((_QWORD *)this + 25) - 8LL);
  *((_QWORD *)this + 25) -= 8LL;
  updated = Windows::UI::Composition::CompositionProjectedShadow::UpdateCasters(this);
  v10 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x194,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowscene.cpp",
    (const char *)(unsigned int)updated,
    v12);
  return v10;
}
