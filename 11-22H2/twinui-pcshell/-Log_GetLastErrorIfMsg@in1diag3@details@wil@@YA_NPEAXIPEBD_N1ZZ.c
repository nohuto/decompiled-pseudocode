/*
 * XREFs of ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18040230C
 * Callers:
 *     ?StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x1804087C0 (-StopWorkerWindowMessageThread@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x1803F47E0 (--$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char wil::details::in1diag3::Log_GetLastErrorIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  char v6; // bl
  int v8; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (char)a4;
  if ( (_BYTE)a4 )
    wil::details::ReportFailure_GetLastErrorMsg<2>(this, a2, a3, a4, v8, retaddr, a5, (char *)&a6);
  return v6;
}
