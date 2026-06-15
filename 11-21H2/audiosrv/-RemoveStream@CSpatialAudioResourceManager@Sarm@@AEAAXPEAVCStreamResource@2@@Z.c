/*
 * XREFs of ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1801288F0
 * Callers:
 *     ?OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18000A500 (-OnStreamDisconnectedFromSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@.c)
 *     ?Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ @ 0x180129060 (-Shutdown@CSpatialAudioResourceManager@Sarm@@UEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DB488 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801287A0 (-RemoveAtPos@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudio.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180129318 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18012A420 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18012BDE4 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::RemoveStream(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2)
{
  const char *v4; // r9
  __int64 v5; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::RemoveStream", 0x84u);
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x86,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v4);
  Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(this, a2);
  v5 = *((_QWORD *)a2 + 4);
  Sarm::CStreamResource::Reclaim(a2);
  if ( v5 )
    ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
      (__int64)this + 232,
      v5);
}
