/*
 * XREFs of ??0CompositionIsland@Composition@UI@Windows@@QEAA@XZ @ 0x18006C534
 * Callers:
 *     ??0VisualTreeIsland@Composition@UI@Windows@@QEAA@XZ @ 0x18006C4C4 (--0VisualTreeIsland@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::CompositionIsland::CompositionIsland(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this->Ptr = &Windows::UI::Composition::CompositionIsland::`vftable';
  this[16].Ptr = &Windows::UI::Composition::CompositionIsland::Api::`vftable';
  this[18].Ptr = &Windows::UI::Composition::CompositionIsland::Partner::`vftable'{for `Windows::UI::Composition::Internal::ICompositionIslandPartner'};
  this[19].Ptr = &Windows::UI::Composition::CompositionIsland::Partner::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>'};
  this[24].Ptr = 0LL;
  InitializeSRWLock(this + 25);
  InitializeSRWLock(this + 26);
  this[27].Ptr = 0LL;
  this[29].Ptr = 0LL;
  InitializeSRWLock(this + 30);
  InitializeSRWLock(this + 31);
  this[32].Ptr = 0LL;
  this[33].Ptr = 0LL;
  InitializeSRWLock(this + 34);
  InitializeSRWLock(this + 35);
  this[46].Ptr = 0LL;
  this[47].Ptr = 0LL;
  this[49].Ptr = 0LL;
  InitializeSRWLock(this + 50);
  InitializeSRWLock(this + 51);
  result = this;
  this[52].Ptr = 0LL;
  this[55].Ptr = 0LL;
  this[56].Ptr = 0LL;
  this[58].Ptr = 0LL;
  return result;
}
