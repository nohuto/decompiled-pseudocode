/*
 * XREFs of ??1?$CComAggObject@VCStreamInstance@@@ATL@@UEAA@XZ @ 0x14004B26C
 * Callers:
 *     ??_E?$CComAggObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z @ 0x14004B610 (--_E-$CComAggObject@VCStreamInstance@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CStreamInstance>::~CComAggObject<CStreamInstance>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamInstance>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CStreamInstance::~CStreamInstance((CStreamInstance *)(a1 + 24));
}
