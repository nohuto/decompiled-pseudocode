/*
 * XREFs of ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800B387C
 * Callers:
 *     ??_GGameControllerRawInputProvider@@UEAAPEAXI@Z @ 0x1800B39AC (--_GGameControllerRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002BBF0 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180034484 (-UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B3850 (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800B39FC (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 */

void __fastcall GameControllerRawInputProvider::~GameControllerRawInputProvider(GameControllerRawInputProvider *this)
{
  unsigned int v2; // edx
  GameControllerRawInputProvider::ShellButtonListEntry *v3; // rdi
  GameControllerRawInputProvider::ShellButtonListEntry *v4; // rcx
  __int64 v5; // rax
  char *v6; // rdi
  char *v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 40) = -1;
  *(_QWORD *)this = &GameControllerRawInputProvider::`vftable'{for `IRawInputProvider'};
  *(_QWORD *)((char *)this + 148) = 0LL;
  *((_QWORD *)this + 1) = &GameControllerRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 2) = &GameControllerRawInputProvider::`vftable'{for `IGameInputServerInputRouter'};
  *((_QWORD *)this + 3) = &GameControllerRawInputProvider::`vftable'{for `RefCountedObject'};
  GameControllerRawInputProvider::UpdateFocusPids(this);
  v9 = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v9, 4LL);
  GameControllerRawInputProvider::s_instance = 0LL;
  v3 = (GameControllerRawInputProvider *)((char *)this + 104);
  while ( 1 )
  {
    v4 = *(GameControllerRawInputProvider::ShellButtonListEntry **)v3;
    if ( *(GameControllerRawInputProvider::ShellButtonListEntry **)(*(_QWORD *)v3 + 8LL) != v3
      || (v5 = *(_QWORD *)v4, *(GameControllerRawInputProvider::ShellButtonListEntry **)(*(_QWORD *)v4 + 8LL) != v4) )
    {
LABEL_12:
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(v4, v2);
    --*((_QWORD *)this + 15);
  }
  v6 = (char *)this + 80;
  while ( 1 )
  {
    v7 = *(char **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_12;
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_12;
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == v6 )
      break;
    operator delete(v7);
    --*((_QWORD *)this + 12);
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 9);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 7);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 6);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
