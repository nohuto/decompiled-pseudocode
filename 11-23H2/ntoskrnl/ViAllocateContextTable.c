/*
 * XREFs of ViAllocateContextTable @ 0x140AC400C
 * Callers:
 *     VfInsertContext @ 0x1405CE9B0 (VfInsertContext.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 */

char *__fastcall ViAllocateContextTable(__int16 a1)
{
  char *result; // rax

  result = (char *)ExAllocateFromNPagedLookasideList(&ViObjectContextTableLookaside);
  if ( result )
  {
    *((_DWORD *)result + 1) = 0;
    *((_WORD *)result + 1) = 6;
    *(_WORD *)result = a1;
    *(_OWORD *)(result + 8) = 0LL;
  }
  return result;
}
