/*
 * XREFs of ??0VisualIslandSite@Composition@UI@Windows@@QEAA@XZ @ 0x180086874
 * Callers:
 *     ??$MakeAndInitialize2@VVisualIslandSite@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualIslandSite@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800867D0 (--$MakeAndInitialize2@VVisualIslandSite@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Detail.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::VisualIslandSite::VisualIslandSite(RTL_SRWLOCK *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this[16].Ptr = &Windows::UI::Composition::CompositionIslandSite::Api::`vftable';
  this[18].Ptr = &Windows::UI::Composition::CompositionIslandSite::Partner::`vftable';
  this[25].Ptr = 0LL;
  this[26].Ptr = 0LL;
  this[28].Ptr = 0LL;
  this[29].Ptr = 0LL;
  this->Ptr = &Windows::UI::Composition::VisualIslandSite::`vftable';
  this[31].Ptr = &Windows::UI::Composition::VisualIslandSite::Api::`vftable';
  this[35].Ptr = 0LL;
  this[33].Ptr = &Windows::UI::Composition::VisualIslandSite::Private::`vftable';
  this[36].Ptr = 0LL;
  InitializeSRWLock(this + 37);
  InitializeSRWLock(this + 38);
  return this;
}
