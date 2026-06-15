/*
 * XREFs of _CAudioDeviceGraph::Initialize_::_1_::catch$82 @ 0x140035F6D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::Initialize_::_1_::catch_82(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 320);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 176) = *v3;
  return 0LL;
}
