/*
 * XREFs of sub_140B1BE18 @ 0x140B1BE18
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 *     sub_140B5400C @ 0x140B5400C (sub_140B5400C.c)
 */

void __fastcall sub_140B1BE18(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  PVOID PoolWithTag; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v5[0] = -714793284;
  v5[1] = 1229919535;
  v5[2] = 1011500475;
  v5[3] = -287708285;
  v1 = sub_140B1C6B0(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v1 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
  }
  else
  {
    PoolWithTag = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)sub_140B1C6B0(v2, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 )
    sub_140B5400C(PoolWithTag, (unsigned int)NumberOfBytes);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
