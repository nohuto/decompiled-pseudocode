/*
 * XREFs of AslpFileLargeMapDelete @ 0x1800A10BC
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A08FC (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x1800A0E8C (AslpFileLargeMapCreate.c)
 * Callees:
 *     AslpFilePartialViewFree @ 0x1800A1134 (AslpFilePartialViewFree.c)
 */

BOOLEAN __fastcall AslpFileLargeMapDelete(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  BOOLEAN result; // al

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      AslpFilePartialViewFree(v1 + 5);
      AslpFilePartialViewFree(v1 + 2);
      v3 = (void *)v1[1];
      if ( v3 )
        ZwClose(v3);
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
      *a1 = 0LL;
    }
  }
  return result;
}
