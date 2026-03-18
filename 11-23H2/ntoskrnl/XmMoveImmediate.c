/*
 * XREFs of XmMoveImmediate @ 0x1405330A0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403B94E8 (XmSetDataType.c)
 *     XmGetImmediateSourceValue @ 0x1403B9514 (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmMoveImmediate(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  XmSetDataType(a1);
  *(_QWORD *)(a1 + 88) = XmEvaluateAddressSpecifier(a1, &v3);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}
