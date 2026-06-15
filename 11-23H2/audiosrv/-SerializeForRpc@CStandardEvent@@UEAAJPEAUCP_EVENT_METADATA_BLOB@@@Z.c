/*
 * XREFs of ?SerializeForRpc@CStandardEvent@@UEAAJPEAUCP_EVENT_METADATA_BLOB@@@Z @ 0x18011F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CD4A0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStandardEvent::SerializeForRpc(CStandardEvent *this, struct CP_EVENT_METADATA_BLOB *a2)
{
  HANDLE CurrentProcess; // rax
  void *v5; // rbx
  void *v6; // rdi
  HANDLE v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcess = GetCurrentProcess();
  v5 = (void *)*((_QWORD *)this + 2);
  v6 = CurrentProcess;
  v7 = GetCurrentProcess();
  if ( !DuplicateHandle(v7, v5, v6, &TargetHandle, 0, 0, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x21,
             (unsigned int)"avcore\\audiocore\\engine\\core\\CrossProcessEngineObjects\\CPStandardEvent.h",
             v8);
  *((_QWORD *)a2 + 1) = TargetHandle;
  result = 0LL;
  *(_DWORD *)a2 = 1;
  return result;
}
