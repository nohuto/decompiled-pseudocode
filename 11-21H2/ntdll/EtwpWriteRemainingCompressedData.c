/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x180123A3C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180090B9C (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x1800A4170 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rbp
  int v8; // edx

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 436) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 344);
  v8 = NtWriteFile();
  if ( v8 >= 0 )
  {
    *v7 += *(unsigned int *)(a1 + 436);
    *a2 = *(_DWORD *)(a1 + 440);
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 440);
  }
  return (unsigned int)v8;
}
