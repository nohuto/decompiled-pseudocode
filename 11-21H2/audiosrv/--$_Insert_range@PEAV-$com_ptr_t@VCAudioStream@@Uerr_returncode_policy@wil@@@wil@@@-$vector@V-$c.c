/*
 * XREFs of ??$_Insert_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@1Uforward_iterator_tag@1@@Z @ 0x1800D5648
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800254C0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBA_K_K@Z @ 0x18003F3DC (-_Calculate_growth@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$all.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?_Xlength@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@CAXXZ @ 0x180067440 (-_Xlength@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 *     ??$_Move_backward_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x1800D5A24 (--$_Move_backward_unchecked@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEA.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D5B8C (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??0?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z @ 0x1800D5F74 (--0-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAudioStream@@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800DB348 (-_Change_array@-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 *v6; // rdi
  unsigned __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 *v10; // r14
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  SIZE_T size_of; // rax
  char *v14; // r12
  __int64 v15; // rax
  __int64 *v16; // r13
  _QWORD *v17; // r12
  __int64 *v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // r12
  __int64 *v22; // rbx
  __int64 *v23; // rcx
  unsigned __int64 v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+20h] [rbp-58h]
  char *v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+30h] [rbp-48h]
  __int64 *v29; // [rsp+88h] [rbp+10h]
  __int64 v30; // [rsp+90h] [rbp+18h]
  __int64 *v31; // [rsp+90h] [rbp+18h]
  __int64 *v32; // [rsp+98h] [rbp+20h]

  v6 = a2;
  v8 = a4 - a3;
  v9 = *a1;
  v32 = *a1;
  v10 = a1[1];
  result = a1[2] - v10;
  if ( v8 )
  {
    if ( v8 <= result )
    {
      v20 = 8 * v8;
      v21 = &a2[v8];
      if ( v8 >= v10 - a2 )
      {
        a1[1] = (__int64 *)std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
                             a2,
                             v10,
                             v21);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v6, v10);
        while ( 1 )
        {
          v23 = v6;
          if ( a3 == a4 )
            break;
          wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
            v6++,
            *a3++);
        }
      }
      else
      {
        v22 = &v10[v20 / 0xFFFFFFFFFFFFFFF8uLL];
        a1[1] = (__int64 *)std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
                             &v10[v20 / 0xFFFFFFFFFFFFFFF8uLL],
                             v10,
                             v10);
        std::_Move_backward_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
          v6,
          v22,
          v10);
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v6, v21);
        while ( 1 )
        {
          v23 = v6;
          if ( a3 == a4 )
            break;
          wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
            v6++,
            *a3++);
        }
      }
      return std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v23, v6);
    }
    else
    {
      v12 = v10 - v9;
      if ( v8 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::vector<std::function<void (bool)>>::_Xlength();
      v27 = v12 + v8;
      v24 = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Calculate_growth(a1, v12 + v8);
      size_of = std::_Get_size_of_n<8>(v24);
      v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v26 = v14;
      v15 = v6 - v9;
      v30 = v15;
      v29 = (__int64 *)&v14[8 * v15 + 8 * v8];
      try
      {
        v16 = (__int64 *)&v14[8 * v15];
        if ( a3 != a4 )
        {
          v17 = a3;
          do
            wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::com_ptr_t<CAudioStream,wil::err_returncode_policy>(
              v16++,
              *v17++);
          while ( v17 != a4 );
          v14 = v26;
        }
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v16, v16);
        v31 = (__int64 *)&v14[8 * v30];
        if ( v8 == 1 && v6 == v10 )
        {
          v18 = (__int64 *)v14;
          v19 = v32;
        }
        else
        {
          std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
            v32,
            v6,
            v14);
          v31 = (__int64 *)v14;
          v18 = v29;
          v19 = v6;
        }
        std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
          v19,
          v10,
          v18);
        result = std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Change_array(
                   a1,
                   v14,
                   v27,
                   v24,
                   v24);
      }
      catch ( ... )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v31, v29);
        std::_Deallocate<16,0>(v26, 8 * v25);
        throw;
      }
    }
  }
  return result;
}
