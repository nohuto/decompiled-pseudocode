/*
 * XREFs of ??1RegistryWatcher@@MEAA@XZ @ 0x1800F9EA4
 * Callers:
 *     ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x1800F9F60 (--_ERegistryWatcher@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RegistryWatcher::~RegistryWatcher(RegistryWatcher *this)
{
  void *v2; // rcx
  _QWORD *v3; // rdi
  HKEY v4; // rcx

  *(_QWORD *)this = &RegistryWatcher::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  v2 = (void *)*((_QWORD *)this + 4);
  v3 = (_QWORD *)((char *)this + 16);
  if ( v2 )
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*v3 + 280LL))(*v3, v2);
      v2 = (void *)*((_QWORD *)this + 4);
    }
    CloseHandle(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (HKEY)*((_QWORD *)this + 3);
  if ( v4 )
  {
    RegCloseKey(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
