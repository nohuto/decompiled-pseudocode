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

LONG __fastcall LdrpLogFatalUserCallbackException(_EXCEPTION_RECORD *a1, struct _CONTEXT *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  int v6; // eax
  __int64 (__fastcall *v7)(_EXCEPTION_POINTERS *); // rbx
  LONG result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v11; // ecx
  wchar_t *Buffer; // rax
  void *Rip; // rax
  NTSTATUS v14; // eax
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  ULONGLONG ProcessInformation; // [rsp+38h] [rbp-C8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t *v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+10Ch] [rbp+Ch]

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = a2;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v6 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v7 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v7 )
    result = v7(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&Flags);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &ProcessInformation) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      UserData.Reserved = 0;
      v15 = Length >> 1;
      UserData.Ptr = (unsigned __int64)&v15;
      UserData.Size = 2;
      v11 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v22 = 0;
      v21 = v11;
      v20 = Buffer;
      EtwEventWrite(ProcessInformation, &FatalUserCallbackException, 2u, &UserData);
      EtwNotificationUnregister(ProcessInformation, 0LL);
    }
    Rip = (void *)a2->Rip;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionAddress = Rip;
    LODWORD(Rip) = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = (unsigned int)Rip;
    ExceptionRecord.ExceptionRecord = a1;
    v14 = ZwRaiseException(&ExceptionRecord, a2, 0);
    RtlRaiseStatus(v14);
  }
  return result;
}
