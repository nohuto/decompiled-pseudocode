/*
 * XREFs of LdrpInitializeTls @ 0x18007A64C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlSetBits @ 0x180031140 (RtlSetBits.c)
 *     LdrpAllocateTlsEntry @ 0x1800311E4 (LdrpAllocateTlsEntry.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpAllocateTls @ 0x180042A74 (LdrpAllocateTls.c)
 *     RtlClearBits @ 0x18007A830 (RtlClearBits.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

int LdrpInitializeTls()
{
  __int64 *v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  NTSTATUS v3; // eax
  __int64 v4; // rbp
  ULONG v5; // edi
  int result; // eax
  unsigned int *v7; // rax
  PVOID Heap; // rax
  ULONG NumberToSet; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+50h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp-30h] BYREF
  __int64 HeapInformation; // [rsp+60h] [rbp-28h] BYREF

  HeapInformation = 0x70616548534C54LL;
  if ( !qword_18017A118 )
  {
    LdrpTlsHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_3;
  }
  Heap = RtlCreateHeap(2u, 0LL, 0LL, 0LL, 0LL, 0LL);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return -1073741801;
  result = RtlSetHeapInformation(Heap, HeapTag, &HeapInformation, 8uLL);
  if ( result >= 0 )
  {
LABEL_3:
    v0 = (__int64 *)qword_18017A150;
    NumberToSet = 0;
    if ( (__int64 *)qword_18017A150 == &qword_18017A150 )
      goto LABEL_11;
    v1 = 1LL;
    do
    {
      v2 = (__int64)v0;
      v0 = (__int64 *)*v0;
      RtlImageNtHeaderEx(3u, *(PVOID *)(v2 + 48), 0LL, &OutHeaders);
      if ( OutHeaders->OptionalHeader.Magic == 523 )
      {
        v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v2 + 48), 1, 9u, &v11, (PIMAGE_NT_HEADERS)&v10);
        v4 = v10;
        if ( v3 < 0 )
          v4 = 0LL;
        v10 = v4;
        if ( v4 )
        {
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            641,
            (__int64)"LdrpInitializeTls",
            2u,
            "DLL \"%wZ\" has TLS information at %p\n",
            v2 + 72,
            v4);
          result = LdrpAllocateTlsEntry(v4, v2, (int *)&NumberToSet, 0LL, 0LL);
          if ( result < 0 )
            return result;
          *(_WORD *)(v2 + 110) = -1;
        }
      }
    }
    while ( v0 != &qword_18017A150 );
    v5 = NumberToSet;
    if ( !NumberToSet )
    {
LABEL_11:
      LdrpTlsBitmap.SizeOfBitMap = 0;
      LdrpTlsBitmap.Buffer = 0LL;
      return LdrpAllocateTls();
    }
    if ( NumberToSet + 8 <= 0x20 )
    {
      v7 = (unsigned int *)&LdrpStaticTlsBitmapVector;
LABEL_18:
      LdrpActualBitmapSize = v1;
      LdrpTlsBitmap.SizeOfBitMap = v5 + 8;
      LdrpTlsBitmap.Buffer = v7;
      RtlSetBits(&LdrpTlsBitmap, 0, v5);
      RtlClearBits(&LdrpTlsBitmap, v5, 8u);
      return LdrpAllocateTls();
    }
    v1 = ((unsigned __int64)(NumberToSet + 8) + 31) >> 5;
    v7 = (unsigned int *)RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 4 * v1);
    if ( v7 )
      goto LABEL_18;
    return -1073741801;
  }
  return result;
}
