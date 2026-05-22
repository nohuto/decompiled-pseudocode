/*
 * XREFs of ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180029D70
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180029EB0 (-CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002A030 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180097878 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180117A14 (-FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180117D0C (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::s_AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  unsigned int RemoteProxy; // eax
  unsigned int v3; // edi
  unsigned int v4; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  const char *StringRawBuffer; // rax
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]
  const char *v13; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( this )
  {
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0xBA,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)0x8000FFFFLL,
      *((_QWORD *)this + 8) != 0LL,
      (bool)"Not expecting to pull a proxy when we have one",
      v13);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    ++*((_DWORD *)this + 10);
    RemoteProxy = MessageProxyReconnectAdapter::CreateRemoteProxy(this);
    v3 = RemoteProxy;
    if ( RemoteProxy )
    {
      if ( ((RemoteProxy + 2018375675) & 0xFFFFFFFB) != 0 )
      {
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0xF1,
          (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
          (const char *)RemoteProxy,
          v11);
      }
      else
      {
        v4 = *((_DWORD *)this + 25);
        if ( *((_DWORD *)this + 10) >= v4 && v4 )
        {
          MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
          if ( *((_BYTE *)this + 104) )
          {
            StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
            wil::details::in1diag3::FailFast_IfFailedMsg(
              retaddr,
              (void *)0xE7,
              (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
              (const char *)v3,
              (int)"Proxy connection failed: %ls",
              StringRawBuffer);
          }
          else if ( (v3 & 0x80000000) != 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xEB,
              (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
              (const char *)v3,
              v11);
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xB0,
              (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
              (const char *)v3,
              v12);
            return 0LL;
          }
        }
      }
    }
    else
    {
      v6 = *((_QWORD *)this + 10);
      if ( v6 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x146,
            (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
            (const char *)(unsigned int)v7,
            v11);
        v8 = *((_QWORD *)this + 10);
        if ( v8 )
        {
          *((_QWORD *)this + 10) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAF,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x80070057LL,
    v10);
  return 2147942487LL;
}
