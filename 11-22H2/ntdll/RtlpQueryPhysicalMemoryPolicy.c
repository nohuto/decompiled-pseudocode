/*
 * XREFs of RtlpQueryPhysicalMemoryPolicy @ 0x180049EBC
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18004A590 (RtlGetNtProductType.c)
 */

__int64 __fastcall RtlpQueryPhysicalMemoryPolicy(int *a1)
{
  int v2; // edx
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)RtlpUserPolicies )
  {
    v2 = (unsigned __int8)RtlpUserPolicies;
  }
  else if ( RtlGetNtProductType(&NtProductType) && NtProductType == NtProductWinNt )
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
