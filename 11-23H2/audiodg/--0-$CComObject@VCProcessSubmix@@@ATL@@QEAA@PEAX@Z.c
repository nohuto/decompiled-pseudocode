/*
 * XREFs of ??0?$CComObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140006624
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140006190 (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ??0CProcessSubmix@@QEAA@XZ @ 0x1400068F0 (--0CProcessSubmix@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

CProcessSubmix *__fastcall ATL::CComObject<CProcessSubmix>::CComObject<CProcessSubmix>(CProcessSubmix *a1)
{
  CProcessSubmix::CProcessSubmix(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
