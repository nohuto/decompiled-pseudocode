/*
 * XREFs of ?InsertAt@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x180102310
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800FCB98 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@@1@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@Z @ 0x1801009B8 (--$emplace@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@Transitions@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::InsertAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  try
  {
    v3 = (a1 - 16) & -(__int64)(a1 != 0);
    if ( a2 > (unsigned __int64)((__int64)(*(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x38)
                                         - *(_QWORD *)((v3 & -(__int64)(v3 != -40)) + 0x30)) >> 3) )
    {
      winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
      throw (winrt::hresult_out_of_bounds *)pExceptionObject;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 40));
    if ( v3 == -40 )
    {
      v4 = 48LL;
      v3 = 0LL;
    }
    else
    {
      v4 = v3 + 48;
    }
    std::vector<winrt::Udwm::Transitions::UserResizeVisual>::emplace<winrt::Udwm::Transitions::UserResizeVisual const &>(
      (__int64 *)v4,
      &v7,
      (__int64 *)(*(_QWORD *)(v3 + 48) + 8LL * a2),
      &v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
