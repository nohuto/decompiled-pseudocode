/*
 * XREFs of XmGroup2ByByte @ 0x1403984E0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B9414 (XmGetCodeByte.c)
 *     XmSetDataType @ 0x1403B94E8 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1403B9568 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup2ByByte(__int64 a1)
{
  __int64 v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  XmSetDataType(a1);
  v2 = XmEvaluateAddressSpecifier(a1, &v4);
  *(_DWORD *)(a1 + 108) = XmGetCodeByte(a1) & 0x1F;
  XmSetDestinationValue(a1, v2);
  *(_DWORD *)(a1 + 124) += v4;
  return 1LL;
}
