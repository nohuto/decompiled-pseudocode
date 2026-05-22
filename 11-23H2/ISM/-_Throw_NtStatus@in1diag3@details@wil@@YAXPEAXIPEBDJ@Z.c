/*
 * XREFs of ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013F828
 * Callers:
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x18013F5EC (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ??0PenInterface@@QEAA@PEAX0@Z @ 0x1801A670C (--0PenInterface@@QEAA@PEAX0@Z.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18013F4D0 (--$ReportFailure_NtStatus@$0A@@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_NtStatus<0>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr, (unsigned int)a4);
}
