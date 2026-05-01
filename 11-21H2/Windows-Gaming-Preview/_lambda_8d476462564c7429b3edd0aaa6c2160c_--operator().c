/*
 * XREFs of _lambda_8d476462564c7429b3edd0aaa6c2160c_::operator() @ 0x180041414
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows::Internal::CNoResult_::Run @ 0x180041D10 (Windows--Internal--COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows--Inte.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800010A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180018E84 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_8d476462564c7429b3edd0aaa6c2160c_::operator()(_QWORD *a1)
{
  __int64 v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 (__fastcall ***v3)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  GUID *v5; // rdx
  PCWSTR StringRawBuffer; // r8
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // esi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  HSTRING v12; // rdi
  PCWSTR v13; // rax
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-49h] BYREF
  UINT32 length; // [rsp+38h] [rbp-41h] BYREF
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  HSTRING v21; // [rsp+48h] [rbp-31h] BYREF
  UINT32 v22; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-21h]
  __int16 v24; // [rsp+60h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+68h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-9h] BYREF
  __int16 *v27; // [rsp+90h] [rbp+17h]
  int v28; // [rsp+98h] [rbp+1Fh]
  int v29; // [rsp+9Ch] [rbp+23h]
  PCWSTR v30; // [rsp+A0h] [rbp+27h]
  int v31; // [rsp+A8h] [rbp+2Fh]
  int v32; // [rsp+ACh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v1 = *a1;
  v2 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 64LL);
  EnterCriticalSection(v2);
  v25 = v2;
  v3 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v1 + 104);
  if ( v3 )
  {
    string = 0LL;
    v4 = SerializeRelatedProcessArray(v3, &string);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        75LL,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)(unsigned int)v4);
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    if ( (unsigned int)dword_180062000 > 5
      && (qword_180062010 & 0x800000000000LL) != 0
      && (qword_180062018 & 0x800000000000LL) == qword_180062018 )
    {
      v23 = StringRawBuffer;
      v24 = length;
      v27 = &v24;
      v28 = 2;
      v29 = 0;
      v30 = StringRawBuffer;
      v31 = 2 * (unsigned __int16)length;
      v32 = 0;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_180062000,
        (unsigned __int8 *)dword_18005929E,
        0LL,
        0LL,
        4u,
        &v26);
    }
    v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(v1 + 104);
    v18 = v7;
    if ( v7 )
    {
      ((__int64 (__fastcall **)(_QWORD, GUID *, PCWSTR))*v7)[1](v7, v5, StringRawBuffer);
      v7 = v18;
    }
    v23 = &v18;
    v8 = *(_QWORD *)(v1 + 112);
    v21 = 0LL;
    v9 = SerializeRelatedProcessArray(v7, &v21);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23F,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v9);
      WindowsDeleteString(v21);
      v11 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
      }
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v10);
      WindowsDeleteString(string);
      goto LABEL_22;
    }
    v12 = v21;
    v13 = WindowsGetStringRawBuffer(v21, &v22);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, PCWSTR, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, 5LL, v13, 2 * v22);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x247,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v14);
      WindowsDeleteString(v12);
      v15 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
      goto LABEL_17;
    }
    WindowsDeleteString(v12);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
    }
    WindowsDeleteString(string);
  }
  v10 = 0;
LABEL_22:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v10;
}
