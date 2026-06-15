/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x18001BC08
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x180049418 (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x18004942E (_CApplication--CApplication_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
