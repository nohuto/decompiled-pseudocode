/*
 * XREFs of VfAvlReserveNode @ 0x14020A26C
 * Callers:
 *     VfTargetDriversAdd @ 0x14020A190 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140AD2460 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD2640 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140AE2260 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140AE4604 (VfTrackResource.c)
 * Callees:
 *     ViAvlNodeInitializeSessionId @ 0x14020A2F8 (ViAvlNodeInitializeSessionId.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *Pool2; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    Pool2 = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, v3, 1413572182LL);
  if ( !Pool2 )
    return 0LL;
  v8 = (char *)(Pool2 + 4);
  Pool2[4] = a2;
  if ( !a3 )
    a3 = *a1;
  Pool2[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, Pool2 + 4);
  return v8;
}
