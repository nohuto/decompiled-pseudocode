/*
 * XREFs of ??0?$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x1400037E4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140003718 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x1400045A8 (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CAudioDeviceGraph *__fastcall ATL::CComObject<CAudioDeviceGraph>::CComObject<CAudioDeviceGraph>(CAudioDeviceGraph *a1)
{
  CAudioDeviceGraph::CAudioDeviceGraph(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
