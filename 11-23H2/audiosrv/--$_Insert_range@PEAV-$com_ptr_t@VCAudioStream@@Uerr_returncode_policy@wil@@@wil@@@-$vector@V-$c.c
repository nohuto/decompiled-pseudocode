/*
 * XREFs of ??$_Insert_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@1Uforward_iterator_tag@1@@Z @ 0x1800511C4
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18000A328 (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18000A364 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18000B358 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18000B804 (-_Change_array@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001C500 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x180073F40 (-_Xlength@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$_Move_backward_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x1800DE7C8 (--$_Move_backward_unchecked@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEA.c)
 *     ??$_Uninitialized_copy@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800DE838 (--$_Uninitialized_copy@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v8; // r14
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  SIZE_T size_of; // rax
  _QWORD *v14; // r15
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  _QWORD *v24; // [rsp+88h] [rbp+10h]
  _QWORD *v25; // [rsp+90h] [rbp+18h]
  __int64 *v26; // [rsp+98h] [rbp+20h]

  v8 = (a4 - a3) >> 3;
  v25 = a1 + 1;
  v9 = (__int64 *)*a1;
  v26 = (__int64 *)*a1;
  v10 = (__int64 *)a1[1];
  result = (__int64)(a1[2] - (_QWORD)v10) >> 3;
  if ( v8 )
  {
    if ( v8 <= result )
    {
      v18 = 8 * v8;
      v19 = &a2[v8];
      if ( v8 >= v10 - a2 )
      {
        *v25 = std::_Uninitialized_move<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                 a2,
                 v10,
                 v19);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(a2, v10);
      }
      else
      {
        v20 = &v10[v18 / 0xFFFFFFFFFFFFFFF8uLL];
        *v25 = std::_Uninitialized_move<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
                 &v10[v18 / 0xFFFFFFFFFFFFFFF8uLL],
                 v10,
                 v10);
        std::_Move_backward_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
          a2,
          v20,
          v10);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(a2, v19);
      }
      return std::_Uninitialized_copy<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
               a3,
               a4,
               a2);
    }
    else
    {
      v12 = v10 - v9;
      if ( v8 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Xlength(v12, a2, a1);
      v22 = v12 + v8;
      v21 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, v12 + v8);
      size_of = std::_Get_size_of_n<8>(v21);
      v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v15 = a2 - v9;
      v24 = &v14[v15 + v8];
      std::_Uninitialized_copy<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
        a3,
        a4,
        &v14[v15]);
      if ( v8 == 1 && a2 == v10 )
      {
        v16 = v14;
        v17 = v26;
      }
      else
      {
        std::_Uninitialized_move<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v26,
          a2,
          v14);
        v16 = v24;
        v17 = a2;
      }
      std::_Uninitialized_move<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
        v17,
        v10,
        v16);
      return std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Change_array(
               a1,
               (__int64)v14,
               v22,
               v21);
    }
  }
  return result;
}
