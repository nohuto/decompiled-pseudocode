/*
 * XREFs of ??1CSnapAssistViewController@@UEAA@XZ @ 0x1804B3E3C
 * Callers:
 *     ??_ECSnapAssistViewController@@UEAAPEAXI@Z @ 0x1804B4080 (--_ECSnapAssistViewController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSnapAssistViewController::~CSnapAssistViewController(CSnapAssistViewController *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
}
