/*
 * XREFs of CmpStartKcbStack @ 0x1407C07F4
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x14065C7A4 (CmpSubtreeEnumeratorStart.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1407C0690 (CmpConstructNameWithStatus.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // ebx
  PVOID v7; // rbp
  SIZE_T v9; // r14
  PVOID TransientPoolWithTag; // rax

  v4 = 0;
  v7 = 0LL;
  if ( a2 > 1 )
  {
    v9 = 8LL * (unsigned int)(a2 - 1);
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v9, 0x35364D43u, a4);
    v7 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return (unsigned int)-1073741670;
    memset(TransientPoolWithTag, 0, v9);
  }
  *(_WORD *)a1 = a2;
  *(_WORD *)(a1 + 2) = -1;
  *(_QWORD *)(a1 + 24) = v7;
  return v4;
}
