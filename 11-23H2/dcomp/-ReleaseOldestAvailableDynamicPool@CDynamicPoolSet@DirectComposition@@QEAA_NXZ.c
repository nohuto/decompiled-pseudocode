/*
 * XREFs of ?ReleaseOldestAvailableDynamicPool@CDynamicPoolSet@DirectComposition@@QEAA_NXZ @ 0x180039708
 * Callers:
 *     ?CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z @ 0x180026B30 (-CapMaximumAllocations@CSurfaceManager@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ @ 0x18001FE50 (-IsAvailable@CAtlasSurfacePool@DirectComposition@@QEBA_NXZ.c)
 *     ?RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z @ 0x1800396D8 (-RemoveDynamicPool@CDynamicPoolSet@DirectComposition@@AEAAXPEAVCDynamicPool@2@@Z.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x1800EA32C (McTemplateU0xqq_EventWriteTransfer.c)
 */

bool __fastcall DirectComposition::CDynamicPoolSet::ReleaseOldestAvailableDynamicPool(
        DirectComposition::CDynamicPoolSet *this)
{
  char *v1; // r8
  char *v2; // rax
  struct DirectComposition::CDynamicPool *v3; // rbx
  char *v5; // rdx
  struct DirectComposition::CDynamicPool *v6; // rdx
  __int64 v7; // rcx

  v1 = (char *)this + 32;
  v2 = (char *)*((_QWORD *)this + 4);
  v3 = 0LL;
  while ( 1 )
  {
    v5 = v2 - 16;
    if ( v2 == v1 )
      v5 = 0LL;
    if ( !v5 )
      break;
    if ( DirectComposition::CAtlasSurfacePool::IsAvailable(*((DirectComposition::CAtlasSurfacePool **)v5 + 4)) )
    {
      v3 = v6;
      if ( v6 )
      {
        if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
          McTemplateU0xqq_EventWriteTransfer(
            HIDWORD(*(_QWORD *)(v7 + 152)),
            (unsigned int)&DCOMPEVENT_CAP_RELEASE_SURFACE,
            v7,
            *(_QWORD *)(v7 + 152),
            BYTE4(*(_QWORD *)(v7 + 152)));
        DirectComposition::CDynamicPoolSet::RemoveDynamicPool(this, v3);
      }
      return v3 != 0LL;
    }
    v2 = (char *)*((_QWORD *)v6 + 2);
  }
  return v3 != 0LL;
}
