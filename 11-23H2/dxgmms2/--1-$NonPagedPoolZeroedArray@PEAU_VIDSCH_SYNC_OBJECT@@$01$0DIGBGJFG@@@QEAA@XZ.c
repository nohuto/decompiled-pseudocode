/*
 * XREFs of ??1?$NonPagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$01$0DIGBGJFG@@@QEAA@XZ @ 0x1C002D6B0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007CC0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044880 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0085AA0 (VidSchEnqueueCpuEvent.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00959C0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
