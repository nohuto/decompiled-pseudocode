/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800D5524
 * Callers:
 *     _lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator() @ 0x1800D649C (_lambda_6c82d168c37c23bf8bb15eab1fa87461_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800254C0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18003F3DC (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ?_Xlength@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@CAXXZ @ 0x180067440 (-_Xlength@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D5B8C (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??0?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z @ 0x1800D5F74 (--0-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800DB348 (-_Change_array@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  SIZE_T size_of; // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 *result; // rax
  char *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::function<void (bool)>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = (char *)v11;
  v13 = &v11[v6];
  try
  {
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
      v13,
      *a3);
    v20 = v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
        v16,
        a2,
        v12);
      v20 = v12;
      v15 = v13 + 1;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      v16,
      v14,
      v15);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Change_array(a1, v12, v8, v9, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v20, v13 + 1);
    std::_Deallocate<16,0>(v19, 8 * v9);
    throw;
  }
  return result;
}
