/*
 * XREFs of ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800DEB1C
 * Callers:
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800DF630 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800DF780 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800E24B4 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800DD690 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800DE6C4 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::QueueInput(MPCRawInputProvider *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx
  _BYTE *v6; // rdx
  void *v7; // rdx

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogMPCRawInputReport_(v5, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = (_BYTE *)*((_QWORD *)this + 24);
  if ( v6 == *((_BYTE **)this + 25) )
  {
    std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((void **)this + 23, v6, a2);
  }
  else
  {
    memcpy_0(*((void **)this + 24), a2, 0xBC0uLL);
    *((_QWORD *)this + 24) += 3008LL;
  }
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  wil::details::SetEvent(*((wil::details **)this + 9), v7);
  return 0LL;
}
