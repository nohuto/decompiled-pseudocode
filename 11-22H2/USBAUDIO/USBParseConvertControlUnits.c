/*
 * XREFs of USBParseConvertControlUnits @ 0x1C0033A0C
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x1C0034000 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     USBParseFindDescriptor @ 0x1C003475C (USBParseFindDescriptor.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseConvertControlUnits(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned __int8 *v8; // rsi
  unsigned __int8 *Descriptor; // rdi

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v6 = *(_QWORD *)(v5 + 40);
  AudioSpecificInterface = (unsigned __int8 *)USBParseGetAudioSpecificInterface(v6, *(_QWORD *)(v5 + 48), a3, 8LL);
  v8 = AudioSpecificInterface;
  if ( AudioSpecificInterface )
  {
    Descriptor = (unsigned __int8 *)USBParseFindDescriptor(
                                      v6,
                                      AudioSpecificInterface,
                                      *(unsigned __int16 *)(AudioSpecificInterface + 5),
                                      &AudioSpecificInterface[*AudioSpecificInterface]);
    while ( Descriptor )
    {
      if ( v4 < 0 )
        break;
      if ( (unsigned __int8)(Descriptor[2] - 2) <= 6u )
      {
        v4 = USBParseUnitMap[Descriptor[2]](a1, Descriptor);
        if ( v4 >= 0 )
          Descriptor = (unsigned __int8 *)USBParseFindDescriptor(
                                            v6,
                                            v8,
                                            *(unsigned __int16 *)(v8 + 5),
                                            &Descriptor[*Descriptor]);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v4;
}
