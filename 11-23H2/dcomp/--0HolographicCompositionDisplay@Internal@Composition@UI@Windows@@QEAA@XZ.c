/*
 * XREFs of ??0HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1801191BC
 * Callers:
 *     ??$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAM@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAM@Z @ 0x180118CA8 (--$MakeAndInitialize2@VHolographicCompositionDisplay@Internal@Composition@UI@Windows@@V12345@PEA.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Internal::HolographicCompositionDisplay *__fastcall Windows::UI::Composition::Internal::HolographicCompositionDisplay::HolographicCompositionDisplay(
        Windows::UI::Composition::Internal::HolographicCompositionDisplay *this)
{
  Windows::UI::Composition::Internal::HolographicCompositionDisplay *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Internal::HolographicCompositionDisplay::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Internal::HolographicCompositionDisplay::Api::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  return result;
}
