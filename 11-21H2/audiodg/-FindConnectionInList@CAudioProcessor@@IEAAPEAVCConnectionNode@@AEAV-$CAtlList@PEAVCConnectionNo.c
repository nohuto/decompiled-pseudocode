/*
 * XREFs of ?FindConnectionInList@CAudioProcessor@@IEAAPEAVCConnectionNode@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@_K@Z @ 0x14000A148
 * Callers:
 *     ?FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z @ 0x14000A09C (-FindConnectionInObjectCache@CAudioProcessor@@IEAAPEAVCConnectionNode@@_K@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14000A294 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioProcessor::FindConnectionInList(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx

  v3 = (_QWORD *)*a2;
  v4 = 0LL;
  while ( v3 )
  {
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_QWORD *)(v5 + 16) == a3 )
      return v5;
  }
  return v4;
}
