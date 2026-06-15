/*
 * XREFs of ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140068FF0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140069160 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     ??0CProcessSubmix@@QEAA@XZ @ 0x1400068F0 (--0CProcessSubmix@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CProcessSubmix>::CComAggObject<CProcessSubmix>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  CProcessSubmix::CProcessSubmix((CProcessSubmix *)(a1 + 24));
  *(_QWORD *)(a1 + 360) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
