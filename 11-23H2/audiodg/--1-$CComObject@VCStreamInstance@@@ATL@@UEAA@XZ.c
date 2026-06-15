/*
 * XREFs of ??1?$CComObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x1400044B4
 * Callers:
 *     ??_G?$CComObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x140002B80 (--_G-$CComObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CStreamInstance>::~CComObject<CStreamInstance>(CStreamInstance *this)
{
  *((_DWORD *)this + 6) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CStreamInstance>::`vftable'{for `IStreamInstanceInternal'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CStreamInstance>::`vftable'{for `IStreamInstance'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CStreamInstance>::`vftable'{for `IFastRundown'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CStreamInstance::~CStreamInstance(this);
}
