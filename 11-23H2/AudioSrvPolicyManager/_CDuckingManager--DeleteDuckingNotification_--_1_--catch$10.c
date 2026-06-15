/*
 * XREFs of _CDuckingManager::DeleteDuckingNotification_::_1_::catch$10 @ 0x180048BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::DeleteDuckingNotification_::_1_::catch_10(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 56) = *v3;
  return 0LL;
}
