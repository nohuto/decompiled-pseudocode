/*
 * XREFs of _CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint_::_1_::catch$3 @ 0x1400362F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 80) = *v3;
  return 0LL;
}
