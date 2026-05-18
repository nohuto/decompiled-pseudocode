/*
 * XREFs of ??1SpectreWorld@@UEAA@XZ @ 0x180017C00
 * Callers:
 *     ??_GSpectreWorld@@UEAAPEAXI@Z @ 0x1800181D0 (--_GSpectreWorld@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SpectreWorld::~SpectreWorld(SpectreWorld *this)
{
  std::_Ref_count_base *v2; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
