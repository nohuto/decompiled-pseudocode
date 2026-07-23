/*
 * XREFs of LdrpAcquireTlsIndex @ 0x18003132C
 * Callers:
 *     LdrpAllocateTlsEntry @ 0x1800311E4 (LdrpAllocateTlsEntry.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlFindClearBitsAndSet @ 0x180030DF0 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x18007A830 (RtlClearBits.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall LdrpAcquireTlsIndex(unsigned int *a1, _BYTE *a2)
{
  unsigned int SizeOfBitMap; // ebx
  ULONG ClearBitsAndSet; // eax
  unsigned int *Heap; // rax
  unsigned int *v8; // r14

  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    LdrpTlsBitmap.SizeOfBitMap = 8;
    LdrpTlsBitmap.Buffer = (unsigned int *)&LdrpStaticTlsBitmapVector;
    LdrpActualBitmapSize = 1LL;
LABEL_6:
    RtlClearBits(&LdrpTlsBitmap, SizeOfBitMap + 1, 7u);
    _bittestandset((signed __int32 *)LdrpTlsBitmap.Buffer, SizeOfBitMap);
    *a1 = SizeOfBitMap;
    *a2 = 1;
    return 0LL;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSet(&LdrpTlsBitmap, 1u, 0);
  if ( ClearBitsAndSet != -1 )
  {
    *a1 = ClearBitsAndSet;
    *a2 = 0;
    return 0LL;
  }
  if ( ((unsigned __int64)(LdrpTlsBitmap.SizeOfBitMap + 8) + 31) >> 5 <= LdrpActualBitmapSize )
  {
    LdrpTlsBitmap.SizeOfBitMap += 8;
    goto LABEL_6;
  }
  Heap = (unsigned int *)RtlAllocateHeap(
                           LdrpTlsHeap,
                           NtdllBaseTag + 786432,
                           4 * (((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5));
  v8 = Heap;
  if ( Heap )
  {
    LdrpActualBitmapSize = ((unsigned __int64)(SizeOfBitMap + 8) + 31) >> 5;
    memmove(Heap, LdrpTlsBitmap.Buffer, (unsigned __int64)(SizeOfBitMap + 7) >> 3);
    if ( (_UNKNOWN *)LdrpTlsBitmap.Buffer != &LdrpStaticTlsBitmapVector )
      RtlFreeHeap(LdrpTlsHeap, 0, LdrpTlsBitmap.Buffer);
    LdrpTlsBitmap.SizeOfBitMap = SizeOfBitMap + 8;
    LdrpTlsBitmap.Buffer = v8;
    goto LABEL_6;
  }
  return 3221225495LL;
}
