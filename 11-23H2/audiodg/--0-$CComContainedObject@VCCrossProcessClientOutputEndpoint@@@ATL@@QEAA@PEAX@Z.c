/*
 * XREFs of ??0?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F91C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400916E0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@S.c)
 * Callees:
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x14008FC80 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 */

CCrossProcessClientOutputEndpoint *__fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::CComContainedObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientOutputEndpoint *a1,
        __int64 a2)
{
  CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(a1);
  *((_QWORD *)a1 + 63) = a2;
  *(_QWORD *)a1 = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)a1 + 1) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)a1 + 51) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)a1 + 52) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *((_QWORD *)a1 + 53) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *((_QWORD *)a1 + 57) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_QWORD *)a1 + 60) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessControl'};
  *((_QWORD *)a1 + 62) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpointInternal'};
  return a1;
}
