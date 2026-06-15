/*
 * XREFs of ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x140009898
 * Callers:
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x140008EC0 (-Resume@CAudioPump@@UEAAJXZ.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?CheckForPause@CAudioPump@@AEAAXXZ @ 0x1400388E2 (-CheckForPause@CAudioPump@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14006A85C (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 wil::details::in1diag3::Log_IfFailedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-38h]
  wil::details *v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = (unsigned int)a4;
  if ( (int)a4 < 0 )
  {
    LODWORD(v9) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<2>((int)this, (int)a2, a3, (int)a4, v8, retaddr, v9, a5, (__int64)&a6);
  }
  return v6;
}
