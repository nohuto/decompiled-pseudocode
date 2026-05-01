/*
 * XREFs of ??1CDropFeedbackItem@@UEAA@XZ @ 0x1805F2CC4
 * Callers:
 *     ??_GCDropFeedbackItem@@UEAAPEAXI@Z @ 0x1805F2EA0 (--_GCDropFeedbackItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDropFeedbackItem::~CDropFeedbackItem(CDropFeedbackItem *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)this + 5);
  *((_DWORD *)this + 7) = -1073741823;
}
