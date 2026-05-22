/*
 * XREFs of ?Initialize@EdgyConnection@@QEAAJXZ @ 0x1801A9740
 * Callers:
 *     ?Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z @ 0x1801A9F0C (-Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180014574 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080384 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyConnection::Initialize(EdgyConnection *this)
{
  wil::details **v2; // r14
  int v3; // eax
  unsigned __int64 v4; // r8
  wil::details *v5; // rsi
  __int64 (__fastcall *v6)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), EdgyConnection *, char *); // rdi
  unsigned __int64 v7; // r8
  int v8; // eax
  wil::details *v9; // rdi
  __int64 (__fastcall *v10)(wil::details *, char *); // rbx
  _QWORD *v11; // r15
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  const char *v16; // r9
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, const wchar_t *, _QWORD, char *); // rbx
  int v19; // eax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  const char *v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v2 = (wil::details **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  v3 = CoreUICreate(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x48,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v3,
      v25);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    *v2,
    v4);
  v5 = *v2;
  v6 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(void *, const void *, int), EdgyConnection *, char *))(*(_QWORD *)*v2 + 112LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    *((wil::details **)this + 4),
    v7);
  v8 = v6(v5, EdgyConnection::OnEdgyCompositionUpdateStatic, this, (char *)this + 40);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v8,
      v25);
  v9 = *v2;
  v10 = *(__int64 (__fastcall **)(wil::details *, char *))(*(_QWORD *)*v2 + 24LL);
  v11 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 3);
  v12 = v10(v9, (char *)this + 24);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v12,
      v25);
  v13 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(*(_QWORD *)*v11 + 40LL))(
          *v11,
          L"EdgyConfigurationEndpoint",
          *((_QWORD *)this + 5),
          0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v13,
      v25);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 6,
    *v2,
    v14);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      33LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v16);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v17 = *v11;
    v18 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)*v11 + 24LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 6,
      *((wil::details **)this + 6),
      v15);
    v19 = v18(v17, L"EdgyNotificationEndpoint", 0LL, (char *)this + 56);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x63,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v19,
        v25);
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( !BamoServerConnection )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      107LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      v21);
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 29) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 29) + 8LL);
  v23 = *((_QWORD *)this + 8);
  if ( v23 != v22 )
  {
    if ( v22 )
    {
      (**(void (__fastcall ***)(__int64))(v22 + 16))(v22 + 16);
      v23 = *((_QWORD *)this + 8);
    }
    v27 = v23;
    *((_QWORD *)this + 8) = v22;
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v27);
  }
  return 0LL;
}
