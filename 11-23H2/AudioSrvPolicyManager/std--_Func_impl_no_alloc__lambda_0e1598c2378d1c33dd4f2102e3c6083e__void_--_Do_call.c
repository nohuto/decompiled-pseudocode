/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x180030E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rdx

  v1 = *(const unsigned __int16 **)(a1 + 8);
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  return CApplicationManager::HandleMediaPlaybackRequestForApp(
           (struct _RTL_CRITICAL_SECTION *)a1,
           v1,
           *(_QWORD *)(a1 + 24),
           *(_DWORD *)(a1 + 32));
}
