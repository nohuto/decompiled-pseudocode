/*
 * XREFs of ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140050210
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140050CF0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??0CStreamGroup@@QEAA@XZ @ 0x1400046D8 (--0CStreamGroup@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CStreamGroup>::CComAggObject<CStreamGroup>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamGroup>::`vftable';
  CStreamGroup::CStreamGroup((CStreamGroup *)(a1 + 24));
  *(_QWORD *)(a1 + 368) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
