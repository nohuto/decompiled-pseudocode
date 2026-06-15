/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x14000863C
 * Callers:
 *     ?RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUIAudioEndpoint@@@Z @ 0x1400085DC (-RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNo.c)
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000F460 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000FA90 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax

  v2 = a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (_QWORD *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  return ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode(v2);
}
