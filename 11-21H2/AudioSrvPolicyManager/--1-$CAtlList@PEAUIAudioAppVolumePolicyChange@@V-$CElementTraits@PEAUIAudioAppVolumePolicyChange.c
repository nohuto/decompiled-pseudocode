/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x1800087F0
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x1800457B5 (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x1800457CB (_CApplication--CApplication_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>()
{
  return ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll();
}
