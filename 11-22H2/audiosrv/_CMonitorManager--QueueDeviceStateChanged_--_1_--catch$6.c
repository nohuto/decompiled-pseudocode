/*
 * XREFs of _CMonitorManager::QueueDeviceStateChanged_::_1_::catch$6 @ 0x18007B160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::QueueDeviceStateChanged_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 152) = *v3;
  return 0LL;
}
