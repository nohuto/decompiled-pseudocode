/*
 * XREFs of USBParseTerminalUnit @ 0x1C0038820
 * Callers:
 *     <none>
 * Callees:
 *     BusApiBuildTerminalFunctionUnit @ 0x1C0031DEC (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseCountOutputChannelsForUnit @ 0x1C00364FC (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1C0036F38 (USBParseGetChannelConfigForUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C0037794 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C0037A50 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1C0037D04 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int PinIndexForStreamingTerminal; // r12d
  bool v4; // zf
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 result; // rax
  unsigned __int16 v11; // ax
  int v12; // ebx
  int ChannelConfigForUnit; // edi
  int v14; // eax
  int v15; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+10h] BYREF
  const WCHAR *v17; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  PinIndexForStreamingTerminal = -1;
  v17 = 0LL;
  v4 = *(_BYTE *)(a2 + 2) == 2;
  v16 = 0LL;
  v7 = *(_QWORD *)(v2 + 72);
  v8 = 0LL;
  if ( !v4 )
  {
    v9 = 1;
    v15 = *(unsigned __int8 *)(a2 + 7);
LABEL_8:
    result = USBParseGetUnitString(a1, (unsigned __int8 *)a2, &v17);
    if ( (int)result >= 0 )
    {
      v11 = *(_WORD *)(a2 + 4);
      if ( v11 == 257 )
      {
        PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, (unsigned __int8 *)a2, 0);
        v11 = *(_WORD *)(a2 + 4);
      }
      v12 = v11;
      ChannelConfigForUnit = USBParseGetChannelConfigForUnit(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48));
      v14 = USBParseCountOutputChannelsForUnit(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48));
      return BusApiBuildTerminalFunctionUnit(
               a1,
               *(unsigned __int8 *)(a2 + 3),
               v9,
               v14,
               ChannelConfigForUnit,
               v9,
               &v15,
               v17,
               v8,
               v12,
               1,
               PinIndexForStreamingTerminal);
    }
    return result;
  }
  v15 = -1;
  v9 = 0;
  if ( *(_WORD *)(a2 + 4) != 517 )
    goto LABEL_8;
  result = USBParseGetMicArrayDescriptor(a1, a2, &v16);
  if ( (_DWORD)result == -1073741275 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    v8 = v16;
    goto LABEL_8;
  }
  return result;
}
