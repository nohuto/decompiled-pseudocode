/*
 * XREFs of EtwExitProcess @ 0x1407E0C78
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     EtwpCovSampProcessCleanup @ 0x1409F1CB0 (EtwpCovSampProcessCleanup.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwExitProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // rcx
  void *v5; // rbx

  v2 = *(_QWORD *)(a1 + 1424);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1424) = 0LL;
    if ( *(_QWORD *)v2 )
      ObfDereferenceObject(*(PVOID *)v2);
    v4 = *(void **)(v2 + 8);
    if ( v4 )
      ObfDereferenceObject(v4);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  v5 = *(void **)(a1 + 2544);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 2544) = 0LL;
    LOBYTE(a2) = 1;
    EtwpCovSampProcessCleanup(v5, a2);
    ExFreePoolWithTag(v5, 0x56777445u);
  }
}
