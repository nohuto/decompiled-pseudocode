/*
 * XREFs of USBParseTerminalUnit @ 0x1C003E8A0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C003101C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0035248 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0035384 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C003E648 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C003E770 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r14d
  int PinIndexForStreamingTerminal; // r15d
  int UnitString; // edx
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  _WORD *v12; // rdi
  int MicArrayDescriptor; // eax
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+50h] BYREF
  int v20; // [rsp+C0h] [rbp+58h] BYREF
  const WCHAR *v21; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v21 = 0LL;
  PinIndexForStreamingTerminal = -1;
  v19 = 0LL;
  UnitString = 0;
  v8 = *(_QWORD *)(v2 + 72);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 2LL);
  v11 = *a2;
  if ( a2[2] == 2 )
  {
    if ( (unsigned __int8)v11 >= 0xCu && (unsigned __int64)&a2[v11] <= v10 )
    {
      v12 = a2 + 4;
      v18 = -1;
      if ( *((_WORD *)a2 + 2) == 517 )
      {
        MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, (__int64)a2, &v19);
        v9 = v19;
        UnitString = MicArrayDescriptor;
        if ( MicArrayDescriptor == -1073741275 )
          UnitString = 0;
      }
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      goto LABEL_12;
    }
  }
  else if ( (unsigned __int8)v11 >= 9u && (unsigned __int64)&a2[v11] <= v10 )
  {
    v12 = a2 + 4;
    v18 = a2[7];
    v3 = 1;
LABEL_12:
    UnitString = USBParseGetUnitString(a1, a2, &v21);
    if ( UnitString >= 0 )
    {
      v14 = a2[3];
      v15 = *(_QWORD *)(v8 + 48);
      v16 = *(_QWORD *)(v8 + 40);
      v20 = 0;
      LODWORD(v19) = 0;
      UnitString = USBParseCountOutputChannelsForUnit(v16, v15, v14, &v20);
      if ( UnitString >= 0 )
      {
        UnitString = USBParseGetChannelConfigForUnit(*(_QWORD *)(v8 + 40), *(_QWORD *)(v8 + 48), a2[3], &v19);
        if ( UnitString >= 0 )
        {
          if ( *v12 == 257 )
            PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v8, a2, 0);
          return (unsigned int)BusApiBuildTerminalFunctionUnit(
                                 a1,
                                 a2[3],
                                 v3,
                                 v20,
                                 v19,
                                 v3,
                                 &v18,
                                 v21,
                                 v9,
                                 (unsigned __int16)*v12,
                                 1,
                                 PinIndexForStreamingTerminal);
        }
      }
    }
    return (unsigned int)UnitString;
  }
  return 3221225473LL;
}
