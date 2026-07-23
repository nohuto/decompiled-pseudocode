/*
 * XREFs of SpiMax311BufferRxData @ 0x14067D774
 * Callers:
 *     SpiMax311PutByte @ 0x14067D880 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x14067D910 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x14067DAC4 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140D1B160;
  v2 = ((_WORD)qword_140D1B160 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140D1B160) )
  {
    word_140D1B16A[(unsigned int)qword_140D1B160] = a1;
    LODWORD(qword_140D1B160) = v2;
  }
  return result;
}
