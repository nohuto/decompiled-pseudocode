/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x14065E480
 * Callers:
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14065DF64 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140923D00 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14065E380 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14065E548 (CmpLightWeightUpdateModificationActions.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14065E5A4 (CmpLightWeightDuplicateParentLists.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(
        __int64 a1,
        unsigned int **a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  ULONG_PTR v6; // rbp
  unsigned int *TransientPoolWithTag; // rax
  unsigned int *v8; // rdi
  int updated; // ebx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 0x14uLL, 0x77554D43u, a4);
  v8 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *(_QWORD *)TransientPoolWithTag = 0LL;
    TransientPoolWithTag[2] = 0;
    ++*TransientPoolWithTag;
    TransientPoolWithTag[3] = -1;
    TransientPoolWithTag[4] = -1;
    updated = CmpLightWeightDuplicateParentLists(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
    if ( updated < 0
      || (updated = CmpLightWeightUpdateModificationActions(
                      v8,
                      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL),
                      *(_QWORD *)(a1 + 56)),
          updated < 0) )
    {
      CmpLightWeightCleanupModifyKeyDataUoW(v6, v8);
    }
    else
    {
      updated = 0;
      *a2 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
