/*
 * XREFs of RtlpUnwindOpSlots @ 0x1800896AC
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180020E30 (RtlpxVirtualUnwind.c)
 *     RtlpUnwindPrologue @ 0x1800214D0 (RtlpUnwindPrologue.c)
 *     RtlpUnwindEpilogue @ 0x180111104 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = RtlpUnwindOpSlotTable[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
