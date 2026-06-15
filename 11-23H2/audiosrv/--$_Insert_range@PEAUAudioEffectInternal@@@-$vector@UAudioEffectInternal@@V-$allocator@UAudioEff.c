/*
 * XREFs of ??$_Insert_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@1Uforward_iterator_tag@1@@Z @ 0x1800EAAD4
 * Callers:
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800EBB88 (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x180073F40 (-_Xlength@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800D0C04 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBA_K_K@Z @ 0x1800EE514 (-_Calculate_growth@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 *     ?_Change_array@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXQEAUAudioEffectInternal@@_K1@Z @ 0x1800EE55C (-_Change_array@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEA.c)
 */

void *__fastcall std::vector<AudioEffectInternal>::_Insert_range<AudioEffectInternal *>(
        _QWORD *a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  size_t v7; // r12
  unsigned __int64 v8; // rdi
  _BYTE *v9; // r13
  char *v10; // r14
  __int64 v11; // rcx
  void *result; // rax
  char *v13; // r15
  unsigned __int64 v14; // rcx
  SIZE_T size_of; // rax
  char *v16; // rax
  char *v17; // rsi
  unsigned __int64 v18; // r13
  size_t v19; // r8
  const void *v20; // rdx
  char *v21; // rcx
  signed __int64 v22; // r13
  _BYTE *v23; // [rsp+20h] [rbp-58h]
  unsigned __int64 v24; // [rsp+28h] [rbp-50h]
  void *v25; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+88h] [rbp+10h]
  _QWORD *Size; // [rsp+98h] [rbp+20h]
  size_t Sizea; // [rsp+98h] [rbp+20h]

  v7 = a4 - (_QWORD)a3;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a4 - (__int64)a3) >> 3);
  Size = a1 + 1;
  v9 = (_BYTE *)*a1;
  v23 = (_BYTE *)*a1;
  v10 = (char *)a1[1];
  v11 = a1[2] - (_QWORD)v10;
  result = (void *)((unsigned __int64)((unsigned __int128)(v11 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63);
  if ( v8 )
  {
    if ( v8 <= v11 / 24 )
    {
      v22 = 8 * ((a4 - (__int64)a3) >> 3);
      if ( v8 >= 0xAAAAAAAAAAAAAAABuLL * ((v10 - a2) >> 3) )
      {
        memmove_0(&a2[v22], a2, v10 - a2);
        *Size = &a2[8 * ((v10 - a2) >> 3) + v22];
      }
      else
      {
        memmove_0(v10, &v10[-v22], v22);
        *Size = &v10[24 * (v22 / 24)];
        memmove_0(&a2[v22], a2, &v10[-v22] - a2);
      }
      return memmove_0(a2, a3, v7);
    }
    else
    {
      v13 = (char *)(v10 - v9);
      v14 = 0xAAAAAAAAAAAAAAABuLL * ((v10 - v9) >> 3);
      if ( v8 > 0xAAAAAAAAAAAAAAALL - v14 )
        std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Xlength();
      v24 = v14 + v8;
      v27 = std::vector<AudioEffectInternal>::_Calculate_growth(a1, v14 + v8);
      size_of = std::_Get_size_of_n<24>(v27);
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v17 = v16;
      v25 = v16;
      Sizea = a2 - v9;
      v18 = 0xAAAAAAAAAAAAAAABuLL * ((a2 - v9) >> 3);
      try
      {
        memmove_0(&v16[24 * v18], a3, v7);
        if ( v8 == 1 && a2 == v10 )
        {
          v19 = (size_t)v13;
          v20 = v23;
          v21 = v17;
        }
        else
        {
          memmove_0(v17, v23, Sizea);
          v21 = &v17[24 * v8 + 24 * v18];
          v19 = v10 - a2;
          v20 = a2;
        }
        memmove_0(v21, v20, v19);
        result = (void *)std::vector<AudioEffectInternal>::_Change_array(a1, v17, v24, v27);
      }
      catch ( ... )
      {
        std::_Deallocate<16,0>(v25, 24 * v27);
        throw;
      }
    }
  }
  return result;
}
