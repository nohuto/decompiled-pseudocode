/*
 * XREFs of _CAudioSession::ParseStreamSwitchId_::_1_::catch$30 @ 0x1800D9F9E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::ParseStreamSwitchId_::_1_::catch_30(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 168) = *v3;
  return 0LL;
}
