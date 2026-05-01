/*
 * XREFs of ?UnregisterViewEventDispatcherHandler@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A490C
 * Callers:
 *     ??1MiniSearchExperienceManager@@UEAA@XZ @ 0x1803A1028 (--1MiniSearchExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall MiniSearchExperienceManager::UnregisterViewEventDispatcherHandler(MiniSearchExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( v2 && *((_QWORD *)this + 15) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = 0LL;
  v3 = *((_QWORD *)this + 4);
  v4 = *(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  if ( v4(v3, &IID_IImmersiveWindowMessageService, &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca, &v5) >= 0
    && *((_DWORD *)this + 34) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    *((_DWORD *)this + 34) = 0;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
}
