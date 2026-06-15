/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call @ 0x180030B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rdx

  v1 = *(const unsigned __int16 **)(a1 + 8);
  if ( *((_QWORD *)v1 + 3) >= 8uLL )
    v1 = *(const unsigned __int16 **)v1;
  return CApplicationManager::OnApplicationClosed(
           g_ApplicationManager,
           v1,
           *(CApplication **)(a1 + 24),
           *(_DWORD *)(a1 + 32));
}
