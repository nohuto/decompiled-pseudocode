/*
 * XREFs of ?HasThirdPartySystemEffects@CPolicyConfig@@UEAAHPEBG@Z @ 0x1801162D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::HasThirdPartySystemEffects(CPolicyConfig *this, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v5; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v2 = 0;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                          + 40LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v4) < 0 )
  {
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v4);
    return 0LL;
  }
  else
  {
    LOBYTE(v2) = (__int64)(*(_QWORD *)(v4 + 336) - *(_QWORD *)(v4 + 328)) >> 4 != 0;
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v4);
    return v2;
  }
}
