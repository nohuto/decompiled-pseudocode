/*
 * XREFs of sub_1407AECC8 @ 0x1407AECC8
 * Callers:
 *     ExpDeleteSiloState @ 0x1406094D0 (ExpDeleteSiloState.c)
 *     ExpSetKernelDataProtection @ 0x1407AEA20 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1407AEC10 (ExpGetKernelDataProtection.c)
 * Callees:
 *     sub_1407AED14 @ 0x1407AED14 (sub_1407AED14.c)
 */

__int64 __fastcall sub_1407AECC8(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1407AED14(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
