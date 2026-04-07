/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x180014F74
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x180014E10 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180014E6C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
  *(_QWORD *)this = &CCanvasVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
}
