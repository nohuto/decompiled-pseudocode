/*
 * XREFs of AlpcInitializeHandleTable @ 0x140717BA0
 * Callers:
 *     AlpcpCreateClientPort @ 0x140717744 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC318 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B30 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall AlpcInitializeHandleTable(__int64 a1)
{
  PVOID v2; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = ExAllocateFromNPagedLookasideList(&stru_140D0BEC0);
  *(_QWORD *)a1 = v2;
  if ( !v2 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 16) = 16LL;
  memset(v2, 0, 0x80uLL);
  return 0LL;
}
