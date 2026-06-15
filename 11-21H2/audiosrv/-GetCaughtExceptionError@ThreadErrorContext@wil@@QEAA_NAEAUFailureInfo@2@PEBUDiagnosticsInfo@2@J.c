/*
 * XREFs of ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x1800C3AB0
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800C4F88 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 * Callees:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800C3AE4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 */

bool __fastcall wil::ThreadErrorContext::GetCaughtExceptionError(
        wil::ThreadErrorContext *this,
        struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  return *(_QWORD *)this
      && wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
           *(wil::details_abi::ThreadLocalData **)this,
           a2,
           *((_DWORD *)this + 2),
           a3,
           v4,
           retaddr);
}
