/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x180027C9C
 * Callers:
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180027BDC (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180027EEC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Initialize@TestCommandHost@@SAXXZ @ 0x18002814C (-Initialize@TestCommandHost@@SAXXZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x180034E8C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this, __int64 a2)
{
  int v3; // eax
  _QWORD *v4; // r15
  int v5; // eax
  const char *v6; // r9
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HLOCAL, char *); // rbx
  int v9; // eax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD); // rdi
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64 *); // rbx
  int v15; // eax
  int v16; // eax
  HKEY v17; // rcx
  DWORD TickCount; // eax
  int v20; // [rsp+20h] [rbp-20h]
  int v21; // [rsp+20h] [rbp-20h]
  HLOCAL hMem; // [rsp+30h] [rbp-10h] BYREF
  char v23; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+78h] [rbp+38h] BYREF

  hMem = 0LL;
  v23 = 0;
  v25 = 0LL;
  v3 = InputSecurityDescriptor::QueryDescriptor(&hMem, a2, c_wszMessagePortNames);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v3,
      v20);
  v4 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  v5 = CoreUICreate((char *)this + 48);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v5,
      v20);
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v6);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    v7 = *v4;
    v8 = *(__int64 (__fastcall **)(__int64, HLOCAL, char *))(*(_QWORD *)*v4 + 64LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
    v9 = v8(v7, hMem, (char *)this + 56);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x94,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v9,
        v20);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (char *)this + 64,
      *v4);
    v10 = *v4;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD))(*(_QWORD *)*v4 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (char *)this + 64,
      *((_QWORD *)this + 8));
    v21 = (_DWORD)this + 72;
    v12 = v11(v10, InputStateManager::OnDeviceCommandStatic, this, *((_QWORD *)this + 7));
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v12,
        v21);
    v13 = *v4;
    v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 24LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v25);
    v15 = v14(v13, &v25);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v15,
        v21);
    v16 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v25 + 40LL))(
            v25,
            L"System\\Input\\DeviceCommandEndpoint",
            *((_QWORD *)this + 9),
            1LL);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)(unsigned int)v16,
        v21);
    TestCommandHost::Initialize();
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 22);
  if ( RegistryWatcher::Create(
         v17,
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
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v25);
  if ( hMem )
  {
    if ( v23 )
      FreeTransientObjectSecurityDescriptor();
    else
      LocalFree(hMem);
  }
  return 0LL;
}
