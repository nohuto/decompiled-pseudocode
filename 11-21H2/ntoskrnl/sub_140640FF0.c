/*
 * XREFs of sub_140640FF0 @ 0x140640FF0
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140640FF0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+40h] [rbp-38h]

  *a4 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v4 = sub_14042A5E0(*(_QWORD *)(a3 + 8), 0LL);
  v5 = v4;
  if ( v4 == -1073741789 || v4 >= 0 )
    return (unsigned int)-1073741823;
  return v5;
}
