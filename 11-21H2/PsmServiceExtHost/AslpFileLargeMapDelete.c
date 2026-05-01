/*
 * XREFs of AslpFileLargeMapDelete @ 0x1800A6944
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A61E8 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslpFileLargeMapCreate @ 0x1800A6714 (AslpFileLargeMapCreate.c)
 * Callees:
 *     AslpFilePartialViewFree @ 0x1800A69BC (AslpFilePartialViewFree.c)
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
