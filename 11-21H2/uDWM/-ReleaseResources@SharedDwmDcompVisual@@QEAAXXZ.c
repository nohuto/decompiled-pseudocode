/*
 * XREFs of ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180036D2C
 * Callers:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x180036CCC (--1UdwmDcompVisual@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseResources(SharedDwmDcompVisual *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 2);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
    *(_QWORD *)this = 0LL;
  }
}
