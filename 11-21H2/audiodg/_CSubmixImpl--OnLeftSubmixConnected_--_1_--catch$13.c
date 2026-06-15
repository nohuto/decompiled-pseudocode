/*
 * XREFs of _CSubmixImpl::OnLeftSubmixConnected_::_1_::catch$13 @ 0x140038E47
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixConnected_::_1_::catch_13(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return 0LL;
}
