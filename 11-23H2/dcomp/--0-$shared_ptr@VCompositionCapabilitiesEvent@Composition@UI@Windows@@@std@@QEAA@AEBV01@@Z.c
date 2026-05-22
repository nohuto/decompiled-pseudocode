/*
 * XREFs of ??0?$shared_ptr@VCompositionCapabilitiesEvent@Composition@UI@Windows@@@std@@QEAA@AEBV01@@Z @ 0x180068148
 * Callers:
 *     ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067EAC (-RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatche.c)
 *     ?UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatcherQueue@System@4@UEventRegistrationToken@@@Z @ 0x180069EFC (-UnregisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXPEAUIDispatc.c)
 *     ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ @ 0x180160F4C (-OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>::shared_ptr<Windows::UI::Composition::CompositionCapabilitiesEvent>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
