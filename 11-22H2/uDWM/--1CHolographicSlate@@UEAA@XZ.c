/*
 * XREFs of ??1CHolographicSlate@@UEAA@XZ @ 0x1800C1CEC
 * Callers:
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800C1D30 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x1800C2240 (-UnbindWindow@CHolographicSlate@@AEAAJXZ.c)
 */

void __fastcall CHolographicSlate::~CHolographicSlate(CHolographicSlate *this)
{
  *(_QWORD *)this = &CHolographicSlate::`vftable';
  CHolographicSlate::UnbindWindow(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
