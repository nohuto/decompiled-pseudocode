/*
 * XREFs of ??0?$CComObject@VCStreamInstance@@@ATL@@QEAA@PEAX@Z @ 0x140005FDC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140005F10 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??0CStreamInstance@@QEAA@XZ @ 0x14000693C (--0CStreamInstance@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

CStreamInstance *__fastcall ATL::CComObject<CStreamInstance>::CComObject<CStreamInstance>(CStreamInstance *a1)
{
  CStreamInstance::CStreamInstance(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CStreamInstance>::`vftable'{for `IStreamInstanceInternal'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CStreamInstance>::`vftable'{for `IStreamInstance'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CStreamInstance>::`vftable'{for `IFastRundown'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
