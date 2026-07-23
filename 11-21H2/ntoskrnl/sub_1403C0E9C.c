/*
 * XREFs of sub_1403C0E9C @ 0x1403C0E9C
 * Callers:
 *     sub_140B01F80 @ 0x140B01F80 (sub_140B01F80.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 */

char __fastcall sub_1403C0E9C(_PROCESSOR_NUMBER *a1)
{
  __int64 v1; // rax

  if ( (dword_140D06AC4 & 0x10) != 0 )
    return 0;
  v1 = qword_140D088C0[KeGetProcessorIndexFromNumber(a1)];
  if ( dword_140D068FC )
    return *(_BYTE *)(v1 + 34056);
  else
    return *(_BYTE *)(v1 + 34059);
}
