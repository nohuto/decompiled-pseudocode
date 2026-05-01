/*
 * XREFs of CrmVerifyActivityId @ 0x18002C648
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x18002C340 (CrmRpcSrvActivityAllocate.c)
 *     CrmSrvActivityAllocate @ 0x180038BBC (CrmSrvActivityAllocate.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmVerifyActivityId(int a1, unsigned int a2)
{
  _QWORD *v4; // rax
  _DWORD v7[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD Key[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 >= 309 || a2 > 0x516 )
    return (unsigned int)-1073741811;
  Key[0] = a1;
  Key[1] = a2;
  v4 = bsearch(Key, &CrmActivityToPolicyTable, 0x4CuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( !v4 )
  {
    if ( (unsigned int)(a1 - 9) <= 0x79 && a2 - 301 <= 0x79 )
    {
      v7[0] = a1;
      v4 = v7;
      v7[1] = a2;
      v7[2] = 17;
      return a1 != (unsigned int)*v4 ? 0xC000000D : 0;
    }
    return (unsigned int)-1073741811;
  }
  return a1 != (unsigned int)*v4 ? 0xC000000D : 0;
}
