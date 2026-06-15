/*
 * XREFs of ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180081642
 * Callers:
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x180083C40 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFCC0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180129A90 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180029648 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 */

bool __fastcall ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(_QWORD *a1, unsigned __int64 a2)
{
  void *v4; // rax
  size_t Size; // [rsp+40h] [rbp+18h] BYREF

  Size = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&Size, a2, 4uLL) < 0 )
    return 0;
  v4 = malloc(Size);
  *a1 = v4;
  return v4 != 0LL;
}
