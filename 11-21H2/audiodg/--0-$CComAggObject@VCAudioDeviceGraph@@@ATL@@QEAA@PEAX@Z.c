/*
 * XREFs of ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x14004D338
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004DAB0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14000633C (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CAudioDeviceGraph>::CComAggObject<CAudioDeviceGraph>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAudioDeviceGraph>::`vftable';
  CAudioDeviceGraph::CAudioDeviceGraph((CAudioDeviceGraph *)(a1 + 24));
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
