/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800DBDF0
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A2D90 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180030310 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x180031B90 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     ZwRaiseException @ 0x1800A1C20 (ZwRaiseException.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D6B0 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpLogFatalUserCallbackException(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v6; // eax
  __int64 (__fastcall *v7)(_QWORD *); // rbx
  __int64 result; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v11; // ecx
  wchar_t *Buffer; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 ProcessInformation; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+54h] [rbp-ACh]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  __int16 *v23; // [rsp+F0h] [rbp-10h] BYREF
  int v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+FCh] [rbp-4h]
  wchar_t *v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+108h] [rbp+8h]
  int v28; // [rsp+10Ch] [rbp+Ch]

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  v17[0] = a1;
  v17[1] = a2;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v6 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v7 = (__int64 (__fastcall *)(_QWORD *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v7 )
    result = v7(v17);
  else
    result = RtlUnhandledExceptionFilter2(v17, &unk_180136DCA);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&ProcessInformation) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v25 = 0;
      v15 = Length >> 1;
      v23 = &v15;
      v24 = 2;
      v11 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v28 = 0;
      v27 = v11;
      v26 = Buffer;
      EtwEventWrite(ProcessInformation, (int)&FatalUserCallbackException, 2, (__int64)&v23);
      EtwNotificationUnregister(ProcessInformation, 0LL);
    }
    v13 = *(_QWORD *)(a2 + 248);
    v22 = 0;
    v21 = v13;
    LODWORD(v13) = *(_DWORD *)(a1 + 4) | 1;
    v18 = -1073740771;
    v19 = v13;
    v20 = a1;
    v14 = ZwRaiseException();
    RtlRaiseStatus(v14);
  }
  return result;
}
