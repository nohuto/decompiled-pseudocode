/*
 * XREFs of ndisValidateEmbeddedBufferBounds @ 0x1C010C3CC
 * Callers:
 *     ndisValidateNdisVarDataDesc32InputString @ 0x1C010C48C (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1C010C518 (ndisValidateNdisVarDataDescInputString.c)
 *     ndisValidateNdisOffsetAndLengthInputBufferBounds @ 0x1C012EF38 (ndisValidateNdisOffsetAndLengthInputBufferBounds.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     Feature_3484202299__private_IsEnabledDeviceUsage @ 0x1C0037258 (Feature_3484202299__private_IsEnabledDeviceUsage.c)
 */

char __fastcall ndisValidateEmbeddedBufferBounds(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned __int64 *a9)
{
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi

  v10 = a1 + a6;
  v11 = v10 + a7;
  v12 = a1 + a2;
  v13 = a3 + a4;
  if ( v12 < a1
    || (unsigned int)Feature_3484202299__private_IsEnabledDeviceUsage() && a5 && a6 < a5
    || v10 < a1
    || v11 < v10
    || v11 > v12
    || a8 && a7 && ((a8 - 1) & (unsigned int)v10) != 0
    || v10 <= a3 && v11 > a3
    || v10 <= v13 && v11 > v13 )
  {
    return 0;
  }
  *a9 = v10;
  return 1;
}
