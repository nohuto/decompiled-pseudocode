/*
 * XREFs of ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800DA780
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall InputProcess::StopProcess(
        InputProcess *this,
        struct BamoInputProcessPrincipal *a2,
        struct BamoInputProcessStub *a3)
{
  __int64 v3; // rcx
  HANDLE CurrentProcess; // rax
  const char *v5; // r9
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)this,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200LL) == *(_QWORD *)(v3 + 24) )
  {
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_180231A8A, 0LL, 0LL, 2u, &v7);
  }
  CurrentProcess = GetCurrentProcess();
  if ( !TerminateProcess(CurrentProcess, 0) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x33,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocess\\lib\\inputprocess.cpp",
      v5);
  return 0LL;
}
