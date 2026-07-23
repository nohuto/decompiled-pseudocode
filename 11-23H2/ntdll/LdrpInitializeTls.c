/*
 * XREFs of LdrpInitializeTls @ 0x1800042A0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpAllocateTlsEntry @ 0x180004A84 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x180005010 (RtlSetBits.c)
 *     RtlClearBits @ 0x180008260 (RtlClearBits.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpAllocateTls @ 0x1800295AC (LdrpAllocateTls.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

NTSTATUS LdrpInitializeTls()
{
  __int64 *v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  int v3; // eax
  __int64 v4; // rbp
  ULONG v5; // ebx
  NTSTATUS result; // eax
  unsigned int *v7; // rax
  PVOID Heap; // rax
  ULONG NumberToSet; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp-30h] BYREF
  __int64 HeapInformation; // [rsp+60h] [rbp-28h] BYREF

  HeapInformation = 0x70616548534C54LL;
  if ( !qword_180187418 )
  {
    LdrpTlsHeap = NtCurrentPeb()->ProcessHeap;
    goto LABEL_3;
  }
  Heap = RtlCreateHeap(2u, 0LL, 0LL, 0LL, 0LL, 0LL);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return -1073741801;
  result = RtlSetHeapInformation(Heap, HeapTag, &HeapInformation, 8uLL);
  if ( result >= 0 || AvrfAppVerifierMode )
  {
LABEL_3:
    v0 = (__int64 *)qword_180187450;
    NumberToSet = 0;
    if ( (__int64 *)qword_180187450 == &qword_180187450 )
      goto LABEL_12;
    v1 = 1LL;
    do
    {
      v2 = v0;
      v0 = (__int64 *)*v0;
      if ( *((_DWORD *)v2 + 67) != 9 )
      {
        RtlImageNtHeaderEx(3u, (PVOID)v2[6], 0LL, &OutHeaders);
        if ( OutHeaders->OptionalHeader.Magic == 523 )
        {
          v3 = RtlpImageDirectoryEntryToDataEx((PVOID)v2[6], (__int64)&v10);
          v4 = v10;
          if ( v3 < 0 )
            v4 = 0LL;
          v10 = v4;
          if ( v4 )
          {
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrtls.c",
              662,
              (unsigned int)"LdrpInitializeTls",
              2,
              "DLL \"%wZ\" has TLS information at %p\n",
              v2 + 9,
              v4);
            result = LdrpAllocateTlsEntry(v4, (_DWORD)v2, (unsigned int)&NumberToSet, 0, 0LL);
            if ( result < 0 )
              return result;
            *((_WORD *)v2 + 55) = -1;
          }
        }
      }
    }
    while ( v0 != &qword_180187450 );
    v5 = NumberToSet;
    if ( !NumberToSet )
    {
LABEL_12:
      LdrpTlsBitmap.SizeOfBitMap = 0;
      LdrpTlsBitmap.Buffer = 0LL;
      return LdrpAllocateTls();
    }
    if ( NumberToSet + 8 <= 0x20 )
    {
      v7 = (unsigned int *)&LdrpStaticTlsBitmapVector;
LABEL_19:
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
      goto LABEL_19;
    return -1073741801;
  }
  return result;
}
