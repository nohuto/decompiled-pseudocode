/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1800A7F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A4110 (ZwCallbackReturn.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB8D0 (LdrpLogFatalUserCallbackException.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  int ExceptionCode; // [rsp+30h] [rbp-8h]
  int v9; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      ExceptionCode = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &KiUserCallbackDispatcherContinue,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
      RtlRaiseStatus(ExceptionCode, v4, v5);
    }
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      v9 = ZwCallbackReturn();
      RtlRaiseStatus(v9, v6, v7);
    }
    return 1LL;
  }
  else
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
