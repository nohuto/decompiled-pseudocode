/*
 * XREFs of _CDuckingManager::DeleteDuckingNotification_::_1_::catch$10 @ 0x180044D0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::DeleteDuckingNotification_::_1_::catch_10(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 48) = *v3;
  return 0LL;
}
