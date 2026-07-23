/*
 * XREFs of sub_1403CCD08 @ 0x1403CCD08
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     sub_1403B6E4C @ 0x1403B6E4C (sub_1403B6E4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 */

void __fastcall sub_1403CCD08(__int64 a1)
{
  unsigned int v1; // r14d
  PVOID PoolWithTag; // rbx
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v7[4]; // [rsp+38h] [rbp-18h] BYREF

  v1 = 0;
  v7[0] = -1667627438;
  PoolWithTag = 0LL;
  v7[1] = 1255566311;
  v3 = 0;
  v7[2] = -363808867;
  v7[3] = -1273101358;
  while ( 1 )
  {
    LODWORD(NumberOfBytes) = 0;
    v4 = sub_140B1C6B0(a1, v7, v3, 0LL, &NumberOfBytes);
    v5 = v4 + 0x80000000;
    if ( (v5 & 0x80000000) == 0 && v4 != -1073741789 )
      break;
    if ( (unsigned int)NumberOfBytes > v1 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
      if ( !PoolWithTag )
        return;
      v1 = NumberOfBytes;
    }
    if ( (int)sub_140B1C6B0(v5, v7, v3, PoolWithTag, &NumberOfBytes) < 0
      || (int)sub_1403B6E4C((unsigned __int64)PoolWithTag, (unsigned int)NumberOfBytes) < 0 )
    {
      break;
    }
    ++v3;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
