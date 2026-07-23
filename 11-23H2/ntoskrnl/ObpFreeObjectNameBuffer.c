/*
 * XREFs of ObpFreeObjectNameBuffer @ 0x1406C2F30
 * Callers:
 *     ObReferenceObjectByName @ 0x1406C2C80 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ObpFreeObjectNameBuffer(__int64 a1)
{
  _SLIST_ENTRY *v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  v1 = *(_SLIST_ENTRY **)(a1 + 8);
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
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  else
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
  }
}
