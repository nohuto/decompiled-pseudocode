/*
 * XREFs of ??1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ @ 0x18003C660
 * Callers:
 *     ??_ECompositionCapabilities@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18003C510 (--_ECompositionCapabilities@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatcherQueue@System@4@UEventRegistrationToken@@@Z @ 0x180069EFC (-UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatc.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall Windows::UI::Composition::CompositionCapabilities::~CompositionCapabilities(
        Windows::UI::Composition::CompositionCapabilities *this)
{
  struct EventRegistrationToken v2; // rdx
  __int64 v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &Windows::UI::Composition::CompositionCapabilities::`vftable';
  v4 = &Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock;
  EnterCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  v2.value = *((_QWORD *)this + 4);
  if ( v2.value )
  {
    Windows::UI::Composition::CompositionCapabilitiesRegistration::UnregisterForEvents(
      *((struct Windows::System::IDispatcherQueue **)this + 3),
      v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((char *)this + 24);
  Microsoft::WRL2::NestableRuntimeClass::~NestableRuntimeClass(this);
}
