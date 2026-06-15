/*
 * XREFs of ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14004D52C
 * Callers:
 *     ??_G?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x14004D750 (--_G-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CAudioDeviceGraph>::~CComAggObject<CAudioDeviceGraph>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAudioDeviceGraph>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioDeviceGraph::~CAudioDeviceGraph((CAudioDeviceGraph *)(a1 + 24));
}
