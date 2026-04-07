/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@@winrt@@QEAAXXZ @ 0x1800FDE4C
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x1800FDDF0 (-RemoveAtEnd@-$produce@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUserR.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800F9734 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z @ 0x1800FCC84 (--_GUserResizeVisual@Transitions@Udwm@winrt@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::UserResizeVisual *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  winrt::Udwm::Transitions::UserResizeVisual *result; // rax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  char v8; // [rsp+28h] [rbp-30h]
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0;
  v1 = (__int64)(a1 + 2);
  if ( !a1 )
    v1 = 48LL;
  if ( *(_QWORD *)v1 == *(_QWORD *)(v1 + 8) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v2 = (__int64)(a1 + 4);
  if ( !a1 )
    v2 = 56LL;
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(*(_QWORD *)v2 - 8LL);
  *(_QWORD *)(v3 - 8) = 0LL;
  v7 = v4;
  v8 = 1;
  v5 = (__int64)(a1 + 4);
  if ( !a1 )
    v5 = 56LL;
  result = winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'((winrt::Udwm::Transitions::UserResizeVisual *)(*(_QWORD *)v5 - 8LL));
  *(_QWORD *)v5 -= 8LL;
  if ( v8 )
    return winrt::Udwm::Transitions::UserResizeVisual::`scalar deleting destructor'((winrt::Udwm::Transitions::UserResizeVisual *)&v7);
  return result;
}
