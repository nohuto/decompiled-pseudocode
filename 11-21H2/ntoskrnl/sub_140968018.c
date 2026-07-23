/*
 * XREFs of sub_140968018 @ 0x140968018
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_140860DAC @ 0x140860DAC (sub_140860DAC.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 */

_QWORD *__fastcall sub_140968018(__int64 a1)
{
  _QWORD *result; // rax

  result = sub_1402828F0(64, 0x28uLL, 0x78546D4Du);
  if ( result )
  {
    result[3] = 0LL;
    *result = 0LL;
    result[1] = 0LL;
    *((_DWORD *)result + 8) = 1;
    *(_QWORD *)(a1 + 1544) = result;
  }
  return result;
}
