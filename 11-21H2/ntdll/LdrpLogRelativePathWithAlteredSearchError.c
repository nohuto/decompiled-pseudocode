/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x180084878
 * Callers:
 *     LdrpGetDllPath @ 0x18001DBFC (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1800DC738 (_tlgCreate1Sz_wchar_t.c)
 */

ULONG __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  const WCHAR *Buffer; // rbx
  ULONG result; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v9[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = &word_180132BF4;
  result = _InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_180174328);
    result = _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_180174328 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v9, a1);
    tlgCreate1Sz_wchar_t(v10, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_180174328,
             (unsigned __int8 *)dword_180141C25,
             v6,
             v7,
             4u,
             &v8);
  }
  return result;
}
