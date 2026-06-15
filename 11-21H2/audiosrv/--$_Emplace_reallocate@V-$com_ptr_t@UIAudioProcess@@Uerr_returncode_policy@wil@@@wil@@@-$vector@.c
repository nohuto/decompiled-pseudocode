/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180007CB0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180007600 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800DA480 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800C6718 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D5B8C (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // r10
  __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  HANDLE ProcessHeap; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 *v19; // r9
  _QWORD *i; // rdx
  __int64 v22; // rax

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v12 = 0x1FFFFFFFFFFFFFFFLL;
LABEL_17:
    v14 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12 * 8);
    v15 = 0LL;
    v4 = a2;
    goto LABEL_9;
  }
  v11 = v10 + v9;
  if ( v10 + v9 < v8 )
    v11 = v7 + 1;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v12 = v11;
  if ( 8 * v11 >= 0x1000 )
    goto LABEL_17;
  if ( v12 * 8 )
  {
    ProcessHeap = GetProcessHeap();
    v14 = HeapAlloc(ProcessHeap, 0, 8 * v11);
    v15 = 0LL;
    v4 = a2;
  }
  else
  {
    v15 = 0LL;
    v14 = 0LL;
  }
LABEL_9:
  v16 = &v14[v6];
  v17 = *a3;
  *a3 = 0LL;
  *v16 = v17;
  v18 = a1[1];
  v19 = *a1;
  if ( v4 == v18 )
  {
    for ( i = v14; v19 != v18; ++v19 )
    {
      v22 = *v19;
      *v19 = 0LL;
      *i++ = v22;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      *a1,
      v4,
      v14);
    std::_Uninitialized_move<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>>(
      a2,
      a1[1],
      v16 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(*a1, a1[1], v15);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = &v14[v8];
  a1[2] = &v14[v12];
  return (char *)&v14[v6];
}
