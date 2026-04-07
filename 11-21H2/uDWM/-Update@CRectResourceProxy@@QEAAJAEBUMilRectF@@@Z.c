/*
 * XREFs of ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18001A19C
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180019D90 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180019FF0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800B32B0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE5B4 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE7E4 (-UpdateSourceRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectResourceProxy::Update(CRectResourceProxy *this, const struct MilRectF *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilRectF *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 296LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
