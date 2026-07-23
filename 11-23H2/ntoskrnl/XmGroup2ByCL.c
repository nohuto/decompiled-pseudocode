/*
 * XREFs of XmGroup2ByCL @ 0x140398F10
 * Callers:
 *     XmEmulateStream @ 0x1403BE6C0 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B940C (XmEvaluateAddressSpecifier.c)
 *     XmSetDataType @ 0x1403B96C8 (XmSetDataType.c)
 *     XmSetDestinationValue @ 0x1403B9748 (XmSetDestinationValue.c)
 */

__int64 __fastcall XmGroup2ByCL(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  XmSetDataType(a1);
  result = XmEvaluateAddressSpecifier(a1, &v3);
  if ( result )
  {
    *(_DWORD *)(a1 + 108) = *(_BYTE *)(a1 + 28) & 0x1F;
    XmSetDestinationValue(a1, result);
    *(_DWORD *)(a1 + 124) += v3;
    return 1LL;
  }
  return result;
}
