/*
 * XREFs of ?add_GuidedSnapAssistCompletedEvent@CSnapAssistControllerBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180180860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180034310 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800A2968 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@.c)
 */

__int64 __fastcall CSnapAssistControllerBase::add_GuidedSnapAssistCompletedEvent(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
    v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>>(
           a2,
           (__int64 *)&v9);
    if ( v6 >= 0 )
    {
      if ( v9 )
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               (_QWORD *)(a1 + 88),
               v9,
               *(void **)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v6 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
    if ( v6 >= 0 )
      return 0LL;
  }
  else
  {
    v6 = -2147024809;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x157,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
