/*
 * XREFs of ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x180103E44
 * Callers:
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x180107720 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x180073F40 (-_Xlength@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800D0C04 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBA_K_K@Z @ 0x1800EE514 (-_Calculate_growth@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x1800EE55C (-_Change_array@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEA.c)
 */

char *__fastcall std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(
        const void **a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  SIZE_T size_of; // rax
  char *v11; // rax
  __int64 v12; // rbx
  char *v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<AudioEffectInternal>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<24>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v11;
  v19 = v11;
  try
  {
    v13 = &v11[24 * v6];
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_QWORD *)v13 + 2) = *(_QWORD *)(a3 + 16);
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 24;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<AudioEffectInternal>::_Change_array((__int64)a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, 24 * v9);
    throw;
  }
  return result;
}
