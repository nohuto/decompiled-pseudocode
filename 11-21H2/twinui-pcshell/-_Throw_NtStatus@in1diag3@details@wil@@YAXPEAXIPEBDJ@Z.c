/*
 * XREFs of ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18044C430
 * Callers:
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800E57D0 (CapabilityHelper--CreateSecurityAttributesForUWPCapability.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x180449B60 (--$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_NtStatus<0>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr, (unsigned int)a4);
}
