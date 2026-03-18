/*
 * XREFs of XmGroup1Immediate @ 0x1403B9150
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403B94E8 (XmSetDataType.c)
 *     XmGetImmediateSourceValue @ 0x1403B9514 (XmGetImmediateSourceValue.c)
 *     XmSetDestinationValue @ 0x1403B9568 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup1Immediate(_DWORD *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // r8d
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  XmSetDataType(a1);
  v2 = XmEvaluateAddressSpecifier(a1, &v5);
  XmGetImmediateSourceValue(a1, a1[28] & 2);
  XmSetDestinationValue(a1, v2);
  a1[31] += v5;
  result = 1LL;
  a1[27] = v4;
  return result;
}
