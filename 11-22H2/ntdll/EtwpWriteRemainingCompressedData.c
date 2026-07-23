/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x18012547C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18005E754 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     NtWriteFile @ 0x18009EEF0 (NtWriteFile.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rsi
  NTSTATUS v8; // edx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 436) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 344);
  v8 = NtWriteFile(
         *(HANDLE *)(a1 + 128),
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)(a1 + 424),
         *(_DWORD *)(a1 + 192),
         (PLARGE_INTEGER)(a1 + 344),
         0LL);
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
