/*
 * XREFs of ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140050ABC
 * Callers:
 *     ??_G?$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140050BB0 (--_G-$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CStreamGroup>::~CComAggObject<CStreamGroup>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamGroup>::`vftable';
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 48));
  if ( *(_BYTE *)(a1 + 416) )
  {
    *(_BYTE *)(a1 + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 376));
  }
}
