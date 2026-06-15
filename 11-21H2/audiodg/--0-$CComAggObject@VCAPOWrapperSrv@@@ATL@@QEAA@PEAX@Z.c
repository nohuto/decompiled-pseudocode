/*
 * XREFs of ??0?$CComAggObject@VCAPOWrapperSrv@@@ATL@@QEAA@PEAX@Z @ 0x14004D2B4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004D9AC (-CreateInstance@-$CComCreator@V-$CComAggObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     ??0CAPOWrapperSrv@@QEAA@XZ @ 0x1400174B4 (--0CAPOWrapperSrv@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::CComAggObject<CAPOWrapperSrv>(__int64 a1)
{
  __int64 v2; // r10

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CAPOWrapperSrv>::`vftable';
  CAPOWrapperSrv::CAPOWrapperSrv((CAPOWrapperSrv *)(a1 + 24));
  *(_QWORD *)(a1 + 56) = v2;
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
  *(_QWORD *)(a1 + 40) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
  *(_QWORD *)(a1 + 48) = &ATL::CComContainedObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
