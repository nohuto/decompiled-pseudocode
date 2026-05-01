/*
 * XREFs of ??4ThumbnailData@MultitaskingViewAnimationCoordinatorBase@@QEAAAEAU01@AEBU01@@Z @ 0x1804C8FF4
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804CA3A0 (-GetVisualForWindow@MultitaskingViewAnimationCoordinatorBase@@UEAAJPEAUHWND__@@PEAPEAUIDCompThum.c)
 * Callees:
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 *__fastcall MultitaskingViewAnimationCoordinatorBase::ThumbnailData::operator=(__int64 *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<ISnappedWindow>::operator=(a1, a2);
  Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(a1 + 1, a2 + 1);
  return a1;
}
