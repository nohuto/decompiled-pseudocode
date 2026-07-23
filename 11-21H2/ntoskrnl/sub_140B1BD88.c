/*
 * XREFs of sub_140B1BD88 @ 0x140B1BD88
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 *     sub_140B53EA4 @ 0x140B53EA4 (sub_140B53EA4.c)
 */

void __fastcall sub_140B1BD88(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  PVOID PoolWithTag; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v5[0] = -434226978;
  v5[1] = 1092265705;
  v5[2] = 176510397;
  v5[3] = 1684214913;
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
  if ( (int)sub_140B1C6B0(v2, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 && (unsigned int)NumberOfBytes >= 8 )
    sub_140B53EA4(PoolWithTag);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
