/*
 * XREFs of _CAudioProcessor::DeactivateAPO_::_1_::catch$2 @ 0x14003639A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::DeactivateAPO_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 192) = *v3;
  return 0LL;
}
