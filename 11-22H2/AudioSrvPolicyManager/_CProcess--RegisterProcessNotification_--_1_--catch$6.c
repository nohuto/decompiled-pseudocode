/*
 * XREFs of _CProcess::RegisterProcessNotification_::_1_::catch$6 @ 0x18004A6C1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RegisterProcessNotification_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return 0LL;
}
