/*
 * XREFs of ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800A6658
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004DA68 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800A4C14 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$ReportFailure_Win32@$02@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1800A48A8 (--$ReportFailure_Win32@$02@details@wil@@YAJPEAXIPEBD110K@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32<3>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, (int)a4);
}
