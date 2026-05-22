/*
 * XREFs of ??0HolographicCompositor@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1801153D8
 * Callers:
 *     ??$MakeAndInitialize2@VHolographicCompositor@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAU_GUID@@AEAI@Details@WRL2@Microsoft@@YAJPEAPEAVHolographicCompositor@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAU_GUID@@AEAI@Z @ 0x180114C44 (--$MakeAndInitialize2@VHolographicCompositor@Internal@Composition@UI@Windows@@V12345@PEAVComposi.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::Internal::HolographicCompositor::HolographicCompositor(
        RTL_SRWLOCK *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this->Ptr = &Windows::UI::Composition::Internal::HolographicCompositor::`vftable';
  this[17].Ptr = &Windows::UI::Composition::Internal::HolographicCompositor::Api::`vftable';
  this[19].Ptr = 0LL;
  InitializeSRWLock(this + 20);
  InitializeSRWLock(this + 21);
  this[22].Ptr = 0LL;
  this[23].Ptr = 0LL;
  LODWORD(this[24].Ptr) = 0;
  HIDWORD(this[24].Ptr) = 0;
  return this;
}
