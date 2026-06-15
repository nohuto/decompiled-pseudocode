/*
 * XREFs of _DumpDeviceGraph_::_1_::catch$1_1 @ 0x14005E269
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DumpDeviceGraph_::_1_::catch_1_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 72);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 160) = *v3;
  return 0LL;
}
