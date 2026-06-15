/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800399D0
 * Callers:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180039710 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005888C (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x180119A18 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?SerializeEventHeaderFromEndpointMap@CPlaybackNotifier@@AEAAXPEADK@Z @ 0x180039A84 (-SerializeEventHeaderFromEndpointMap@CPlaybackNotifier@@AEAAXPEADK@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  unsigned int v2; // r8d
  int v3; // ebx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp-1058h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-1050h] BYREF
  int *v9; // [rsp+58h] [rbp-1030h]
  int v10; // [rsp+60h] [rbp-1028h]
  int v11; // [rsp+64h] [rbp-1024h]
  char v12[4096]; // [rsp+70h] [rbp-1018h] BYREF

  memset_0(v12, 0, sizeof(v12));
  CPlaybackNotifier::SerializeEventHeaderFromEndpointMap(this, v12, v2);
  v3 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, v12, 4096LL, 0LL);
  v5 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   v4,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u )
  {
    if ( tlgKeywordOn((__int64)v5, 64LL) )
    {
      v11 = 0;
      v9 = &v7;
      v7 = v3;
      v10 = 4;
      tlgWriteTransfer_EtwEventWriteTransfer(v6, byte_180193C7E, 0LL, 0LL, 3, (__int64)v8);
    }
  }
}
