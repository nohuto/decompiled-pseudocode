/*
 * XREFs of sub_18000C948 @ 0x18000C948
 * Callers:
 *     sub_18000C0A8 @ 0x18000C0A8 (sub_18000C0A8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000EC08 @ 0x18000EC08 (sub_18000EC08.c)
 *     sub_180011578 @ 0x180011578 (sub_180011578.c)
 *     sub_180016AC0 @ 0x180016AC0 (sub_180016AC0.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_18000C948(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        LPCWSTR lpOutputString)
{
  __int64 result; // rax
  int v9; // [rsp+48h] [rbp-1500h]
  _BYTE v10[160]; // [rsp+80h] [rbp-14C8h] BYREF
  __int64 v11; // [rsp+120h] [rbp-1428h] BYREF
  WCHAR v12[2068]; // [rsp+520h] [rbp-1028h] BYREF

  LOBYTE(v9) = 0;
  result = sub_18000EC08(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             2,
             a7,
             (__int64)lpOutputString,
             v9,
             v12,
             2048,
             (__int64)&v11,
             1024,
             (__int64)v10);
  if ( (v10[4] & 1) != 0 )
    sub_180011578(v10);
  return result;
}
