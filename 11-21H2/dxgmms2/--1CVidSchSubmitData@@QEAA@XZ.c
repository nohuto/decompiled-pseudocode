/*
 * XREFs of ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C001B9AC
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C001B5B8 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVidSchSubmitData::~CVidSchSubmitData(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rdi
  __int64 v2; // rbx

  v1 = *this;
  if ( *this )
  {
    v2 = (__int64)&this[1][80];
    ++*(_DWORD *)(v2 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v2) >= *(_WORD *)(v2 + 16) )
    {
      ++*(_DWORD *)(v2 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v2 + 56))(v1, v2);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v2, v1);
    }
  }
}
