/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x180097A04
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180047244 (RtlQueryResourcePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // edx
  _NT_PRODUCT_TYPE ProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)RtlpUserPolicies )
  {
    v2 = (unsigned __int8)RtlpUserPolicies;
  }
  else if ( RtlGetNtProductType(&ProductType) && ProductType == NtProductWinNt )
  {
    v2 = 10;
    if ( MEMORY[0x7FFE02E8] > 0x83400u )
      v2 = 20;
  }
  else
  {
    v2 = 20;
  }
  *a1 = v2;
  return 0LL;
}
