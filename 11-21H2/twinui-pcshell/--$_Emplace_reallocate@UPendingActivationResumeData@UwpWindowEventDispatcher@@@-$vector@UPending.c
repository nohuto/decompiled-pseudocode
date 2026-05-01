/*
 * XREFs of ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x1803E9C6C
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EB32C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x1803E9E74 (--$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UP.c)
 *     ?_Change_array@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAXQEAUPendingActivationResumeData@UwpWindowEventDispatcher@@_K1@Z @ 0x1803F8508 (-_Change_array@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPen.c)
 */

char *__fastcall std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  __int64 *v13; // rax
  __int64 *v14; // rdi
  char *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 v20; // rcx
  char *result; // rax
  char *v22; // [rsp+20h] [rbp-48h]
  void *v23; // [rsp+20h] [rbp-48h]
  __int64 *v24; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  v8 = 0x7FFFFFFFFFFFFFFLL;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v8);
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v22 = (char *)v13;
  v15 = (char *)v13 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  try
  {
    v16 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v15 = v16;
    v17 = a3[1];
    a3[1] = 0LL;
    *((_QWORD *)v15 + 1) = v17;
    *((_QWORD *)v15 + 2) = a3[2];
    *((_DWORD *)v15 + 6) = *((_DWORD *)a3 + 6);
    v24 = (__int64 *)v15;
    v18 = a1[1];
    v19 = v14;
    v20 = *a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v20, a2, v14);
      v24 = v14;
      v19 = (__int64 *)(v15 + 32);
      v18 = a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v20, v18, v19);
    std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Change_array(a1, v14, v9, v8, v22);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(v24, (__int64 *)v15 + 4);
    std::_Deallocate<16,0>(v23, 32 * v8);
    throw;
  }
  return result;
}
