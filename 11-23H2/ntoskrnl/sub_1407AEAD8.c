/*
 * XREFs of sub_1407AEAD8 @ 0x1407AEAD8
 * Callers:
 *     ExpDeleteSiloState @ 0x140608F80 (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1407AE830 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1407AEA20 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1407AEB24 @ 0x1407AEB24 (sub_1407AEB24.c)
 */

__int64 __fastcall sub_1407AEAD8(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407AEB24(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
