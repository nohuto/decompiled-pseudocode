/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::catch$14 @ 0x18007B240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::catch_14(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 192) = *v3;
  return 0LL;
}
