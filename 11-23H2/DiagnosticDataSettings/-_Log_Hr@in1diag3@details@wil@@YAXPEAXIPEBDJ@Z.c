/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003748
 * Callers:
 *     TelGetNumericPolicy @ 0x180001A40 (TelGetNumericPolicy.c)
 *     TelGetStringPolicy @ 0x180001E60 (TelGetStringPolicy.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002A20 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180003CAC (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  wil::details *v4; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v4) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>(
    (int)this,
    (int)a2,
    (int)"onecore\\base\\telemetry\\permission\\lib\\telemetrypermission.cpp",
    0,
    0LL,
    retaddr,
    v4);
}
