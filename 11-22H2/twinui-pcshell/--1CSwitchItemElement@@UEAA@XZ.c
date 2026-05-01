/*
 * XREFs of ??1CSwitchItemElement@@UEAA@XZ @ 0x1805690DC
 * Callers:
 *     ??_ECSwitchItemElement@@UEAAPEAXI@Z @ 0x1805692C0 (--_ECSwitchItemElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSwitchItemElement::~CSwitchItemElement(CSwitchItemElement *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 664);
  if ( *v2 )
    *(_QWORD *)(*v2 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 78);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 77);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 76);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 75);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 74);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 72);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 71);
  *((_DWORD *)this + 61) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
