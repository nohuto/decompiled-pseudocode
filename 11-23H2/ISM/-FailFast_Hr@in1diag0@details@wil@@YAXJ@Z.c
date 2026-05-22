/*
 * XREFs of ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x180119E30
 * Callers:
 *     ??1AlpcSectionListEntry@AlpcPort@@UEAA@XZ @ 0x18011883C (--1AlpcSectionListEntry@AlpcPort@@UEAA@XZ.c)
 *     ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1801195E0 (-CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z.c)
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x180119C60 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180090EA0 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag0::FailFast_Hr(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)this;
  wil::details::ReportFailure_Hr<3>(0LL, 0LL, 0LL, a4, v4, retaddr, v5);
}
