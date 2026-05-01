/*
 * XREFs of ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x18056C968
 * Callers:
 *     ??_ECVirtualDesktopBarElement@@UEAAPEAXI@Z @ 0x18056CBC0 (--_ECVirtualDesktopBarElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CVirtualDesktopBarElement::~CVirtualDesktopBarElement(CVirtualDesktopBarElement *this)
{
  __int64 v2; // rax

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 97);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 96);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 95);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 94);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 93);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 92);
  v2 = *((_QWORD *)this + 91);
  if ( v2 )
    *(_QWORD *)(v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 91);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 28);
  *((_DWORD *)this + 55) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
