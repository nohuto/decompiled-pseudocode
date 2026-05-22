/*
 * XREFs of ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x18003FD40
 * Callers:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180036F94 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnKeyChange@RegistryWatcher@@AEAAJXZ @ 0x180041238 (-OnKeyChange@RegistryWatcher@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A7C6C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___ @ 0x180123EEC (wil--details--lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___--_lambda_call__lambda_8462.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Initialize(HKEY *this, HKEY a2, const unsigned __int16 *a3)
{
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned int LastError; // ebx
  LSTATUS v8; // eax
  HKEY EventW; // rax
  const char *v10; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  RegistryWatcher *v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v14 = (RegistryWatcher *)this;
  v15 = 1;
  v5 = this + 2;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  v6 = CoreUICreate(v5);
  LastError = v6;
  if ( v6 < 0 )
  {
    v12 = 65LL;
LABEL_14:
    v13 = (unsigned int)v6;
    goto LABEL_15;
  }
  v8 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, a3, 0, 0x20019u, this + 3);
  LastError = v8;
  if ( v8 > 0 )
    LastError = (unsigned __int16)v8 | 0x80070000;
  if ( (LastError & 0x80000000) != 0 )
  {
    v13 = LastError;
    v12 = 73LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)v13);
    goto LABEL_16;
  }
  EventW = (HKEY)CreateEventW(0LL, 0, 0, 0LL);
  this[4] = EventW;
  if ( EventW )
  {
    v6 = RegistryWatcher::OnKeyChange((RegistryWatcher *)this);
    LastError = v6;
    if ( v6 < 0 )
    {
      v12 = 77LL;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, HKEY, int (*)(void *, unsigned int, void *), HKEY *))(*(_QWORD *)*v5
                                                                                                  + 272LL))(
             *v5,
             this[4],
             RegistryWatcher::OnChangeCallbackStatic,
             this);
      LastError = v6;
      if ( v6 >= 0 )
        return 0LL;
      v12 = 82LL;
    }
    goto LABEL_14;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x4C,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
                v10);
LABEL_16:
  wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___(&v14);
  return LastError;
}
