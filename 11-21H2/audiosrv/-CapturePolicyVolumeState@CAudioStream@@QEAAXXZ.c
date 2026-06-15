/*
 * XREFs of ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x1800E3D9C
 * Callers:
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800EDF70 (-CaptureState@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800143F0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

void __fastcall CAudioStream::CapturePolicyVolumeState(CAudioStream *this)
{
  __int64 *v2; // rax
  float v3; // [rsp+40h] [rbp+8h] BYREF

  v2 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  GetPolicyVolumeForAudioStream(
    (__int64)g_PolicyManager,
    (__int64 *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
    (unsigned int *)v2[1],
    &v3,
    0LL,
    2);
}
