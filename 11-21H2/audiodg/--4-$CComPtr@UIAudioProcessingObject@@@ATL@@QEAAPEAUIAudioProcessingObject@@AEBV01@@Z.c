/*
 * XREFs of ??4?$CComPtr@UIAudioProcessingObject@@@ATL@@QEAAPEAUIAudioProcessingObject@@AEBV01@@Z @ 0x140010600
 * Callers:
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140017E50 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioProcessingObject>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx

  result = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*a2);
      result = *a1;
    }
    if ( result )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    *a1 = v4;
    return v4;
  }
  return result;
}
