/*
 * XREFs of XmGroup2By1 @ 0x1403CC4C0
 * Callers:
 *     XmEmulateStream @ 0x1403A32AC (XmEmulateStream.c)
 * Callees:
 *     XmSetDestinationValue @ 0x1403A3038 (XmSetDestinationValue.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403A346C (XmSetDataType.c)
 */

__int64 __fastcall XmGroup2By1(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v4);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = 1;
    XmSetDestinationValue(a1, (unsigned __int16 *)result);
    result = v3;
    *(_DWORD *)(a1 + 124) += v4;
  }
  return result;
}
