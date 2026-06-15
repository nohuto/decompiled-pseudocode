/*
 * XREFs of _CMonitorManager::Initialize_::_1_::catch$67 @ 0x18007D12E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::Initialize_::_1_::catch_67(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 192);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 288) = *v3;
  return 0LL;
}
