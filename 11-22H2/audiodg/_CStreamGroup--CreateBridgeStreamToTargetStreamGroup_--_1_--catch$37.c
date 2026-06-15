/*
 * XREFs of _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::catch$37 @ 0x140063C1D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::catch_37(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 152);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 240) = *v3;
  return 0LL;
}
