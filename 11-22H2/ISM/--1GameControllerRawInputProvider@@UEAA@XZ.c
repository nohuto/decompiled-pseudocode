/*
 * XREFs of ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800DBB24
 * Callers:
 *     ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x1800DBCA8 (--_GGameControllerRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180026DB0 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180033458 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?RemoveGamepadInterceptionListener@GamepadInterceptionHelper@@QEAAXPEBUIGamepadInterceptionListener@@@Z @ 0x18006AB04 (-RemoveGamepadInterceptionListener@GamepadInterceptionHelper@@QEAAXPEBUIGamepadInterceptionListe.c)
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800DBCF8 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 */

void __fastcall GameControllerRawInputProvider::~GameControllerRawInputProvider(GameControllerRawInputProvider *this)
{
  unsigned __int64 v2; // rbx
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  __int64 v4; // r8
  const char *v5; // r9
  unsigned int v6; // edx
  GameControllerRawInputProvider::ShellButtonListEntry **v7; // rbx
  GameControllerRawInputProvider::ShellButtonListEntry *v8; // rax
  GameControllerRawInputProvider::ShellButtonListEntry **v9; // rcx
  __int64 **v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  char *v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  v2 = (unsigned __int64)this + 24;
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `IGamepadInterceptionListener'};
  *((_QWORD *)this + 4) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 43) = -1;
  GameControllerRawInputProvider::UpdateFocusPids(this);
  v14 = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v14, 4LL);
  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  GamepadInterceptionHelper::RemoveGamepadInterceptionListener(
    GamepadInterceptionHelper,
    (const struct IGamepadInterceptionListener *)(v2 & -(__int64)(this != 0LL)),
    v4,
    v5);
  GameControllerRawInputProvider::s_instance = 0LL;
  v7 = (GameControllerRawInputProvider::ShellButtonListEntry **)((char *)this + 112);
  while ( 1 )
  {
    v8 = *v7;
    v9 = *(GameControllerRawInputProvider::ShellButtonListEntry ***)*v7;
    if ( *((GameControllerRawInputProvider::ShellButtonListEntry ***)*v7 + 1) != v7 || v9[1] != v8 )
LABEL_6:
      __fastfail(3u);
    *v7 = (GameControllerRawInputProvider::ShellButtonListEntry *)v9;
    v9[1] = (GameControllerRawInputProvider::ShellButtonListEntry *)v7;
    if ( v8 == (GameControllerRawInputProvider::ShellButtonListEntry *)v7 )
      break;
    GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(v8, v6);
    --*((_QWORD *)this + 16);
  }
  v10 = (__int64 **)((char *)this + 88);
  while ( 1 )
  {
    v11 = *v10;
    v12 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
      goto LABEL_6;
    *v10 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v10;
    if ( v11 == (__int64 *)v10 )
      break;
    operator delete(v11);
    --*((_QWORD *)this + 13);
  }
  v13 = (char *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v13);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 8);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
}
