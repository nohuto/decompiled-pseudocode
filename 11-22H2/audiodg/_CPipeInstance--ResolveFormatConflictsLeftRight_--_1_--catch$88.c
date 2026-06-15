/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch$88 @ 0x14003599F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch_88(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 344);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 68) = *v3;
  return 0LL;
}
