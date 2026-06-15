/*
 * XREFs of ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x140068AD0
 * Callers:
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000FA90 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  while ( *(_QWORD *)(v2[2] + 16LL) != *(_QWORD *)(*(_QWORD *)a2 + 16LL) )
  {
    v2 = (_QWORD *)*v2;
    if ( !v2 )
      return 0LL;
  }
  return v2;
}
