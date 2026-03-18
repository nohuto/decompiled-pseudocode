/*
 * XREFs of XmGroup8BitOffset @ 0x140532E00
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmGetOffsetAddress @ 0x1403A50DC (XmGetOffsetAddress.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B9414 (XmGetCodeByte.c)
 *     XmSetDestinationValue @ 0x1403B9568 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup8BitOffset(__int64 a1)
{
  unsigned __int16 *OffsetAddress; // rdi
  unsigned __int8 CodeByte; // al
  bool v4; // zf
  char v5; // dl
  int v6; // ecx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  OffsetAddress = (unsigned __int16 *)XmEvaluateAddressSpecifier(a1, &v8);
  CodeByte = XmGetCodeByte(a1);
  v4 = *(_BYTE *)(a1 + 142) == 0;
  *(_DWORD *)(a1 + 108) = CodeByte;
  if ( v4 )
  {
    v5 = -4;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v5 = -2;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(
                                          a1,
                                          *(_DWORD *)(a1 + 128) + ((CodeByte >> 3) & *(_DWORD *)&v5));
  }
  v6 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v6 = 15;
  *(_DWORD *)(a1 + 108) &= v6;
  XmSetDestinationValue(a1, OffsetAddress);
  result = 1LL;
  *(_DWORD *)(a1 + 124) += v8 & 3;
  return result;
}
