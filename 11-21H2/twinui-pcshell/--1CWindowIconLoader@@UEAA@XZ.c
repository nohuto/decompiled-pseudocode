/*
 * XREFs of ??1CWindowIconLoader@@UEAA@XZ @ 0x18049E324
 * Callers:
 *     ??_ECWindowIconLoader@@UEAAPEAXI@Z @ 0x18049E360 (--_ECWindowIconLoader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CWindowIconLoader::~CWindowIconLoader(CWindowIconLoader *this)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
