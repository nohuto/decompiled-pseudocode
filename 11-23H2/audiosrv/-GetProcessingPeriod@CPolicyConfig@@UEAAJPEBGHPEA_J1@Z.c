/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180115FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x18000DCB0 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        __int64 *a4,
        __int64 *a5)
{
  int ProcessingPeriod; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  EffectPack *v11[2]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  ProcessingPeriod = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                       g_pEndpointCharacteristicsCache,
                       a2,
                       0LL,
                       0LL,
                       v11);
  v8 = ProcessingPeriod;
  if ( ProcessingPeriod < 0 )
  {
    v9 = 1225LL;
    goto LABEL_5;
  }
  ProcessingPeriod = EffectPack::GetProcessingPeriod((CEndpointCharacteristics **)v11[1], a3, a4, a5);
  v8 = ProcessingPeriod;
  if ( ProcessingPeriod < 0 )
  {
    v9 = 1227LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)ProcessingPeriod);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    goto LABEL_10;
  }
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  v8 = 0;
LABEL_10:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v11);
  return v8;
}
