/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180027FC0
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180027EEC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x1800280EC (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007DEDC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Initialize(RegistryWatcher *this, HKEY a2, const unsigned __int16 *a3)
{
  char v5; // si
  _QWORD *v6; // r14
  int v7; // eax
  unsigned int LastError; // ebx
  LSTATUS v9; // eax
  HANDLE EventW; // rax
  const char *v11; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  HKEY v15; // rcx
  void *v16; // rcx
  int phkResult; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 1;
  v6 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  v7 = CoreUICreate(v6);
  LastError = v7;
  if ( v7 < 0 )
  {
    v13 = 65LL;
LABEL_16:
    v14 = (unsigned int)v7;
    goto LABEL_17;
  }
  v9 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, (PHKEY)this + 3);
  LastError = v9;
  if ( v9 > 0 )
    LastError = (unsigned __int16)v9 | 0x80070000;
  if ( (LastError & 0x80000000) == 0 )
  {
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 4) = EventW;
    if ( !EventW )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x4C,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                    v11);
      goto LABEL_9;
    }
    v7 = RegistryWatcher::OnKeyChange(this);
    LastError = v7;
    if ( v7 < 0 )
    {
      v13 = 77LL;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int (*)(void *, unsigned int, void *), RegistryWatcher *))(*(_QWORD *)*v6 + 272LL))(
             *v6,
             *((_QWORD *)this + 4),
             RegistryWatcher::OnChangeCallbackStatic,
             this);
      LastError = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        LastError = 0;
        goto LABEL_9;
      }
      v13 = 82LL;
    }
    goto LABEL_16;
  }
  v14 = LastError;
  v13 = 73LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
    (const char *)v14,
    phkResult);
LABEL_9:
  if ( v5 )
  {
    v15 = (HKEY)*((_QWORD *)this + 3);
    if ( v15 )
    {
      RegCloseKey(v15);
      *((_QWORD *)this + 3) = 0LL;
    }
    v16 = (void *)*((_QWORD *)this + 4);
    if ( v16 )
    {
      CloseHandle(v16);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  return LastError;
}
