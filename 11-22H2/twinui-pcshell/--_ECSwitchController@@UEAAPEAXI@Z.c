/*
 * XREFs of ??_ECSwitchController@@UEAAPEAXI@Z @ 0x1801B5974
 * Callers:
 *     ??_ECSwitchController@@WBI@EAAPEAXI@Z @ 0x1802A5020 (--_ECSwitchController@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
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
