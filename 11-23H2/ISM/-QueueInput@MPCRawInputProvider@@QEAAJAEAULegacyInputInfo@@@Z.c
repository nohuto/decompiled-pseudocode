/*
 * XREFs of ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CF95C
 * Callers:
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D0470 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800D05C0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D3594 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180031C78 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     ??$LogMPCRawInputReport@PEAULegacyInputInfo@@@ISMTracing@@SAX$$QEAPEAULegacyInputInfo@@@Z @ 0x1800CE188 (--$LogMPCRawInputReport@PEAULegacyInputInfo@@@ISMTracing@@SAX$$QEAPEAULegacyInputInfo@@@Z.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800CE410 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::QueueInput(MPCRawInputProvider *this, struct LegacyInputInfo *a2)
{
  _BYTE *v4; // rdx
  void *v5; // rdx
  struct LegacyInputInfo *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a2;
  ISMTracing::LogMPCRawInputReport<LegacyInputInfo *>(&v7);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v7 = (MPCRawInputProvider *)((char *)this + 96);
  v4 = (_BYTE *)*((_QWORD *)this + 24);
  if ( v4 == *((_BYTE **)this + 25) )
  {
    std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((void **)this + 23, v4, a2);
  }
  else
  {
    memcpy_0(*((void **)this + 24), a2, 0xBC0uLL);
    *((_QWORD *)this + 24) += 3008LL;
  }
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  wil::details::SetEvent(*((wil::details **)this + 9), v5);
  return 0LL;
}
