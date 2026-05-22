/*
 * XREFs of ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1801BEB38
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1801C03A0 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x1801BF220 (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Cont.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801BF55C (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_1801BF55C.c)
 *     ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801BF76C (--0-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@_ea_1801BF76C.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1801C2598 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 */

// Hidden C++ exception states: #wind=3
ContextualProcessorBuffer::InputSample *__fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  ContextualProcessorBuffer::InputSample *v12; // r14
  ContextualProcessorBuffer::InputSample *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v18; // [rsp+20h] [rbp-58h]
  ContextualProcessorBuffer::InputSample *v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  void *v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  ContextualProcessorBuffer::InputSample *v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+88h] [rbp+10h]
  __int64 v26; // [rsp+98h] [rbp+20h]

  v6 = (unsigned __int128)((a2 - *a1) * (__int128)0x4EC4EC4EC4EC4EC5LL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 6);
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 4);
  if ( v8 == 0x13B13B13B13B13BLL )
    std::_Xlength_error("vector too long");
  v26 = v8 + 1;
  v9 = 0x4EC4EC4EC4EC4EC5LL * ((a1[2] - *a1) >> 4);
  v10 = v9 >> 1;
  if ( v9 <= 0x13B13B13B13B13BLL - (v9 >> 1) )
  {
    v11 = v8 + 1;
    if ( v10 + v9 >= v8 + 1 )
      v11 = v10 + v9;
    v25 = v11;
    if ( v11 > 0x13B13B13B13B13BLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v11 = 0x13B13B13B13B13BLL;
    v25 = 0x13B13B13B13B13BLL;
  }
  v12 = (ContextualProcessorBuffer::InputSample *)std::_Allocate<16,std::_Default_allocate_traits,0>(208 * v11);
  v13 = (ContextualProcessorBuffer::InputSample *)((char *)v12 + 208 * v7);
  v18 = (_DWORD *)((char *)v13 + 208);
  try
  {
    v14 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v13 = v14;
    *((_DWORD *)v13 + 2) = *((_DWORD *)a3 + 2);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
      (char *)v13 + 16,
      a3 + 2);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
      (char *)v13 + 80,
      a3 + 10);
    std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
      (char *)v13 + 144,
      a3 + 18);
    v24 = v13;
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(v16, v15, v12, a1, v18, v12, v13);
    }
    else
    {
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(v16, a2, v12, a1, v18, v12, v13);
      v24 = v12;
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(
        a2,
        a1[1],
        (char *)v13 + 208,
        a1,
        v20,
        v22,
        v23);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(v24, v19);
    std::_Deallocate<16,0>(v21, 208 * v25);
    throw;
  }
  std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v12, v26, v11);
  return v13;
}
