/*
 * XREFs of ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134AC8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_::_Do_call @ 0x1801370C0 (std--_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180019500 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x1801345B4 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134A68 (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x1801363D4 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18013918C (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *FirstStream; // rax
  Sarm::CStreamResource *v6; // rdi
  char IsProcessMuted; // al

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange", 810);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
  v6 = FirstStream;
  if ( FirstStream )
  {
    IsProcessMuted = Sarm::CStreamResource::IsProcessMuted(FirstStream);
    if ( IsProcessMuted != *((_BYTE *)v6 + 88) )
    {
      *((_BYTE *)v6 + 88) = IsProcessMuted;
      if ( IsProcessMuted )
        Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(this, a2);
      else
        Sarm::CSpatialAudioResourceManager::GrantApplicationResources(this, a2);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
