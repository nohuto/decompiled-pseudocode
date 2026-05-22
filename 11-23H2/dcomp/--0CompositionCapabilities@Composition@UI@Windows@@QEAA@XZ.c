/*
 * XREFs of ??0CompositionCapabilities@Composition@UI@Windows@@QEAA@XZ @ 0x18003CCFC
 * Callers:
 *     ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z @ 0x18003CC38 (-Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z.c)
 * Callees:
 *     ??0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ @ 0x180040E8C (--0NestableRuntimeClass@WRL2@Microsoft@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::CompositionCapabilities::CompositionCapabilities(RTL_SRWLOCK *this)
{
  Microsoft::WRL2::NestableRuntimeClass::NestableRuntimeClass((Microsoft::WRL2::NestableRuntimeClass *)this);
  this->Ptr = &Windows::UI::Composition::CompositionCapabilities::`vftable';
  this[3].Ptr = 0LL;
  *(_OWORD *)&this[4].Ptr = 0LL;
  this[6].Ptr = 0LL;
  InitializeSRWLock(this + 7);
  InitializeSRWLock(this + 8);
  this[9].Ptr = &Windows::UI::Composition::CompositionCapabilities::Api::`vftable';
  return this;
}
