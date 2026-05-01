/*
 * XREFs of ??_ECSwitchController@@UEAAPEAXI@Z @ 0x180179588
 * Callers:
 *     ??_ECSwitchController@@WBI@EAAPEAXI@Z @ 0x1802096D0 (--_ECSwitchController@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CSwitchController *__fastcall CSwitchController::`vector deleting destructor'(CSwitchController *this, char a2)
{
  *((_DWORD *)this + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CSwitchController *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
