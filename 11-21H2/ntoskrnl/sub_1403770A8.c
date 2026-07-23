/*
 * XREFs of sub_1403770A8 @ 0x1403770A8
 * Callers:
 *     sub_14074C258 @ 0x14074C258 (sub_14074C258.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14074B878 @ 0x14074B878 (sub_14074B878.c)
 *     sub_14074D308 @ 0x14074D308 (sub_14074D308.c)
 */

char __fastcall sub_1403770A8(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // di
  KIRQL v3; // dl
  PVOID *FileContextSupportPointer; // rdx
  PFSRTL_ADVANCED_FCB_HEADER *v5; // rcx

  v1 = 0;
  if ( !AdvancedHeader[1].FileSize.LowPart )
  {
    v3 = KeAcquireQueuedSpinLock(9uLL);
    if ( *(_DWORD *)(&AdvancedHeader[2].PagingIoResource->26 + 1) )
    {
      KeReleaseQueuedSpinLock(9uLL, v3);
    }
    else
    {
      KeReleaseQueuedSpinLock(9uLL, v3);
      FileContextSupportPointer = AdvancedHeader[1].FileContextSupportPointer;
      if ( FileContextSupportPointer[1] != &AdvancedHeader[1].FileContextSupportPointer
        || (v5 = *(PFSRTL_ADVANCED_FCB_HEADER **)&AdvancedHeader[2].NodeTypeCode,
            *v5 != (PFSRTL_ADVANCED_FCB_HEADER)&AdvancedHeader[1].FileContextSupportPointer) )
      {
        __fastfail(3u);
      }
      *v5 = (PFSRTL_ADVANCED_FCB_HEADER)FileContextSupportPointer;
      FileContextSupportPointer[1] = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].FilterContexts);
      sub_14074B878(AdvancedHeader);
      sub_14074D308(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
