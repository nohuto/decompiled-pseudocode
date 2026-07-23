/*
 * XREFs of sub_1403CCC40 @ 0x1403CCC40
 * Callers:
 *     sub_140B1C0FC @ 0x140B1C0FC (sub_140B1C0FC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B1C6B0 @ 0x140B1C6B0 (sub_140B1C6B0.c)
 */

void __fastcall sub_1403CCC40(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  v5[0] = -408036172;
  v5[1] = 1161419828;
  v5[2] = -1108642150;
  v5[3] = 2121252359;
  if ( (unsigned int)sub_140B1C6B0(a1, v5, 0LL, 0LL, &v4) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 8LL, 0x64506142u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)sub_140B1C6B0(v2, v5, 0LL, PoolWithTag + 1, &v4) < 0 )
      {
        ExFreePoolWithTag(v3, 0);
      }
      else
      {
        *v3 = v4;
        qword_140C15B78 = (__int64)v3;
      }
    }
  }
}
