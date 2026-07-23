/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x18007ED74
 * Callers:
 *     LdrpGetDllPath @ 0x180031B6C (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007FC8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1800DC608 (_tlgCreate1Sz_wchar_t.c)
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
    Buffer = &word_180137D3C;
  result = _InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_180181328);
    result = _InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_180181328 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v9, a1);
    tlgCreate1Sz_wchar_t(v10, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer(
             (__int64)&dword_180181328,
             (unsigned __int8 *)dword_18014E12E,
             v6,
             v7,
             4u,
             &v8);
  }
  return result;
}
