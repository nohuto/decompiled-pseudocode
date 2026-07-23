/*
 * XREFs of XmGeneralBitOffset @ 0x1405331C0
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmGetOffsetAddress @ 0x1403A52BC (XmGetOffsetAddress.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B940C (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1403B96A0 (XmSetSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B9748 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGeneralBitOffset(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 *OffsetAddress; // r8
  int v4; // edx
  int v5; // ecx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmEvaluateAddressSpecifier(a1, (int *)&v7);
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v7 + 6LL)));
  if ( !*(_BYTE *)(a1 + 142) )
  {
    v4 = 536870908;
    if ( *(_DWORD *)(a1 + 120) != 3 )
      v4 = 536870910;
    OffsetAddress = (unsigned __int16 *)XmGetOffsetAddress(
                                          v2,
                                          *(_DWORD *)(a1 + 128) + ((*(_DWORD *)(a1 + 108) >> 3) & (unsigned int)v4));
  }
  v5 = 31;
  if ( *(_DWORD *)(a1 + 120) != 3 )
    v5 = 15;
  *(_DWORD *)(a1 + 108) &= v5;
  XmSetDestinationValue(a1, OffsetAddress);
  return 1LL;
}
