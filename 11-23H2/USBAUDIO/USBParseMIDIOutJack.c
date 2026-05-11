/*
 * XREFs of USBParseMIDIOutJack @ 0x1C0035A00
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C003101C (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0034DA0 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0035384 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C003559C (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v12; // rbp
  int v13; // r15d
  __int64 Pool2; // rax
  int *v15; // r12
  unsigned int v16; // ecx
  __int64 v17; // r8
  int v18; // eax
  const WCHAR *v20; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v20 = 0LL;
  v7 = *(_QWORD *)(v3 + 72);
  v8 = *a3;
  if ( (unsigned __int8)v8 >= 6u )
  {
    v9 = a3[5];
    if ( v8 >= 2 * v9 + 7
      && (unsigned __int64)&a3[2 * v9 + 7] <= *(_QWORD *)(v7 + 40)
                                            + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL) )
    {
      if ( a3[3] == 1 )
        PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a3, 1);
      else
        PinIndexForStreamingTerminal = -1;
      UnitString = USBParseGetUnitString(a1, a3, &v20);
      if ( UnitString >= 0 )
      {
        v12 = v20;
        if ( v20 || PinIndexForStreamingTerminal == -1 )
        {
LABEL_12:
          v13 = *(unsigned __int8 *)(a2 + 2) << 8;
          Pool2 = ExAllocatePool2(256LL, 4LL * a3[5], 1096972357LL);
          v15 = (int *)Pool2;
          UnitString = -1073741670;
          if ( Pool2 )
          {
            LOBYTE(v16) = a3[5];
            v17 = 0LL;
            if ( (_BYTE)v16 )
            {
              do
              {
                *(_DWORD *)(Pool2 + 4 * v17) = v13 | a3[2 * v17 + 6];
                v17 = (unsigned int)(v17 + 1);
                v16 = a3[5];
              }
              while ( (unsigned int)v17 < v16 );
            }
            v18 = 257;
            if ( a3[3] != 1 )
              v18 = 2305;
            UnitString = BusApiBuildTerminalFunctionUnit(
                           a1,
                           v13 | (unsigned int)a3[4],
                           1,
                           0,
                           0,
                           (unsigned __int8)v16,
                           v15,
                           v12,
                           0LL,
                           v18,
                           2,
                           PinIndexForStreamingTerminal);
            ExFreePool(v15);
          }
          return (unsigned int)UnitString;
        }
        UnitString = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v20);
        if ( UnitString >= 0 )
        {
          v12 = v20;
          goto LABEL_12;
        }
      }
      return (unsigned int)UnitString;
    }
  }
  return 3221225858LL;
}
