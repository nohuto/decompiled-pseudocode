/*
 * XREFs of ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x1800324B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800324D8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x180043904 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 *     ?RethrowCaughtException@wil@@YAXXZ @ 0x180044504 (-RethrowCaughtException@wil@@YAXXZ.c)
 */

void __fastcall __noreturn wil::details::FeatureFunctorHost::ExceptionThrown(
        struct DiagnosticsInfo **this,
        void *a2,
        __int64 a3,
        const struct DiagnosticsInfo *a4)
{
  wil *v4; // rcx
  wil::details::in1diag3 *v5; // rcx
  void *v6; // [rsp+20h] [rbp-8h]

  wil::details::ReportFeatureCaughtException(
    (wil::details *)(this + 1),
    (struct wil::ThreadErrorContext *)*((unsigned int *)this + 8),
    this[3],
    a4,
    v6);
  wil::RethrowCaughtException(v4);
  wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
}
