/*
 * XREFs of ?FindConnectionIndex@CAudioProcessor@@AEAAJAEBV?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@PEBVCConnectionNode@@AEA_K@Z @ 0x14001039C
 * Callers:
 *     ?RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E770 (-RemoveAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000E910 (-RemoveAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400104C0 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x1400107B0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioProcessor::FindConnectionIndex(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rcx

  v4 = 0LL;
  if ( !a2[1] )
    return 2289827866LL;
  while ( *(_QWORD *)(*a2 + 8 * v4) != a3 )
  {
    if ( (unsigned __int64)++v4 >= a2[1] )
      return 2289827866LL;
  }
  *a4 = v4;
  return 0LL;
}
