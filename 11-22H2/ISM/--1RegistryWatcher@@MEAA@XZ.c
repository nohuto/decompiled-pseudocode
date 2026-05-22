/*
 * XREFs of ??1RegistryWatcher@@MEAA@XZ @ 0x180123F4C
 * Callers:
 *     ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x180124000 (--_ERegistryWatcher@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall RegistryWatcher::~RegistryWatcher(RegistryWatcher *this)
{
  __int64 *v2; // rdi
  HKEY v3; // rcx

  *(_QWORD *)this = &RegistryWatcher::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  v2 = (__int64 *)((char *)this + 16);
  if ( *((_QWORD *)this + 4) )
  {
    if ( *v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 280LL))(*v2);
    CloseHandle(*((HANDLE *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (HKEY)*((_QWORD *)this + 3);
  if ( v3 )
  {
    RegCloseKey(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
