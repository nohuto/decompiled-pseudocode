/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180029EB0
 * Callers:
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180029D70 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180045BC4 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbp
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v6; // ebx
  PCWSTR StringRawBuffer; // rax
  int v8; // esi
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, char *); // [rsp+68h] [rbp+10h] BYREF

  v17 = 0;
  v18 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v17);
  if ( v2 < 0 )
  {
    v14 = 270LL;
    goto LABEL_14;
  }
  v3 = *((_QWORD *)this + 7);
  v4 = *(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v3 + 40LL);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v5)[2])(v5);
  }
  v6 = v17;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v8 = v4(v3, StringRawBuffer, v6, &v18);
  if ( v8 < 0 )
    goto LABEL_5;
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, char *)))(**((_QWORD **)this + 6) + 24LL))(
    *((_QWORD *)this + 6),
    v18);
  v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  v12 = **v18;
  v13 = *((_QWORD *)this + 8);
  if ( v13 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v2 = v12(v11, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, (char *)this + 64);
  if ( v2 < 0 )
  {
    v14 = 281LL;
    goto LABEL_14;
  }
  v2 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), char *))(*v18)[7])(
         v18,
         (char *)this + 8);
  if ( v2 < 0 )
  {
    v14 = 282LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v2,
      v15);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v18);
    return (unsigned int)v2;
  }
LABEL_5:
  v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  if ( v18 )
  {
    v18 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
  }
  return (unsigned int)v8;
}
