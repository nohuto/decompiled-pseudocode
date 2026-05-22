/*
 * XREFs of ?Subscribe@CWnfSubscriber@Composition@UI@Windows@@SAJXZ @ 0x18008DC28
 * Callers:
 *     ?RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatcherQueue@System@4@PEAVCompositionCapabilities@234@PEAUEventRegistrationToken@@@Z @ 0x180067EAC (-RegisterForEvents@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAJPEAUIDispatche.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 Windows::UI::Composition::CWnfSubscriber::Subscribe(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  v0 = RtlQueryWnfStateData(
         &v6,
         WNF_DWM_COMPOSITIONCAPABILITIES,
         Windows::UI::Composition::CWnfSubscriber::WnfCapabilitiesQueryCallback,
         0LL,
         0LL);
  v1 = v0 | 0x10000000;
  if ( v0 < 0 )
  {
    v4 = 99LL;
  }
  else
  {
    v2 = RtlSubscribeWnfStateChangeNotification(
           &Windows::UI::Composition::CWnfSubscriber::s_wnfCapabilitiesSubscription,
           WNF_DWM_COMPOSITIONCAPABILITIES,
           v6,
           Windows::UI::Composition::CWnfSubscriber::WnfCapabilitiesChangeCallback,
           0LL,
           0LL,
           0,
           0);
    v1 = v2 | 0x10000000;
    if ( v2 >= 0 )
      return 0LL;
    Windows::UI::Composition::CWnfSubscriber::s_wnfCapabilitiesSubscription = 0LL;
    v4 = 118LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositioncapabilitiesg.cpp",
    (const char *)v1);
  return v1;
}
