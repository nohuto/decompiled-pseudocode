/*
 * XREFs of ??1PTPProcessor@@UEAA@XZ @ 0x1801CC67C
 * Callers:
 *     ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801CC6B0 (--_GPTPProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PTPProcessor::~PTPProcessor(PTPProcessor *this)
{
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
