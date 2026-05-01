/*
 * XREFs of ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180317A70
 * Callers:
 *     <none>
 * Callees:
 *     ?RethrowCaughtException@wil@@YAXXZ @ 0x1802D8FD4 (-RethrowCaughtException@wil@@YAXXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1802D9D88 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180319778 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 */

void __fastcall __noreturn wil::details::FeatureFunctorHost::ExceptionThrown(
        wil::details::FeatureFunctorHost *this,
        void *a2,
        __int64 a3,
        const struct DiagnosticsInfo *a4)
{
  wil *v4; // rcx
  wil::details::in1diag3 *v5; // rcx
  void *v6; // [rsp+20h] [rbp-8h]

  wil::details::ReportFeatureCaughtException(
    (wil::details::FeatureFunctorHost *)((char *)this + 8),
    (struct wil::ThreadErrorContext *)*((unsigned int *)this + 8),
    *((_QWORD *)this + 3),
    a4,
    v6);
  wil::RethrowCaughtException(v4);
  wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
}
