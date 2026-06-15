/*
 * XREFs of _CAudioSession::ParseStreamSwitchId_::_1_::catch$30 @ 0x1800E2149
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::ParseStreamSwitchId_::_1_::catch_30(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 120);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 200) = *v3;
  return 0LL;
}
