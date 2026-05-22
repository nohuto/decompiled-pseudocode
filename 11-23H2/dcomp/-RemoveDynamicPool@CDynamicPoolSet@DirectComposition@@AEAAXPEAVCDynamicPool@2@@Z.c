/*
 * XREFs of ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8
 * Callers:
 *     ?DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z @ 0x18001FD40 (-DiscardAgedPools@CDynamicPoolSet@DirectComposition@@QEAAX_NPEAUSurfaceRequestStruct@2@@Z.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ @ 0x180039708 (-ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ.c)
 *     ?TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x1800F7D60 (-TrimPools@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?Remove@?$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAXPEAVCDynamicPool@DirectComposition@@@Z @ 0x1800393A8 (-Remove@-$CLinkTargetedDoubleLinkedList@VCDynamicPool@DirectComposition@@$0BA@$0BA@@@QEAAXPEAVCD.c)
 */

void __fastcall DirectComposition::CDynamicPoolSet::RemoveDynamicPool(
        DirectComposition::CDynamicPoolSet *this,
        struct DirectComposition::CDynamicPool *a2)
{
  volatile signed __int32 *v2; // r9

  if ( *((struct DirectComposition::CDynamicPool **)this + 6) == a2 )
    *((_QWORD *)this + 6) = 0LL;
  CLinkTargetedDoubleLinkedList<DirectComposition::CDynamicPool,16,16>::Remove((_DWORD *)this + 6, (__int64)a2);
  CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
}
