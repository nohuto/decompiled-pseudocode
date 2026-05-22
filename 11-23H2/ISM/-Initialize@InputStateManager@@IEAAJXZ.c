/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x18004F568
 * Callers:
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x18003ABFC (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180035CD8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003965C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Initialize@TestCommandHost@@SAXXZ @ 0x180039AA8 (-Initialize@TestCommandHost@@SAXXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18003AD64 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004CC48 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this, __int64 a2)
{
  int Descriptor; // eax
  wil::details **v4; // r14
  int v5; // eax
  const char *v6; // r9
  wil::details *v7; // rdi
  __int64 (__fastcall *v8)(wil::details *, __int64, char *); // rbx
  int v9; // eax
  unsigned __int64 v10; // r8
  wil::details *v11; // rsi
  __int64 (__fastcall *v12)(wil::details *, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD); // rdi
  unsigned __int64 v13; // r8
  int v14; // eax
  wil::details *v15; // rdi
  __int64 (__fastcall *v16)(wil::details *, __int64 *); // rbx
  int v17; // eax
  int v18; // eax
  HKEY v19; // rcx
  DWORD TickCount; // eax
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  char v25; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v27; // [rsp+78h] [rbp+10h] BYREF

  v24 = 0LL;
  v25 = 0;
  v27 = 0LL;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v24, a2, (__int64)c_wszMessagePortNames);
  if ( Descriptor < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)Descriptor,
      v22);
  v4 = (wil::details **)((char *)this + 48);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  v5 = CoreUICreate((char *)this + 48);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v5,
      v22);
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v6);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    v7 = *v4;
    v8 = *(__int64 (__fastcall **)(wil::details *, __int64, char *))(*(_QWORD *)*v4 + 64LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
    v9 = v8(v7, v24, (char *)this + 56);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v9,
        v22);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 8,
      *v4,
      v10);
    v11 = *v4;
    v12 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD))(*(_QWORD *)*v4 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 8,
      *((wil::details **)this + 8),
      v13);
    v23 = (_DWORD)this + 72;
    v14 = v12(v11, InputStateManager::OnDeviceCommandStatic, this, *((_QWORD *)this + 7));
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v14,
        v23);
    v15 = *v4;
    v16 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)*v4 + 24LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v27);
    v17 = v16(v15, &v27);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v17,
        v23);
    v18 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v27 + 40LL))(
            v27,
            L"System\\Input\\DeviceCommandEndpoint",
            *((_QWORD *)this + 9),
            1LL);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v18,
        v23);
    TestCommandHost::Initialize();
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 22);
  if ( (int)RegistryWatcher::Create(
              v19,
              L"System\\Input",
              this,
              (void (*)(void *, HKEY))InputStateManager::OnInputRegistryKeyChangeStatic,
              (struct RegistryWatcher **)this + 22) < 0 )
  {
    *((_DWORD *)this + 46) = 6;
    *((_DWORD *)this + 47) = -1;
  }
  TickCount = GetTickCount();
  NtMITUpdateInputGlobals(TickCount, 0LL, 0LL, 0xFFFFFFFFLL, 0);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v27);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v24);
  return 0LL;
}
