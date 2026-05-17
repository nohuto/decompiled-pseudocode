/*
 * XREFs of LdrpLogRelativePathWithAlteredSearchError @ 0x18007E704
 * Callers:
 *     LdrpGetDllPath @ 0x180031CCC (LdrpGetDllPath.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1800DCC58 (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall LdrpLogRelativePathWithAlteredSearchError(__int64 a1)
{
  struct _PEB *v1; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  wchar_t *Buffer; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char v8[32]; // [rsp+30h] [rbp-58h] BYREF
  char v9[16]; // [rsp+50h] [rbp-38h] BYREF
  char v10[16]; // [rsp+60h] [rbp-28h] BYREF

  v1 = NtCurrentPeb();
  if ( v1 && (ProcessParameters = v1->ProcessParameters) != 0LL )
    Buffer = ProcessParameters->ImagePathName.Buffer;
  else
    Buffer = (wchar_t *)&unk_180135D3C;
  result = (unsigned int)_InterlockedCompareExchange(&CentennialIssueTracker_InitializedState, 1, 0);
  if ( !(_DWORD)result )
  {
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_18017E250);
    result = (unsigned int)_InterlockedExchange(&CentennialIssueTracker_InitializedState, 2);
  }
  if ( (unsigned int)dword_18017E250 > 5 && CentennialIssueTracker_InitializedState == 2 )
  {
    tlgCreate1Sz_wchar_t(v9, a1);
    tlgCreate1Sz_wchar_t(v10, Buffer);
    return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18017E250, byte_18014AD2E, v6, v7, 4, (__int64)v8);
  }
  return result;
}
