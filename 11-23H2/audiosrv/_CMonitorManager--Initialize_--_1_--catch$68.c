/*
 * XREFs of _CMonitorManager::Initialize_::_1_::catch$68 @ 0x18007D147
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::Initialize_::_1_::catch_68(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 200);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 288) = *v3;
  return 0LL;
}
