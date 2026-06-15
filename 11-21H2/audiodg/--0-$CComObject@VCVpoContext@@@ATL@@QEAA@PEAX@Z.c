/*
 * XREFs of ??0?$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140061404
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140061828 (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::CComObject<CVpoContext>(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)a1 = &ATL::CComObject<CVpoContext>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CVpoContext>::`vftable'{for `IVpoContext'};
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
