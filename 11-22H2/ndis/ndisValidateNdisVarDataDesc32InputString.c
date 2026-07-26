/*
 * XREFs of ndisValidateNdisVarDataDesc32InputString @ 0x1C010C48C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateEmbeddedBufferBounds @ 0x1C010C3CC (ndisValidateEmbeddedBufferBounds.c)
 *     ndisValidateAndConvertWcharStringToUnicodeString @ 0x1C010C638 (ndisValidateAndConvertWcharStringToUnicodeString.c)
 */

char __fastcall ndisValidateNdisVarDataDesc32InputString(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // r8d
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int64)a3 >= a1
    && (unsigned __int64)(a3 + 4) <= a1 + a2
    && ndisValidateEmbeddedBufferBounds(a1, a2, (unsigned __int64)a3, 8u, 0x28u, *((_DWORD *)a3 + 1), *a3, 2, &v8) )
  {
    return ndisValidateAndConvertWcharStringToUnicodeString(v8, *a3, v6, 0, a5);
  }
  else
  {
    return 0;
  }
}
