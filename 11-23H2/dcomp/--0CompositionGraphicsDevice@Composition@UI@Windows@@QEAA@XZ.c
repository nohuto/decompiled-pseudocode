/*
 * XREFs of ??0CompositionGraphicsDevice@Composition@UI@Windows@@QEAA@XZ @ 0x180065740
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIUnknown@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionGraphicsDevice@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIUnknown@@@Z @ 0x18006569C (--$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@23.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

RTL_SRWLOCK *__fastcall Windows::UI::Composition::CompositionGraphicsDevice::CompositionGraphicsDevice(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *result; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject((Windows::UI::Composition::CompositionObject *)this);
  this[26].Ptr = 0LL;
  this[27].Ptr = 0LL;
  this[28].Ptr = 0LL;
  this->Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::`vftable'{for `Windows::UI::Composition::CompositionObject'};
  this[16].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::`vftable'{for `Windows::UI::Composition::IDeferredCallbackObject'};
  this[17].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::Api::`vftable'{for `Windows::UI::Composition::ICompositionGraphicsDevice'};
  this[18].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionGraphicsDevice2,Windows::UI::Composition::ICompositionGraphicsDevice3,Windows::UI::Composition::ICompositionGraphicsDevice4>'};
  this[19].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::Api::`vftable'{for `Windows::UI::Composition::ICompositionGraphicsDevice3'};
  this[20].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositionGraphicsDevice4>'};
  this[22].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::Interop::`vftable';
  this[24].Ptr = &Windows::UI::Composition::CompositionGraphicsDevice::XUCInternal::`vftable';
  this[29].Ptr = 0LL;
  InitializeSRWLock(this + 30);
  InitializeSRWLock(this + 31);
  this[32].Ptr = 0LL;
  result = this;
  this[33].Ptr = 0LL;
  this[34].Ptr = 0LL;
  this[35].Ptr = 0LL;
  return result;
}
