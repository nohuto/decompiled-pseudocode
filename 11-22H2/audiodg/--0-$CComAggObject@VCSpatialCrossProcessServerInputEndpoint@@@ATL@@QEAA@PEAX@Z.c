/*
 * XREFs of ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140098DE0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140099E30 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140099400 (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::CComAggObject<CSpatialCrossProcessServerInputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint((CSpatialCrossProcessServerInputEndpoint *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *(_QWORD *)(a1 + 1344) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *(_QWORD *)(a1 + 1352) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *(_QWORD *)(a1 + 1456) = &ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  *(_QWORD *)(a1 + 1464) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
