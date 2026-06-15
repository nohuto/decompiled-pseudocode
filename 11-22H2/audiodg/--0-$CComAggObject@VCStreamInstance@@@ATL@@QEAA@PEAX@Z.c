/*
 * XREFs of ??0?$CComAggObject@VCStreamInstance@@@ATL@@QEAA@PEAX@Z @ 0x14004B034
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004BF2C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@P.c)
 * Callees:
 *     ??0CStreamInstance@@QEAA@XZ @ 0x14000693C (--0CStreamInstance@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CStreamInstance>::CComAggObject<CStreamInstance>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamInstance>::`vftable';
  CStreamInstance::CStreamInstance((CStreamInstance *)(a1 + 24));
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CStreamInstance>::`vftable'{for `IStreamInstanceInternal'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CStreamInstance>::`vftable'{for `IStreamInstance'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CStreamInstance>::`vftable'{for `IFastRundown'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
