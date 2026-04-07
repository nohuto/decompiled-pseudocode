/*
 * XREFs of ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18000A76C
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000A06C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C2914 (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSizeResourceProxy::Update(CSizeResourceProxy *this, const struct MilSizeD *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilSizeD *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 248LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
