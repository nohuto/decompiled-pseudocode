/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22___ @ 0x1800682EC
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800469F8 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22____::_2_::_Guard_type::__Guard_type @ 0x180068494 (_std--_Global_new_std--_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_System.c)
 */

char *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22___(
        _OWORD *a1)
{
  char *v2; // rax
  char *v3; // rdi
  __int128 v4; // xmm0
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0xC0uLL);
  v6 = 0LL;
  v3 = v2;
  *(_QWORD *)v2 = off_18016C668;
  *(_OWORD *)(v2 + 8) = *a1;
  *(_OWORD *)(v2 + 24) = a1[1];
  *(_OWORD *)(v2 + 40) = a1[2];
  *(_OWORD *)(v2 + 56) = a1[3];
  *(_OWORD *)(v2 + 72) = a1[4];
  *(_OWORD *)(v2 + 88) = a1[5];
  *(_OWORD *)(v2 + 104) = a1[6];
  v4 = a1[7];
  a1 += 8;
  *(_OWORD *)(v2 + 120) = v4;
  *(_OWORD *)(v2 + 136) = *a1;
  *(_OWORD *)(v2 + 152) = a1[1];
  *(_OWORD *)(v2 + 168) = a1[2];
  *((_QWORD *)v2 + 23) = *((_QWORD *)a1 + 6);
  std::_Global_new_std::_Func_impl_no_alloc__lambda_d964387455321ab6cd7bc18fda753d22__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_d964387455321ab6cd7bc18fda753d22____::_2_::_Guard_type::__Guard_type(&v6);
  return v3;
}
