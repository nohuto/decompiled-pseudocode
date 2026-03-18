/*
 * XREFs of NewObjOwner @ 0x1C00285B8
 * Callers:
 *     InitializeNativeNamespace @ 0x1C0027E90 (InitializeNativeNamespace.c)
 *     ParseLoad @ 0x1C0028400 (ParseLoad.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C006581C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C0066970 (NotifyObjectDestruction.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall NewObjOwner(struct _SLIST_ENTRY *a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v3; // ebx
  _SLIST_ENTRY *v4; // rax
  KIRQL v5; // al
  struct _EX_RUNDOWN_REF **v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // rax

  v3 = 0;
  v4 = HeapAlloc(a1, 1314344776, 0x40u);
  *a2 = (struct _EX_RUNDOWN_REF *)v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v5 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v6 = (struct _EX_RUNDOWN_REF **)off_1C007E3A0;
    byte_1C0082260 = v5;
    v7 = *a2;
    if ( *(_UNKNOWN ***)off_1C007E3A0 != &glistObjOwners )
      __fastfail(3u);
    v7[1].Count = (unsigned __int64)off_1C007E3A0;
    v7->Count = (unsigned __int64)&glistObjOwners;
    *v6 = v7;
    off_1C007E3A0 = v7;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C0082260);
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
