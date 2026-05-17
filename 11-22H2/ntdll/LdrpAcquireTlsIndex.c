/*
 * XREFs of LdrpAcquireTlsIndex @ 0x180004BD8
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x180004A90 (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x180004D50 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x180007E80 (RtlClearBits.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(_DWORD *a1, _BYTE *a2)
{
  unsigned __int64 v2; // rbx
  int ClearBitsAndSet; // eax
  void *Heap; // rax
  void *v8; // r14

  v2 = (unsigned int)LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    LdrpTlsBitmap = 8;
    Src = &LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
LABEL_6:
    RtlClearBits(&LdrpTlsBitmap, (unsigned int)(v2 + 1), 7LL);
    *((_BYTE *)Src + (v2 >> 3)) |= 1 << (v2 & 7);
    *a1 = v2;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1LL);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(unsigned int)(LdrpTlsBitmap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap += 8;
    goto LABEL_6;
  }
  Heap = (void *)RtlAllocateHeap(
                   LdrpTlsHeap,
                   (unsigned int)(NtdllBaseTag + 786432),
                   4 * (((unsigned __int64)(unsigned int)(v2 + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    LdrpActualBitmapSize = ((unsigned __int64)(unsigned int)(v2 + 8) + 31) >> 5;
    memmove(Heap, Src, (unsigned __int64)(unsigned int)(v2 + 7) >> 3);
    if ( Src != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap(LdrpTlsHeap, 0LL, Src);
    LdrpTlsBitmap = v2 + 8;
    Src = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
