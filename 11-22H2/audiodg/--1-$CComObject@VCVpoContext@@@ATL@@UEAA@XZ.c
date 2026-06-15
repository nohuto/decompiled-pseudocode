/*
 * XREFs of ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400661F8
 * Callers:
 *     ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140066300 (--_E-$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(CVpoContext *this)
{
  *((_DWORD *)this + 4) = -1073741823;
  *(_QWORD *)this = &ATL::CComObject<CVpoContext>::`vftable'{for `IFastRundown'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CVpoContext>::`vftable'{for `IVpoContext'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CVpoContext::~CVpoContext(this);
}
