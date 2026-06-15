/*
 * XREFs of ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x180115A24
 * Callers:
 *     s_epmGetCurrentEffectPackDescriptorForEndpoint @ 0x180118F60 (s_epmGetCurrentEffectPackDescriptorForEndpoint.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180025520 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     memcpy_0 @ 0x18006A809 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV?$shared_ptr@VEffectPack@@@std@@XZ @ 0x18014C44C (-GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV-$shared_ptr@VEffectPack@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetCurrentEffectPackDescriptorForEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor *a3)
{
  unsigned int v4; // ebx
  _QWORD *CurrentEffectPack; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]
  CEndpointCharacteristics *v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v9) >= 0 )
  {
    if ( CEndpointCharacteristics::AreEnhancementsEnabled(v9) )
    {
      CurrentEffectPack = (_QWORD *)CEndpointCharacteristics::GetCurrentEffectPack(v9);
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v7, CurrentEffectPack);
      memcpy_0(a3, *(const void **)(v7 + 1272), 0x520uLL);
      if ( v8 )
        std::_Ref_count_base::_Decref(v8);
    }
    else
    {
      memset_0(a3, 0, 0x520uLL);
    }
  }
  else
  {
    v4 = -2147024809;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
  return v4;
}
