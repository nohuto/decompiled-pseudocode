/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F8A8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400919C8 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x14008FD70 (--0CCrossProcessServerOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::CComAggObject<CCrossProcessServerOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::`vftable';
  CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint((CCrossProcessServerOutputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 432) = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *(_QWORD *)(a1 + 488) = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *(_QWORD *)(a1 + 512) = &ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `ICPAudioHistoryWriter'};
  *(_QWORD *)(a1 + 520) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
