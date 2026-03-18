/*
 * XREFs of ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C003537C
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     hdevEnumerateAll @ 0x1C00C5490 (hdevEnumerateAll.c)
 * Callees:
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C0035700 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall hdevEnumerate<0>(PDEV *this)
{
  __int64 v2; // rbx
  struct _ERESOURCE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdi
  PDEV *v6; // rbp
  struct _ERESOURCE *v7; // rcx
  struct _ERESOURCE *v9; // rcx
  PDEV *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v3 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v3 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16LL);
  if ( this )
  {
    v5 = *(_QWORD *)this;
    v6 = this;
    v10 = this;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 6080LL);
    v10 = (PDEV *)v5;
    v6 = (PDEV *)v5;
  }
  if ( v5 )
  {
    ++*(_DWORD *)(v5 + 8);
    TrackObjectReferenceIncrement(1LL, *(_QWORD *)(v5 + 3520));
  }
  if ( !this )
    goto LABEL_10;
  if ( *((_DWORD *)v6 + 2) > 1u )
  {
    PDEV::DecrementClientReferenceCount(v6);
LABEL_10:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
    v7 = *(struct _ERESOURCE **)(v2 + 8);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
    }
    return v5;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v9 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v10);
  return v5;
}
