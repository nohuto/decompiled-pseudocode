/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::catch$229 @ 0x180047AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::RpcGetProcess_::_1_::catch_229(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 472);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 296) = *v3;
  return 0LL;
}
