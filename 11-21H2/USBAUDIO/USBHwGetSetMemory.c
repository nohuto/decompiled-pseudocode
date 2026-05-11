/*
 * XREFs of USBHwGetSetMemory @ 0x1C0033DB0
 * Callers:
 *     USBParseGetMicArrayDescriptor @ 0x1C0037794 (USBParseGetMicArrayDescriptor.c)
 *     USBCntrlGetSetMem @ 0x1C0039450 (USBCntrlGetSetMem.c)
 * Callees:
 *     USBHwGetSetProperty @ 0x1C0033E28 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBHwGetSetMemory(
        int a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        __int16 a5,
        __int16 a6,
        int a7,
        __int64 a8)
{
  __int16 v9; // [rsp+30h] [rbp-28h]

  v9 = a4;
  LOBYTE(a4) = a2;
  return USBHwGetSetProperty(a1, (a3 != 0) + 27, a2 >> 7, a4, 0, a6, v9, a5, a8, a7);
}
