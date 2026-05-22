/*
 * XREFs of ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800119D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180011A54 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40 (-GetSize@-$EventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVC.c)
 *     ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatcherQueue@System@4@UEventRegistrationToken@@@Z @ 0x180069EFC (-UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatc.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilities::Api::remove_Changed(
        Windows::UI::Composition::CompositionCapabilities::Api *this,
        struct EventRegistrationToken a2)
{
  struct EventRegistrationToken v4; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock;
  EnterCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
    (char *)this - 24,
    a2.value);
  if ( !Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize((char *)this - 24) )
  {
    v4.value = *((_QWORD *)this - 5);
    if ( v4.value )
    {
      Windows::UI::Composition::CompositionCapabilitiesRegistration::UnregisterForEvents(
        *((struct Windows::System::IDispatcherQueue **)this - 6),
        v4);
      *((_QWORD *)this - 5) = 0LL;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return 0LL;
}
