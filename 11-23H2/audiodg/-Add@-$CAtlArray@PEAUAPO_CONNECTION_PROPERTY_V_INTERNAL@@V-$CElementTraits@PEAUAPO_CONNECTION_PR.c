/*
 * XREFs of ?Add@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAA_KAEBQEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@Z @ 0x140012F3C
 * Callers:
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400107B0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000FCB0 (-GrowBuffer@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Add(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2] && !ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer((__int64)a1, v2 + 1) )
    ATL::AtlThrowImpl(-2147024882);
  result = v2;
  *(_QWORD *)(*a1 + 8 * v2) = *a2;
  ++a1[1];
  return result;
}
