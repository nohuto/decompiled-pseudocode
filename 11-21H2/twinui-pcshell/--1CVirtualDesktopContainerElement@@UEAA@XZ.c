/*
 * XREFs of ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1804D9614
 * Callers:
 *     ??_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z @ 0x1804D9800 (--_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease @ 0x18003FB90 (Microsoft--WRL--ComPtr__anonymous_namespace_--MonitorEventRegistration_--InternalRelease.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180041470 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1804A2B58 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1804A2B58.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopContainerElement::~CVirtualDesktopContainerElement(
        CVirtualDesktopContainerElement *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rbx
  void *v4; // rcx
  unsigned __int64 v5; // rbx

  v2 = (void *)*((_QWORD *)this + 105);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 106) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 105) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 106) );
      v2 = (void *)*((_QWORD *)this + 105);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 105) = 0LL;
  }
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  v4 = (void *)*((_QWORD *)this + 99);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 100) )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 99) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 100) );
      v4 = (void *)*((_QWORD *)this + 99);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 99) = 0LL;
  }
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0((__int64)this + 280);
  Microsoft::WRL::ComPtr__anonymous_namespace_::MonitorEventRegistration_::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 30);
  *((_DWORD *)this + 59) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
