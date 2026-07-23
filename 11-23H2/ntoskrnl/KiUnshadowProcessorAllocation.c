/*
 * XREFs of KiUnshadowProcessorAllocation @ 0x140A9FB8C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     MmDeleteShadowMapping @ 0x140A3CA80 (MmDeleteShadowMapping.c)
 */

char __fastcall KiUnshadowProcessorAllocation(__int64 a1, __int64 a2, _QWORD *a3)
{
  char result; // al
  _QWORD *v6; // rbx
  __int64 v7; // rsi

  if ( KiKvaShadow )
  {
    MmDeleteShadowMapping(*(_QWORD *)(a2 + 88) - 12208LL, 0x5000uLL);
    result = MmDeleteShadowMapping(a1 + 40576, 0x1000uLL);
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v6 = a3 + 24;
      v7 = 4LL;
      do
      {
        MmDeleteShadowMapping(*v6++ - 0x2000LL, 0x1000uLL);
        --v7;
      }
      while ( v7 );
      MmDeleteShadowMapping(a3[28], 0x1000uLL);
      return MmDeleteShadowMapping(a3[17] - 0x2000LL, 0x1000uLL);
    }
  }
  return result;
}
