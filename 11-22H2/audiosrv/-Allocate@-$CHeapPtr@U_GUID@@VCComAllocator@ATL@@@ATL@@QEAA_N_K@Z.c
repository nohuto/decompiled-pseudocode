/*
 * XREFs of ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x1800295A0
 * Callers:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18002AD54 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003CEE4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x180047980 (-GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180029648 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x18002967C (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 */

bool __fastcall ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(_QWORD *a1, __int64 a2)
{
  void *v3; // rax
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&v5, a2, 16LL) < 0 )
    return 0;
  v3 = ATL::CComAllocator::Allocate(v5);
  *a1 = v3;
  return v3 != 0LL;
}
