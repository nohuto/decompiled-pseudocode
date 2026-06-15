/*
 * XREFs of ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18014EF90
 * Callers:
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800107D0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18014F428 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18004B180 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800F831C (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 */

bool __fastcall ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(_QWORD *a1, unsigned __int64 a2)
{
  LPVOID v4; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v5, a2, 0x10uLL) < 0 )
    return 0;
  v4 = ATL::CComAllocator::Allocate(v5);
  *a1 = v4;
  return v4 != 0LL;
}
