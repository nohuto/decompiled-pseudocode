/*
 * XREFs of _CSubmixImpl::CreateStream_::_1_::catch$42 @ 0x140067DF5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::CreateStream_::_1_::catch_42(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 200);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return 0LL;
}
