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

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  int v3; // edx
  int v4; // eax
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 result; // rax
  void *v8; // rax
  __int64 Heap; // rax
  unsigned int v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  char v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h] BYREF

  v14 = 0x70616548534C54LL;
  if ( !qword_180187418 )
  {
    LdrpTlsHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    goto LABEL_3;
  }
  Heap = RtlCreateHeap(2LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return 3221225495LL;
  result = RtlSetHeapInformation(Heap, 7LL, &v14);
  if ( (int)result >= 0 || AvrfAppVerifierMode )
  {
LABEL_3:
    v0 = (__int64 *)qword_180187450;
    v10 = 0;
    if ( (__int64 *)qword_180187450 == &qword_180187450 )
      goto LABEL_12;
    v1 = 1LL;
    do
    {
      v2 = v0;
      v0 = (__int64 *)*v0;
      if ( *((_DWORD *)v2 + 67) != 9 )
      {
        RtlImageNtHeaderEx(3LL, v2[6], 0LL, &v13);
        if ( *(_WORD *)(v13 + 24) == 523 )
        {
          LOBYTE(v3) = 1;
          v4 = RtlpImageDirectoryEntryToDataEx(v2[6], v3, 9, (unsigned int)&v12, (__int64)&v11);
          v5 = v11;
          if ( v4 < 0 )
            v5 = 0LL;
          v11 = v5;
          if ( v5 )
          {
            LdrpLogInternal(
              (unsigned int)"minkernel\\ntdll\\ldrtls.c",
              662,
              (unsigned int)"LdrpInitializeTls",
              2,
              "DLL \"%wZ\" has TLS information at %p\n",
              v2 + 9,
              v5);
            result = LdrpAllocateTlsEntry(v5, (_DWORD)v2, (unsigned int)&v10, 0, 0LL);
            if ( (int)result < 0 )
              return result;
            *((_WORD *)v2 + 55) = -1;
          }
        }
      }
    }
    while ( v0 != &qword_180187450 );
    v6 = v10;
    if ( !v10 )
    {
LABEL_12:
      LdrpTlsBitmap = 0;
      Src = 0LL;
      return LdrpAllocateTls();
    }
    if ( v10 + 8 <= 0x20 )
    {
      v8 = &LdrpStaticTlsBitmapVector;
LABEL_19:
      LdrpActualBitmapSize = v1;
      LdrpTlsBitmap = v6 + 8;
      Src = v8;
      RtlSetBits(&LdrpTlsBitmap, 0LL, v6);
      RtlClearBits(&LdrpTlsBitmap, v6, 8LL);
      return LdrpAllocateTls();
    }
    v1 = ((unsigned __int64)(v10 + 8) + 31) >> 5;
    v8 = (void *)RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), 4 * v1);
    if ( v8 )
      goto LABEL_19;
    return 3221225495LL;
  }
  return result;
}
