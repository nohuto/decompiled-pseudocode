/*
 * XREFs of _CMonitorManager::CaptureMonitor::Initialize_::_1_::catch$27 @ 0x18011C89E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::Initialize_::_1_::catch_27(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 176) = *v3;
  return 0LL;
}
