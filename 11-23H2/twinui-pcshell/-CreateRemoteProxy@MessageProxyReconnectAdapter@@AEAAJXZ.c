/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1807379F8
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18073789C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rdi
  unsigned int v7; // ebx
  PCWSTR StringRawBuffer; // rax
  int v9; // r14d
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v11)(_QWORD, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, char *); // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v14);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = *((_QWORD *)this + 7);
    v6 = *(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v5 + 40LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    v7 = v14;
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
    v9 = v6(v5, StringRawBuffer, v7, &v15);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, char *)))(**((_QWORD **)this + 6) + 24LL))(
        *((_QWORD *)this + 6),
        v15);
      v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
      v11 = **v15;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 8);
      v2 = v11(v10, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, (char *)this + 64);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 281LL;
        goto LABEL_8;
      }
      v2 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), unsigned __int64))(*v15)[7])(
             v15,
             ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 282LL;
        goto LABEL_8;
      }
    }
    v3 = v9;
    goto LABEL_10;
  }
  v4 = 270LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v3;
}
