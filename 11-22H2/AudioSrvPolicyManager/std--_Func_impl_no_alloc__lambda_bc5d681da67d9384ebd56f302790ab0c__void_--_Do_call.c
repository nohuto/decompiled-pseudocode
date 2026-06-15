/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x18002FD10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18003C254 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rdx

  v1 = *(const unsigned __int16 **)(a1 + 8);
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  CApplicationManager::OnAppStateChanged(
    (CApplicationManager *)a1,
    v1,
    *(_QWORD *)(a1 + 24),
    *(_DWORD *)(a1 + 32),
    *(_DWORD *)(a1 + 36));
}
