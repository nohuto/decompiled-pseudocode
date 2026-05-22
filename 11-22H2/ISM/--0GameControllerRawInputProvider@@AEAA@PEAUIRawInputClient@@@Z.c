/*
 * XREFs of ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004B18C
 * Callers:
 *     ?Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004AE70 (-Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180026DB0 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18004B4FC (--0QpcTimeConverter@@QEAA@XZ.c)
 *     GameInputServerCreate @ 0x18004B550 (GameInputServerCreate.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?AddGamepadInterceptionListener@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionListener@@@Z @ 0x18006A650 (-AddGamepadInterceptionListener@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionListener.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B63B0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DCD00 (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 */

// Hidden C++ exception states: #wind=1
GameControllerRawInputProvider *__fastcall GameControllerRawInputProvider::GameControllerRawInputProvider(
        GameControllerRawInputProvider *this,
        struct IRawInputClient *a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  int v5; // eax
  int v6; // eax
  HANDLE FileW; // rax
  const char *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  int updated; // eax
  int dwCreationDisposition; // [rsp+20h] [rbp-68h]
  int *dwCreationDispositiona; // [rsp+20h] [rbp-68h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  DWORD CurrentProcessId; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `IGamepadInterceptionListener'};
  *((_QWORD *)this + 4) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  v4 = (__int64 *)((char *)this + 64);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = -1LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  QpcTimeConverter::QpcTimeConverter((GameControllerRawInputProvider *)((char *)this + 136));
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  if ( GameControllerRawInputProvider::s_instance )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)0x8000FFFFLL,
      dwCreationDisposition);
  GameControllerRawInputProvider::s_instance = this;
  CurrentProcessId = GetCurrentProcessId();
  LODWORD(dwCreationDispositiona) = 0;
  v5 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &CurrentProcessId, 4LL);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v5,
      0);
  if ( IsEdition(6176LL) )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-ProductInfo");
    dwCreationDispositiona = &v21;
    v6 = NtQueryLicenseValue(&DestinationString, 0LL, &v20, 4LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x72,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerra"
                      "winputprovider.cpp",
        (const char *)(unsigned int)v6,
        (int)&v21);
    if ( v20 != 198 )
    {
      FileW = CreateFileW(L"\\\\.\\XboxGIP_Admin", 0xC0000000, 3u, 0LL, 3u, 0xA0000000, 0LL);
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 80,
        FileW);
      if ( ((*((_QWORD *)this + 10) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x85,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontroller"
                        "rawinputprovider.cpp",
          v8);
    }
  }
  v9 = *v3;
  *v3 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = CoreUICreate(v3);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x89,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v10,
      (int)dwCreationDispositiona);
  if ( !gbIsDWMNoRawGameController )
  {
    v11 = *v4;
    *v4 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    GameInputServerCreate((char *)this + 16, (char *)this + 64);
  }
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  GamepadInterceptionHelper::AddGamepadInterceptionListener(
    GamepadInterceptionHelper,
    (GameControllerRawInputProvider *)((char *)this + 24));
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 43) = -1;
  updated = GameControllerRawInputProvider::UpdateFocusPids(this);
  if ( updated < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x95,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)updated,
      (int)dwCreationDispositiona);
  return this;
}
