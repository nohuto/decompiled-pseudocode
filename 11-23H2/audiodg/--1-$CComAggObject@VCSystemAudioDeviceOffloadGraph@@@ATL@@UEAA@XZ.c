/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAA@XZ @ 0x14005A97C
 * Callers:
 *     ??_G?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z @ 0x14005AC10 (--_G-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::~CComAggObject<CSystemAudioDeviceOffloadGraph>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceOffloadGraph::~CSystemAudioDeviceOffloadGraph((CSystemAudioDeviceOffloadGraph *)(a1 + 24));
}
