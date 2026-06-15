/*
 * XREFs of _DumpDeviceGraph_::_1_::catch$6 @ 0x14005E3A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DumpDeviceGraph_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 160) = *v3;
  return 0LL;
}
