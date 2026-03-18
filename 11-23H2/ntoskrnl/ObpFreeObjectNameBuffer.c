/*
 * XREFs of ObpFreeObjectNameBuffer @ 0x1406C2F00
 * Callers:
 *     ObReferenceObjectByName @ 0x1406C2C50 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObjectNameBuffer(__int64 a1)
{
  struct _SLIST_ENTRY *v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  v1 = *(struct _SLIST_ENTRY **)(a1 + 8);
  if ( *(_WORD *)(a1 + 2) == 248 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[5].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[5].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
  }
}
