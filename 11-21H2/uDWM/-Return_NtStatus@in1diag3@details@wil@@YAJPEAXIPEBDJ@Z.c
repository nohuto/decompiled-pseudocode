/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A2864
 * Callers:
 *     ??$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBH@Z@wistd@@KPEAPEAU?$wnf_subscription_state@H@01@@Z @ 0x1800543D4 (--$make_wnf_subscription_state@H@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A2020 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800A4038 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x1800A42BC (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x1800A0DDC (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_NtStatus<1>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr, v6);
}
