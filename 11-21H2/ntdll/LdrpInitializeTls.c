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

__int64 LdrpInitializeTls()
{
  __int64 *v0; // rdi
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 result; // rax
  void *v7; // rax
  __int64 Heap; // rax
  unsigned int v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10; // [rsp+48h] [rbp-40h] BYREF
  int v11; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF

  v13 = 0x70616548534C54LL;
  if ( !qword_18017A118 )
  {
    LdrpTlsHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    goto LABEL_3;
  }
  Heap = RtlCreateHeap(2u, 0LL, 0LL, 0LL, 0LL, 0LL);
  LdrpTlsHeap = Heap;
  if ( !Heap )
    return 3221225495LL;
  result = RtlSetHeapInformation(Heap, 7LL, &v13);
  if ( (int)result >= 0 )
  {
LABEL_3:
    v0 = (__int64 *)qword_18017A150;
    v9 = 0;
    if ( (__int64 *)qword_18017A150 == &qword_18017A150 )
      goto LABEL_11;
    v1 = 1LL;
    do
    {
      v2 = (__int64)v0;
      v0 = (__int64 *)*v0;
      RtlImageNtHeaderEx(3, *(_QWORD *)(v2 + 48), 0LL, &v12);
      if ( *(_WORD *)(v12 + 24) == 523 )
      {
        v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v2 + 48), 1, 9u, &v11, (__int64)&v10);
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
          result = LdrpAllocateTlsEntry(v4, v2, (int *)&v9, 0LL, 0LL);
          if ( (int)result < 0 )
            return result;
          *(_WORD *)(v2 + 110) = -1;
        }
      }
    }
    while ( v0 != &qword_18017A150 );
    v5 = v9;
    if ( !v9 )
    {
LABEL_11:
      LdrpTlsBitmap = 0;
      Src = 0LL;
      return LdrpAllocateTls();
    }
    if ( v9 + 8 <= 0x20 )
    {
      v7 = &LdrpStaticTlsBitmapVector;
LABEL_18:
      LdrpActualBitmapSize = v1;
      LdrpTlsBitmap = v5 + 8;
      Src = v7;
      RtlSetBits((__int64)&LdrpTlsBitmap, 0, v5);
      RtlClearBits(&LdrpTlsBitmap, v5, 8LL);
      return LdrpAllocateTls();
    }
    v1 = ((unsigned __int64)(v9 + 8) + 31) >> 5;
    v7 = (void *)RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 4 * v1);
    if ( v7 )
      goto LABEL_18;
    return 3221225495LL;
  }
  return result;
}
