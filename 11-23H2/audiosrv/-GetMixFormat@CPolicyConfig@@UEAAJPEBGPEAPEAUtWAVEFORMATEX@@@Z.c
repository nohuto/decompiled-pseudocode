/*
 * XREFs of ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180115F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetMixFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct tWAVEFORMATEX **a3)
{
  int MixFormat; // ebx
  struct _GUID v6; // [rsp+30h] [rbp-38h] BYREF
  EffectPack *v7[2]; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+50h] [rbp-18h]

  *(_OWORD *)v7 = 0LL;
  v8 = 0LL;
  MixFormat = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
                g_pEndpointCharacteristicsCache,
                a2,
                0LL,
                0LL,
                v7);
  if ( MixFormat >= 0 )
  {
    v6 = GUID_00000000_0000_0000_0000_000000000000;
    MixFormat = EffectPack::GetMixFormat(v7[1], eHostProcessConnector, &v6, a3);
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v7);
  return (unsigned int)MixFormat;
}
