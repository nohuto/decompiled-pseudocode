/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::catch$402 @ 0x180045AE2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::RpcGetProcess_::_1_::catch_402(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 552);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 244) = *v3;
  return 0LL;
}
