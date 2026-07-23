/*
 * XREFs of HalpSendPccCommand @ 0x140935DD0
 * Callers:
 *     HalpChannelPowerRequest @ 0x140935B5C (HalpChannelPowerRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpStartPccCommand @ 0x140935E3C (HalpStartPccCommand.c)
 */

__int64 __fastcall HalpSendPccCommand(unsigned __int16 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = a1;
  result = HalpStartPccCommand();
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(qword_140C600A0 + 12) = v3;
    *(_DWORD *)qword_140C600A0 = *(_DWORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 4) == 2 )
      *(_DWORD *)(qword_140C600A0 + 8) = *(_DWORD *)(a2 + 16);
    LOBYTE(v5) = 3;
    return (*((__int64 (__fastcall **)(_QWORD, __int64))&xmmword_140C60080 + 1))(
             *((_QWORD *)&xmmword_140C60050 + 1),
             v5);
  }
  return result;
}
