/*
 * XREFs of ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x180033A3C
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180031820 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180033A70 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
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
