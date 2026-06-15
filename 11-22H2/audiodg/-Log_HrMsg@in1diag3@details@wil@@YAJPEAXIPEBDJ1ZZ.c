/*
 * XREFs of ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14006D500
 * Callers:
 *     ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000A8CC (-SwapRTPointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14001FB5C (-NonRTGrabSafePointer@-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ.c)
 *     ??$ZeroStateDataIfSizeInconsistent@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAXPEAUWNF_AUDIO_ORIENTATION_STATE@@KK@Z @ 0x14002D4B4 (--$ZeroStateDataIfSizeInconsistent@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@YAXPEAUWNF_AUDIO_.c)
 *     ??$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAAXPEBUWNF_AUDIO_ORIENTATION_STATE@@K@Z @ 0x1400766B8 (--$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@-$wnf_subscription_state@UWNF_AUDIO_ORIENTATI.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14006A8AC (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-38h]
  wil::details *v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = (unsigned int)a4;
  LODWORD(v9) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<2>((int)this, (int)a2, a3, (__int64)a4, v8, retaddr, v9);
  return v6;
}
