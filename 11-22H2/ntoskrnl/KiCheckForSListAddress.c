/*
 * XREFs of KiCheckForSListAddress @ 0x14030FC00
 * Callers:
 *     KiDeliverApc @ 0x14030F6B0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140424840 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140424BA0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140424F00 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425260 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404255C0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14042BF80 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140430280 (KiMcheckAbort.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14054BAE0 (VslKernelShadowStackAssist.c)
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
