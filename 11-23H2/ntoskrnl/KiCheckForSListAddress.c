/*
 * XREFs of KiCheckForSListAddress @ 0x140310070
 * Callers:
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140425290 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1404255F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425950 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425CB0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140426010 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426EB0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427DB0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14042C980 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140430C80 (KiMcheckAbort.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14054C100 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = qword_140D1F378;
    if ( v2 > qword_140D1F378 && v2 <= qword_140D1F368 )
      *(_QWORD *)(a1 + 360) = qword_140D1F378;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
      if ( (_BYTE)KiKernelCetEnabled )
        return VslKernelShadowStackAssist(
                 3,
                 *(_QWORD *)(a1 + 216),
                 0,
                 0,
                 (__int64)&ExpInterlockedPopEntrySListResume,
                 4);
    }
  }
  return result;
}
