/*
 * XREFs of AslpFilePartialViewFree @ 0x1800A14A4
 * Callers:
 *     AslpFileLargeMapDelete @ 0x1800A142C (AslpFileLargeMapDelete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AslpFilePartialViewFree(__int64 a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      result = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(PVOID *)a1);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  return result;
}
