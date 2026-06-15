/*
 * XREFs of ??1?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAA@XZ @ 0x14005A274
 * Callers:
 *     ??_E?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x14005A420 (--_E-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CSystemAudioDeviceShared>::~CComAggObject<CSystemAudioDeviceShared>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceShared>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceShared::~CSystemAudioDeviceShared((CSystemAudioDeviceShared *)(a1 + 24));
}
