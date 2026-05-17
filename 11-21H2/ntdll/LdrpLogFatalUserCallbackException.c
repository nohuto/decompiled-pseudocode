/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800DB8D0
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A7F50 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     ZwRaiseException @ 0x1800A6E40 (ZwRaiseException.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D530 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpLogFatalUserCallbackException(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD *); // rbx
  __int64 result; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v13; // ecx
  wchar_t *Buffer; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 ProcessInformation; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+50h] [rbp-B0h]
  int v23; // [rsp+54h] [rbp-ACh]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+68h] [rbp-98h]
  __int16 *v27; // [rsp+F0h] [rbp-10h] BYREF
  int v28; // [rsp+F8h] [rbp-8h]
  int v29; // [rsp+FCh] [rbp-4h]
  wchar_t *v30; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+10Ch] [rbp+Ch]

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  v21[0] = a1;
  v21[1] = a2;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v6 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v6 < 0 )
      RtlRaiseStatus(v6, v7, v8);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v9 = (__int64 (__fastcall *)(_QWORD *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v9 )
    result = v9(v21);
  else
    result = RtlUnhandledExceptionFilter2(v21, &unk_180130AA2);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&ProcessInformation) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v29 = 0;
      v19 = Length >> 1;
      v27 = &v19;
      v28 = 2;
      v13 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v32 = 0;
      v31 = v13;
      v30 = Buffer;
      EtwEventWrite(ProcessInformation, (int)&FatalUserCallbackException, 2, (__int64)&v27);
      EtwNotificationUnregister(ProcessInformation, 0LL);
    }
    v15 = *(_QWORD *)(a2 + 248);
    v26 = 0;
    v25 = v15;
    LODWORD(v15) = *(_DWORD *)(a1 + 4) | 1;
    v22 = -1073740771;
    v23 = v15;
    v24 = a1;
    v16 = ZwRaiseException();
    RtlRaiseStatus(v16, v17, v18);
  }
  return result;
}
