/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x1409F26A8
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x1408A8F40 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextGetModule @ 0x1409F128C (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1409F2114 (EtwpCovSampContextRemoveAndFreeModule.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409F2804 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    EtwpCovSampModuleNameInfoCleanup(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
