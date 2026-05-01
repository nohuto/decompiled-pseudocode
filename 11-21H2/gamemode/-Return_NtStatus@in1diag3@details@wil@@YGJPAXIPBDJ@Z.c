/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YGJPAXIPBDJ@Z @ 0x10006276
 * Callers:
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YGJPAXPBGPA_N@Z @ 0x100066A6 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YGJPAXPBGPA_N@Z.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YGJPAXIPBD110J@Z @ 0x100065AD (--$ReportFailure_NtStatus@$00@details@wil@@YGJPAXIPBD110J@Z.c)
 */

int __stdcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4,
        int a5)
{
  int v6; // [esp-14h] [ebp-14h]
  int v7; // [esp-10h] [ebp-10h]
  int v8; // [esp-Ch] [ebp-Ch]
  void *retaddr; // [esp+4h] [ebp+4h]

  return wil::details::ReportFailure_NtStatus<1>(v6, v7, v8, retaddr, a2);
}
