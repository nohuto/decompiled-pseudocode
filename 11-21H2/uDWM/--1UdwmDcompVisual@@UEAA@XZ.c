/*
 * XREFs of ??1UdwmDcompVisual@@UEAA@XZ @ 0x180036CCC
 * Callers:
 *     ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180036C70 (--_EUdwmDcompVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180036D2C (-ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 */

void __fastcall UdwmDcompVisual::~UdwmDcompVisual(UdwmDcompVisual *this)
{
  *(_QWORD *)this = &UdwmDcompVisual::`vftable';
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 48));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
