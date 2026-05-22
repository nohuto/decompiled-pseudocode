/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18003187C
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180031560 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180031750 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // r14
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v7; // ebx
  PCWSTR StringRawBuffer; // rax
  int v9; // r14d
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, char *); // [rsp+68h] [rbp+38h] BYREF

  v18 = 0;
  v19 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v18);
  v3 = v2;
  if ( v2 < 0 )
  {
    v15 = 270LL;
  }
  else
  {
    v4 = *((_QWORD *)this + 7);
    v5 = *(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v4 + 40LL);
    v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
    if ( v19 )
    {
      v19 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v6)[2])(v6);
    }
    v7 = v18;
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
    v9 = v5(v4, StringRawBuffer, v7, &v19);
    if ( v9 < 0 )
      goto LABEL_5;
    (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, char *)))(**((_QWORD **)this + 6) + 24LL))(
      *((_QWORD *)this + 6),
      v19);
    v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
    v13 = **v19;
    v14 = *((_QWORD *)this + 8);
    if ( v14 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v2 = v13(v12, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, (char *)this + 64);
    v3 = v2;
    if ( v2 < 0 )
    {
      v15 = 281LL;
    }
    else
    {
      v2 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *), char *))(*v19)[7])(
             v19,
             (char *)this + 8);
      v3 = v2;
      if ( v2 >= 0 )
      {
LABEL_5:
        v3 = v9;
        goto LABEL_6;
      }
      v15 = 282LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"mincore\\textinput\\dev\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)(unsigned int)v2,
    v16);
LABEL_6:
  v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v10)[2])(v10);
  }
  return v3;
}
