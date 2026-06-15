/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18000ADE0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18000A990 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18006470C (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18000A328 (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18000B358 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18000B44C (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18000B4C8 (-_Change_array@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 size_of; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (_QWORD *)(v11 + 8 * v6);
  v13 = *a3;
  *a3 = 0LL;
  *v12 = v13;
  v14 = a1[1];
  v15 = (_QWORD *)v11;
  v16 = *a1;
  if ( a2 != v14 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      v16,
      a2,
      v11);
    v15 = v12 + 1;
    v14 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
    v16,
    v14,
    v15);
  std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Change_array(a1, v11, v8, v9, v11);
  return v12;
}
