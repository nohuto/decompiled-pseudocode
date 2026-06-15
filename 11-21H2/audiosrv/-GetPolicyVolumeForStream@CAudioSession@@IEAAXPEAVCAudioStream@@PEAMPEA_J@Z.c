/*
 * XREFs of ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800D8494
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800D67A0 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800143F0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 */

void __fastcall CAudioSession::GetPolicyVolumeForStream(
        CAudioSession *this,
        struct CAudioStream *a2,
        float *a3,
        __int64 *a4)
{
  __int64 *v7; // rax

  *a3 = 1.0;
  *a4 = 0LL;
  v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)this,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  GetPolicyVolumeForAudioStream(
    (__int64)g_PolicyManager,
    (__int64 *)(((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL)),
    (unsigned int *)v7[1],
    a3,
    a4,
    0);
}
