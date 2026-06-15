/*
 * XREFs of ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x14000438C
 * Callers:
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x1400037D0 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140008180 (--1CSubmixImpl@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>(__int64 a1)
{
  *(_DWORD *)(a1 + 344) = -1073741823;
  *(_QWORD *)a1 = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 24) = &ATL::CComObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 392) )
  {
    *(_BYTE *)(a1 + 392) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  }
}
