/*
 * XREFs of ??1PTPProcessor@@UEAA@XZ @ 0x1801EB6E0
 * Callers:
 *     ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801EB720 (--_GPTPProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall PTPProcessor::~PTPProcessor(PTPProcessor *this)
{
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
