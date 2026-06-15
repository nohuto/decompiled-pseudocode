/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082A08
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140084920 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140082F18 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::CComAggObject<CCrossProcessClientOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::`vftable';
  CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint((CCrossProcessClientOutputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 432) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *(_QWORD *)(a1 + 440) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *(_QWORD *)(a1 + 448) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  *(_QWORD *)(a1 + 480) = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *(_QWORD *)(a1 + 504) = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  *(_QWORD *)(a1 + 520) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
