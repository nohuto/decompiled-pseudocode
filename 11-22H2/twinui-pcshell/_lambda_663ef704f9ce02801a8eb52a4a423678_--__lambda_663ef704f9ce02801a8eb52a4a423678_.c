/*
 * XREFs of _lambda_663ef704f9ce02801a8eb52a4a423678_::__lambda_663ef704f9ce02801a8eb52a4a423678_ @ 0x180788C04
 * Callers:
 *     _winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_663ef704f9ce02801a8eb52a4a423678____::_1_::dtor$0 @ 0x180787D2E (_winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_663ef704f9c.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_663ef704f9ce02801a8eb52a4a423678_::__lambda_663ef704f9ce02801a8eb52a4a423678_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
