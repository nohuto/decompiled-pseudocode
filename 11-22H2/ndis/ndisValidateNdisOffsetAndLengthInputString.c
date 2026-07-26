/*
 * XREFs of ndisValidateNdisOffsetAndLengthInputString @ 0x1C012EFA0
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateAndConvertWcharStringToUnicodeString @ 0x1C010C638 (ndisValidateAndConvertWcharStringToUnicodeString.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C012EF38 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 */

char __fastcall ndisValidateNdisOffsetAndLengthInputString(__int64 a1, unsigned int *a2, __int64 a3)
{
  char result; // al
  __int64 v6; // r8
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  result = ndisValidateNdisOffsetAndLengthInputBufferBounds(a1, a2, (unsigned __int64 *)&v7);
  if ( result )
    return ndisValidateAndConvertWcharStringToUnicodeString(v7, a2[1], v6, 1, a3);
  return result;
}
