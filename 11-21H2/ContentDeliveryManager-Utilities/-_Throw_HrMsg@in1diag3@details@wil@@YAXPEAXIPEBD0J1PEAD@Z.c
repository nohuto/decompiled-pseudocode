/*
 * XREFs of ?_Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBD0J1PEAD@Z @ 0x180073AF0
 * Callers:
 *     ?Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180073070 (-Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18007B148 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18006CCD8 (--$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_HrMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        void *a5,
        unsigned __int64 a6,
        char *a7,
        char *a8)
{
  int v8; // [rsp+20h] [rbp-38h]

  wil::details::ReportFailure_HrMsg<0>((__int64)this, a2, a3, (__int64)a4, v8, (__int64)a4, (unsigned int)a5, a6, a7);
}
