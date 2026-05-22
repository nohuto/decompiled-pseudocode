/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180045C94
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800459F0 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180117AE0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002A030 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 (__fastcall *)(MessageProxyReconnectAdapter *), MessageProxyReconnectAdapter *, char *); // rbx
  int v4; // eax
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-18h]
  const char *v8; // [rsp+30h] [rbp-8h]
  const char *v9; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x129,
    (int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (__int64)"Not expecting a valid proxy yet",
    v8);
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x12A,
    (int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 10) != 0LL,
    (__int64)"Not expecting an existing timer",
    v9);
  v2 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 10) = 0;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(MessageProxyReconnectAdapter *), MessageProxyReconnectAdapter *, char *))(*(_QWORD *)v2 + 144LL);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 10);
  v4 = v3(v2, MessageProxyReconnectAdapter::s_AttemptPullProxy, this, (char *)this + 80);
  if ( v4 < 0 )
  {
    v6 = 305LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v4,
      v7);
    return 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 80LL))(
         *((_QWORD *)this + 10),
         10000LL * *((unsigned int *)this + 24),
         10000LL * *((unsigned int *)this + 24));
  if ( v4 < 0 )
  {
    v6 = 310LL;
    goto LABEL_6;
  }
  return 0LL;
}
