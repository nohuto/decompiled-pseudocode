/*
 * XREFs of _CVolumeSoftware::InitializeAPOs_::_1_::catch$7 @ 0x1800CC866
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeSoftware::InitializeAPOs_::_1_::catch_7(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 52) = *v3;
  return 0LL;
}
