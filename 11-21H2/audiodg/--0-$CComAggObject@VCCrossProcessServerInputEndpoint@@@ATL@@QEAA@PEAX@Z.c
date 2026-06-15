/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082AE8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140084A4C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SA.c)
 * Callees:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140020578 (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComAggObject<CCrossProcessServerInputEndpoint>::CComAggObject<CCrossProcessServerInputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerInputEndpoint>::`vftable';
  CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint((CCrossProcessServerInputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 432) = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *(_QWORD *)(a1 + 488) = &ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *(_QWORD *)(a1 + 512) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
