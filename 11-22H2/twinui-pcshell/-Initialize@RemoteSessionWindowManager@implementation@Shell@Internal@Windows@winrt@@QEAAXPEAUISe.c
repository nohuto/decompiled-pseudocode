/*
 * XREFs of ?Initialize@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIServiceProvider@@@Z @ 0x1801AF72C
 * Callers:
 *     ?subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801AF710 (-subscribe_to_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIS.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::Initialize(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        struct IServiceProvider *a2)
{
  bool v4; // bl
  LSTATUS DWORD; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
  (***((void (__fastcall ****)(_QWORD, struct IServiceProvider *))this + 3))(*((_QWORD *)this + 3), a2);
  v4 = 0;
  v6 = 0;
  DWORD = SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
            L"SwitcherIntegrationEnabled",
            &v6);
  if ( DWORD == -2147024894 )
  {
    v4 = 1;
  }
  else if ( DWORD >= 0 )
  {
    v4 = v6 != 0;
  }
  *((_BYTE *)this + 250) = v4;
}
