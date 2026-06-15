/*
 * XREFs of ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800DF350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800137C0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800E09C8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::CompleteConstruction(CPerEndpointVolumeAudioSession *this)
{
  const unsigned __int16 *Buffer; // rax
  int MixFormat; // ebx
  struct _GUID v5; // [rsp+30h] [rbp-38h] BYREF
  EffectPack *v6[2]; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v7; // [rsp+50h] [rbp-18h]
  LPVOID pv; // [rsp+70h] [rbp+8h] BYREF

  pv = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
  }
  *(_OWORD *)v6 = 0LL;
  v7 = 0LL;
  Buffer = CAudioEndpointId::GetBuffer((CPerEndpointVolumeAudioSession *)((char *)this + 584));
  MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                g_pEndpointCharacteristicsCache,
                Buffer,
                0LL,
                0LL,
                v6);
  if ( MixFormat < 0
    || (v5 = GUID_00000000_0000_0000_0000_000000000000,
        MixFormat = EffectPack::GetMixFormat(v6[1], eHostProcessConnector, &v5, (struct tWAVEFORMATEX **)&pv),
        MixFormat < 0)
    || (MixFormat = CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL), MixFormat < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::CompleteConstruction", 1723, MixFormat);
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v6);
  CoTaskMemFree(pv);
  return (unsigned int)MixFormat;
}
