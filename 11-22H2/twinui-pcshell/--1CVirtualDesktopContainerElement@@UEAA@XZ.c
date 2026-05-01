/*
 * XREFs of ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x18059138C
 * Callers:
 *     ??_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z @ 0x180591570 (--_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister @ 0x18002DAEC (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18002DAEC.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18006ED60 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802D08B8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopContainerElement::~CVirtualDesktopContainerElement(
        CVirtualDesktopContainerElement *this)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 i; // rsi
  unsigned __int64 *v4; // rbx
  unsigned __int64 j; // rsi

  v2 = (unsigned __int64 *)((char *)this + 848);
  if ( *((_QWORD *)this + 105) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 105)
                                                                                                  + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 105));
    *((_QWORD *)this + 105) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  v4 = (unsigned __int64 *)((char *)this + 800);
  if ( *((_QWORD *)this + 99) )
  {
    for ( j = 0LL; j < *v4; ++j )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 99) + 8 * j));
    CoTaskMemFree(*((LPVOID *)this + 99));
    *((_QWORD *)this + 99) = 0LL;
  }
  *v4 = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister((__int64)this + 280);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 30);
  *((_DWORD *)this + 59) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
