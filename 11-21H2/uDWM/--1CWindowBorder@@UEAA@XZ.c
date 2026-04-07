/*
 * XREFs of ??1CWindowBorder@@UEAA@XZ @ 0x18003814C
 * Callers:
 *     ??_GCWindowBorder@@UEAAPEAXI@Z @ 0x1800380F0 (--_GCWindowBorder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CWindowBorder::~CWindowBorder(CWindowBorder *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 37);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 33);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 32);
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 31);
  CVisual::~CVisual(this);
}
