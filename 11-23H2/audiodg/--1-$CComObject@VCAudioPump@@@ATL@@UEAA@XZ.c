/*
 * XREFs of ??1?$CComObject@VCAudioPump@@@ATL@@UEAA@XZ @ 0x14005E9F8
 * Callers:
 *     ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x14005EEB0 (--_G-$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CAudioPump>::~CComObject<CAudioPump>(CAudioPump *this)
{
  *((_DWORD *)this + 4) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPump'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPumpLogging'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioPump::~CAudioPump(this);
}
