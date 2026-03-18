/*
 * XREFs of MiCheckSessionPoolAllocations @ 0x1406939A4
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void MiCheckSessionPoolAllocations()
{
  _QWORD *v0; // rbx
  ULONG_PTR v1; // rcx
  void *v2; // rcx

  v0 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  v1 = v0[101];
  if ( v1 )
  {
    ExPoolCleanupExpansionTable(v1, (80LL * v0[102] + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v0[101] = 0LL;
    v0[102] = 0LL;
  }
  v2 = (void *)v0[103];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    v0[103] = 0LL;
  }
}
