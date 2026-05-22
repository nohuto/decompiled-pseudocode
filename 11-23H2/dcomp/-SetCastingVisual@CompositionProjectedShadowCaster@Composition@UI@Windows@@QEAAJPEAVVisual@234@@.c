/*
 * XREFs of ?SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z @ 0x18000D650
 * Callers:
 *     ?put_CastingVisual@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18000D430 (-put_CastingVisual@Api@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJPEAUIVisual.c)
 *     ?Destroy@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAXXZ @ 0x18000D4E0 (-Destroy@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??4?$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@UI@Windows@@@Z @ 0x1800632FC (--4-$RefPtr@VVisual@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVVisual@Composition@.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCaster::SetCastingVisual(
        Windows::UI::Composition::CompositionProjectedShadowCaster *this,
        struct Windows::UI::Composition::Visual *a2)
{
  unsigned int v2; // eax
  char *v4; // rdi
  const char *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( *((_BYTE *)this + 200) )
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xD5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowcaster.cpp",
      (const char *)0x80070057LL,
      (int)"This type of caster cannot write to the visual property.",
      v6);
    return 2147942487LL;
  }
  else
  {
    v4 = (char *)this + 184;
    if ( a2 != *((struct Windows::UI::Composition::Visual **)this + 23) )
    {
      if ( a2 )
        v2 = *((_DWORD *)a2 + 32);
      DirectComposition::CDevice::ResourceSetReferenceProperty(
        *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
        *((_DWORD *)this + 32),
        2u,
        v2);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Visual>::operator=(v4, a2);
    }
    return 0LL;
  }
}
