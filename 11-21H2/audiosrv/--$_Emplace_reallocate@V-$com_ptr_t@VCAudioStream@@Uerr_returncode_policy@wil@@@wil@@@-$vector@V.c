/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180011B20
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015150 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?_Xlength@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@CAXXZ @ 0x180067440 (-_Xlength@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800C6718 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D5B8C (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::function<void (bool)>>::_Xlength();
  v21 = v7 + 1;
  v8 = a1[2] - *a1;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v11 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v10 = v7 + 1;
    if ( v9 + v8 >= v7 + 1 )
      v10 = v9 + v8;
    if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v11 = v10;
    if ( 8 * v10 < 0x1000 )
    {
      if ( v11 * 8 )
      {
        ProcessHeap = GetProcessHeap();
        v13 = HeapAlloc(ProcessHeap, 0, 8 * v10);
      }
      else
      {
        v13 = 0LL;
      }
      goto LABEL_9;
    }
  }
  v13 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v11 * 8);
LABEL_9:
  v14 = &v13[v6];
  v15 = *a3;
  *a3 = 0LL;
  *v14 = v15;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    v18 = v13;
    while ( v17 != v16 )
    {
      v20 = *v17;
      *v17 = 0LL;
      *v18++ = v20;
      ++v17;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      v17,
      a2,
      v13);
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      a2,
      a1[1],
      v14 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(*a1, a1[1], v16);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v13;
  a1[1] = &v13[v21];
  a1[2] = &v13[v11];
  return (char *)&v13[v6];
}
