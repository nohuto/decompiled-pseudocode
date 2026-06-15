/*
 * XREFs of _CAudioProcessor::AddAPOOutputConnection_::_1_::catch$19 @ 0x140035472
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::AddAPOOutputConnection_::_1_::catch_19(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 152);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 256) = *v3;
  return 0LL;
}
