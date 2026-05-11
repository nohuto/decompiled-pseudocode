/*
 * XREFs of USBParseMIDIOutJack @ 0x1C00380C0
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C0031DEC (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0037348 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0037A50 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v9; // rbp
  int v10; // r15d
  __int64 Pool2; // rax
  int *v12; // r12
  unsigned int v13; // ecx
  __int64 v14; // r8
  int v15; // eax
  const WCHAR *v17; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v17 = 0LL;
  if ( a3[3] == 1 )
    PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(*(_QWORD *)(v3 + 72), a3, 1);
  else
    PinIndexForStreamingTerminal = -1;
  UnitString = USBParseGetUnitString(a1, a3, &v17);
  if ( UnitString >= 0 )
  {
    v9 = v17;
    if ( !v17 && PinIndexForStreamingTerminal != -1 )
    {
      UnitString = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v17);
      if ( UnitString < 0 )
        return (unsigned int)UnitString;
      v9 = v17;
    }
    v10 = *(unsigned __int8 *)(a2 + 2) << 8;
    Pool2 = ExAllocatePool2(256LL, 4LL * a3[5], 1096972357LL);
    v12 = (int *)Pool2;
    UnitString = -1073741670;
    if ( Pool2 )
    {
      LOBYTE(v13) = a3[5];
      v14 = 0LL;
      if ( (_BYTE)v13 )
      {
        do
        {
          *(_DWORD *)(Pool2 + 4 * v14) = v10 | a3[2 * v14 + 6];
          v14 = (unsigned int)(v14 + 1);
          v13 = a3[5];
        }
        while ( (unsigned int)v14 < v13 );
      }
      v15 = 257;
      if ( a3[3] != 1 )
        v15 = 2305;
      UnitString = BusApiBuildTerminalFunctionUnit(
                     a1,
                     v10 | (unsigned int)a3[4],
                     1,
                     0,
                     0,
                     (unsigned __int8)v13,
                     v12,
                     v9,
                     0LL,
                     v15,
                     2,
                     PinIndexForStreamingTerminal);
      ExFreePool(v12);
    }
  }
  return (unsigned int)UnitString;
}
