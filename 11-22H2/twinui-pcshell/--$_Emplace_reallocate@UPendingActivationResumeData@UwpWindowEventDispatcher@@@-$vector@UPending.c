/*
 * XREFs of ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@QEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x18017ECB0
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009F53C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800C150C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18017EDBC (--$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UP.c)
 *     ?_Change_array@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAXQEAUPendingActivationResumeData@UwpWindowEventDispatcher@@_K1@Z @ 0x18017EE2C (-_Change_array@-$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UPen.c)
 */

char *__fastcall std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rdi
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx

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
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  v15 = *a3;
  *a3 = 0LL;
  *(_QWORD *)v14 = v15;
  v16 = a3[1];
  a3[1] = 0LL;
  *((_QWORD *)v14 + 1) = v16;
  *((_QWORD *)v14 + 2) = a3[2];
  *((_DWORD *)v14 + 6) = *((_DWORD *)a3 + 6);
  v17 = a1[1];
  v18 = v13;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v19, a2, v13);
    v18 = v14 + 32;
    v17 = a1[1];
    v19 = a2;
  }
  std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v19, v17, v18);
  std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Change_array(a1, v13, v9, v8, v13);
  return v14;
}
