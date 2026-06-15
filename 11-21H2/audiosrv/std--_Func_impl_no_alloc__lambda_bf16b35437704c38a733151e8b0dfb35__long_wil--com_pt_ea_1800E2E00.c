/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bf16b35437704c38a733151e8b0dfb35__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800E2E00
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E03F4 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_bf16b35437704c38a733151e8b0dfb35__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  CAudioSessionManager::DisconnectSessionsForTsSession(
    *(CAudioSessionManager **)(*(_QWORD *)a2 + 96LL),
    **(_DWORD **)(a1 + 8),
    eAll);
  return 0LL;
}
