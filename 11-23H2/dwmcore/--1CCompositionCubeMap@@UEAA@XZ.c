/*
 * XREFs of ??1CCompositionCubeMap@@UEAA@XZ @ 0x18022253C
 * Callers:
 *     ??_GCCompositionCubeMap@@UEAAPEAXI@Z @ 0x1802225A0 (--_GCCompositionCubeMap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800999AC (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x180222F98 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 */

void __fastcall CCompositionCubeMap::~CCompositionCubeMap(CCompositionCubeMap *this)
{
  *(_QWORD *)this = &CCompositionCubeMap::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionCubeMap::`vftable'{for `ICompositionSurfaceInfoListener'};
  CCompositionCubeMap::ReleaseResources(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
