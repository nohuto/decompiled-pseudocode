/*
 * XREFs of CmpBounceContextCleanup @ 0x1406DBDF4
 * Callers:
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DF70 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E540 (NtEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 */

void __fastcall CmpBounceContextCleanup(__int64 a1)
{
  struct _PRIVILEGE_SET *v2; // rcx

  v2 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v2 && v2 != *(struct _PRIVILEGE_SET **)a1 && v2 != (struct _PRIVILEGE_SET *)(a1 + 17) )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, v2);
    else
      CmSiFreeMemory(v2);
  }
}
