/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180073888
 * Callers:
 *     ?CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z @ 0x180073B14 (-CreateBridgeSinkAudioClientForMicInjection@CVADServer@@AEAAJPEAUIMMDevice@@U_GUID@@_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18000B358 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800739C8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$alloc.c)
 *     ??0?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180073A08 (--0-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180073D70 (-_Change_array@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x180073F40 (-_Xlength@-$vector@V-$com_ptr_t@UIAudioClient@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  char *v12; // rax
  __int64 v13; // rdi
  char *v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  char *result; // rax
  __int64 v19; // rcx
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Xlength(a1, a2, a3);
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64)v12;
  v20 = v12;
  v14 = &v12[8 * v5];
  try
  {
    wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>::com_ptr_t<IAudioClient,wil::err_returncode_policy>(v14, a3);
    v22 = (__int64)v14;
    v15 = a1[1];
    v16 = (char *)v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>>(
        v17,
        a2,
        v13);
      v22 = v13;
      v16 = v14 + 8;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>>(
      v17,
      v15,
      v16);
    std::vector<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::_Change_array(a1, v13, v8, v7, v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>>(
      v22,
      (__int64)(v14 + 8));
    std::allocator<wil::com_ptr_t<IAudioClient,wil::err_returncode_policy>>::deallocate(v19, v21, v7);
    throw;
  }
  return result;
}
