/*
 * XREFs of ??0?$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x14004AEB4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004BCE4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::CComAggObject<CAPOWrapperSrv>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAPOWrapperSrv>::`vftable';
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 56) = a2;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
