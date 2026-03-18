/*
 * XREFs of CmpFindPathByName @ 0x14071F2D8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140718CA8 (CmpVirtualBranchIsReplicated.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14071A4E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVirtualPathPresent @ 0x140917930 (CmpVirtualPathPresent.c)
 * Callees:
 *     CmpFindPathByNameEx @ 0x140657398 (CmpFindPathByNameEx.c)
 */

char __fastcall CmpFindPathByName(__int64 a1, __m128i *a2, UNICODE_STRING *a3, unsigned int *a4, ULONG_PTR *a5)
{
  return CmpFindPathByNameEx(a1, a2, a3, 0, a4, a5);
}
