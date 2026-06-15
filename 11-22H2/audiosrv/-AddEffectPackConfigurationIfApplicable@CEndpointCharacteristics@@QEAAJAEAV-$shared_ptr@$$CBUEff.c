/*
 * XREFs of ?AddEffectPackConfigurationIfApplicable@CEndpointCharacteristics@@QEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014AD7C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9e3f88ecf53f091403cb1093f63a2b71__long_CEndpointCharacteristics___::_Do_call @ 0x18010E6D0 (std--_Func_impl_no_alloc__lambda_9e3f88ecf53f091403cb1093f63a2b71__long_CEndpointCh_ea_18010E6D0.c)
 *     std::_Func_impl_no_alloc__lambda_17fc2edd04bd18a27d70a0bd33a08af0__long_std::shared_ptr_EffectPackConfiguration_const___&_::_Do_call @ 0x180150D90 (std--_Func_impl_no_alloc__lambda_17fc2edd04bd18a27d70a0bd33a08af0__long_std--shared_ea_180150D90.c)
 * Callees:
 *     ?CreateInstanceFromConfiguration@EffectPack@@SAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@3@@Z @ 0x1800257F0 (-CreateInstanceFromConfiguration@EffectPack@@SAJAEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x1800424A8 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ?IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@PEA_N@Z @ 0x18014D72C (-IsEffectPackConfigurationApplicableToEndpoint@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@$.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall CEndpointCharacteristics::AddEffectPackConfigurationIfApplicable(__int64 a1, __int64 a2, _BYTE *a3)
{
  int IsEffectPackConfigurationApplicableToEndpoint; // eax
  unsigned int v7; // esi
  int InstanceFromConfiguration; // eax
  unsigned int v10; // esi
  struct _RTL_CRITICAL_SECTION *v11; // rsi
  _QWORD *v12; // rdx
  __int64 v13; // rax
  std::_Ref_count_base *v14; // rbx
  int v15; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v16[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int128 v19; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( a3 )
    *a3 = 0;
  LOBYTE(v15) = 0;
  IsEffectPackConfigurationApplicableToEndpoint = CEndpointCharacteristics::IsEffectPackConfigurationApplicableToEndpoint(
                                                    a1,
                                                    a2,
                                                    &v15);
  v7 = IsEffectPackConfigurationApplicableToEndpoint;
  if ( IsEffectPackConfigurationApplicableToEndpoint >= 0 )
  {
    if ( (_BYTE)v15 )
    {
      *(_OWORD *)v16 = 0LL;
      InstanceFromConfiguration = EffectPack::CreateInstanceFromConfiguration(a2, a1, *(_QWORD *)(a1 + 8288), v16);
      v10 = InstanceFromConfiguration;
      if ( InstanceFromConfiguration >= 0 )
      {
        v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 288);
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
        v17 = a1 + 288;
        v12 = *(_QWORD **)(a1 + 328);
        if ( v12 == *(_QWORD **)(a1 + 336) )
        {
LABEL_17:
          std::vector<std::shared_ptr<EffectPack>>::emplace_back<std::shared_ptr<EffectPack> &>(a1 + 328, v16);
          v14 = v16[1];
        }
        else
        {
          v18 = *(_OWORD *)*((_QWORD *)v16[0] + 159);
          while ( 1 )
          {
            v19 = *(_OWORD *)*(_QWORD *)(*v12 + 1272LL);
            v13 = v19 - v18;
            if ( (_QWORD)v19 == (_QWORD)v18 )
              v13 = *((_QWORD *)&v19 + 1) - *((_QWORD *)&v18 + 1);
            if ( !v13 )
              break;
            v12 += 2;
            if ( v12 == *(_QWORD **)(a1 + 336) )
              goto LABEL_17;
          }
          *v12 = v16[0];
          v14 = (std::_Ref_count_base *)v12[1];
          v12[1] = v16[1];
        }
        if ( a3 )
          *a3 = 1;
        if ( v11 )
          LeaveCriticalSection(v11);
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x526,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)InstanceFromConfiguration);
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
        return v10;
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51C,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)IsEffectPackConfigurationApplicableToEndpoint);
    return v7;
  }
}
