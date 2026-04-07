/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXI@Z @ 0x1800FDD10
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x1800FDCB0 (-RemoveAt@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserResi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800F9734 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x1800FCC84 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 *     ?erase@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@2@@Z @ 0x1800FEF10 (-erase@-$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V-$allocator@UUserResizeVisual@Transit.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::UserResizeVisual *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::RemoveAt(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  winrt::Udwm::Transitions::UserResizeVisual *result; // rax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  v5 = (__int64 *)(*(_QWORD *)v4 + 8LL * a2);
  v6 = *v5;
  *v5 = 0LL;
  v9 = v6;
  v10 = 1;
  v7 = (__int64)(a1 + 2);
  if ( !a1 )
    v7 = 48LL;
  result = (winrt::Udwm::Transitions::UserResizeVisual *)std::vector<winrt::Udwm::Transitions::UserResizeVisual>::erase(
                                                           v7,
                                                           &v12,
                                                           v5);
  if ( v10 )
    return winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'((winrt::Udwm::Transitions::UserResizeVisual *)&v9);
  return result;
}
