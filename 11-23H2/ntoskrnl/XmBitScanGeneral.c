/*
 * XREFs of XmBitScanGeneral @ 0x140532B60
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     XmEvaluateAddressSpecifier @ 0x1403B922C (XmEvaluateAddressSpecifier.c)
 *     XmSetSourceValue @ 0x1403B94C0 (XmSetSourceValue.c)
 */

__int64 __fastcall XmBitScanGeneral(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  result = XmEvaluateAddressSpecifier(a1, (int *)&v3);
  if ( result )
  {
    *(_QWORD *)(a1 + 88) = a1 + 4 * (v3 + 6LL);
    XmSetSourceValue(a1, (unsigned __int16 *)result);
    return 1LL;
  }
  return result;
}
