/*
 * XREFs of _CDuckingManager::NotifyFilteredClientsAutoUnduck_::_1_::catch$5 @ 0x180044E9D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck_::_1_::catch_5(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 32);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
