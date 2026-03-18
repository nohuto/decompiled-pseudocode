/*
 * XREFs of EtwpInitializeBufferHeader @ 0x1403715B8
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1403713D8 (EtwpAllocateFreeBuffers.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1407F662C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1407F74D0 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140885EE8 (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpPreserveLogger @ 0x1409ED61C (EtwpPreserveLogger.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall EtwpInitializeBufferHeader(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // ax
  __int64 result; // rax

  memset(a2, 0, 0x48uLL);
  a2[2] = 72;
  a2[12] = a2[2];
  *a2 = *((_DWORD *)a1 + 1);
  v4 = *a1;
  *((_WORD *)a2 + 21) = *a1;
  if ( !v4 )
    *((_WORD *)a2 + 21) = -1;
  result = 256LL;
  *((_WORD *)a2 + 26) |= 0x100u;
  return result;
}
