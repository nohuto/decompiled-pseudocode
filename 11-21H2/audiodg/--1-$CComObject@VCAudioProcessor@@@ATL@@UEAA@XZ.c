/*
 * XREFs of ??1?$CComObject@VCAudioProcessor@@@ATL@@UEAA@XZ @ 0x14002244C
 * Callers:
 *     ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400224B0 (--_G-$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CAudioProcessor>::~CComObject<CAudioProcessor>(CAudioProcessor *this)
{
  *((_DWORD *)this + 6) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessor'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessRT'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioLogging'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CAudioProcessor::~CAudioProcessor(this);
}
