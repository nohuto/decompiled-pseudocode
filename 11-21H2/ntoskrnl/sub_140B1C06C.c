/*
 * XREFs of sub_140B1C06C @ 0x140B1C06C
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 */

void __fastcall sub_140B1C06C(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  PVOID PoolWithTag; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v5[0] = -1059463388;
  v5[1] = 1314116061;
  v5[2] = -657724523;
  v5[3] = -2040154073;
  v1 = sub_140B1C6B0(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v1 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x49545348u);
    if ( !PoolWithTag )
      return;
  }
  else
  {
    PoolWithTag = 0LL;
    if ( v1 < 0 )
      return;
  }
  if ( (int)sub_140B1C6B0(v2, v5, 0LL, PoolWithTag, &NumberOfBytes) < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    LODWORD(dword_140D4DB80) = NumberOfBytes;
    qword_140D4DB88 = PoolWithTag;
  }
}
