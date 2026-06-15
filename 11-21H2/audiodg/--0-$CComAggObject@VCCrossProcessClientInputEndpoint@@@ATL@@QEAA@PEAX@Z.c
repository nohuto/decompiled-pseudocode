/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082928
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400847F4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@@ATL@@SA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x140082E80 (--0CCrossProcessClientInputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComAggObject<CCrossProcessClientInputEndpoint>::CComAggObject<CCrossProcessClientInputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientInputEndpoint>::`vftable';
  CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint((CCrossProcessClientInputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 432) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 440) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 448) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioClock2'};
  *(_QWORD *)(a1 + 480) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *(_QWORD *)(a1 + 504) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  *(_QWORD *)(a1 + 520) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
