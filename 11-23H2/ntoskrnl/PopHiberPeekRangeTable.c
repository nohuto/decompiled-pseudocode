/*
 * XREFs of PopHiberPeekRangeTable @ 0x140AA3150
 * Callers:
 *     ConsumerPeekAndConsumeBuffer @ 0x140AA15E4 (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     PopReadProducerConsumerBuffer @ 0x140AA388C (PopReadProducerConsumerBuffer.c)
 */

__int64 __fastcall PopHiberPeekRangeTable(int a1, int a2, __int64 a3)
{
  _DWORD *ProducerConsumerBuffer; // rax
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                       a1,
                                       a2,
                                       (unsigned int)&v5,
                                       (_DWORD)qword_140C3CFF8,
                                       a3,
                                       0);
  return ((*ProducerConsumerBuffer >> 8) & 0x3FFFFF) + 8 * (unsigned int)(unsigned __int8)*ProducerConsumerBuffer + 4;
}
