/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x180045B38
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x180045BC0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180042104 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x180047F78 (RtlpHpVsChunkSetExtraPresent.c)
 */

unsigned __int8 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  unsigned __int8 result; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rcx

  v4 = RtlpHpSegDescriptorValidate(a1, a2);
  result = *(_BYTE *)(v4 + 24) & 0xC;
  if ( result < 8u )
  {
    *(_WORD *)(v4 + 8) |= 1u;
  }
  else
  {
    v6 = (v4 & *(_QWORD *)a1) + ((v4 - (v4 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( result == 8 )
    {
      v7 = (unsigned __int16)qword_180187F48 ^ *(unsigned __int16 *)(v6 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v6 >> 12);
      result = 0;
      *(_WORD *)(v7 + a2 - 2) |= 0x4000u;
    }
    else
    {
      return RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(a1 + 32), a2, v6);
    }
  }
  return result;
}
