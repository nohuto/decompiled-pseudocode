/*
 * XREFs of RtlpHpSegReportBusyBlock @ 0x18008CBFC
 * Callers:
 *     RtlpHpSegWalk @ 0x180063BB0 (RtlpHpSegWalk.c)
 *     RtlpHpSegReportPageRange @ 0x180123EEC (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpExtrasReportBusyBlock @ 0x180123230 (RtlpHpExtrasReportBusyBlock.c)
 */

__int64 __fastcall RtlpHpSegReportBusyBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r11
  __int64 result; // rax

  v5 = (*(_QWORD *)a1 & *(_QWORD *)a2)
     + 32 * ((unsigned __int64)((unsigned int)*(_QWORD *)a2 - (*(_DWORD *)a1 & *(_DWORD *)a2)) >> *(_BYTE *)(a1 + 8));
  *(_WORD *)(a2 + 18) = 1;
  *(_QWORD *)(a2 + 8) = a3;
  result = (unsigned int)v5 & *(_DWORD *)a1;
  *(_BYTE *)(a2 + 16) = a4;
  *(_QWORD *)(a2 + 36) = a4;
  *(_BYTE *)(a2 + 17) = (__int64)(v5 - result) >> 5;
  if ( a5 )
    return RtlpHpExtrasReportBusyBlock(*(_QWORD *)(a1 + 56));
  return result;
}
