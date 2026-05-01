/*
 * XREFs of ??1GetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAA@XZ @ 0x18054F4E8
 * Callers:
 *     ??_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z @ 0x18054FA28 (--_GGetTrayBitmapCallbackData@VirtualDesktopGestureWindow@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall VirtualDesktopGestureWindow::GetTrayBitmapCallbackData::~GetTrayBitmapCallbackData(
        VirtualDesktopGestureWindow::GetTrayBitmapCallbackData *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 8);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)(v2 + 16));
  }
  v3 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v3 )
    DeleteObject(v3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 1);
}
