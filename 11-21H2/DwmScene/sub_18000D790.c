/*
 * XREFs of sub_18000D790 @ 0x18000D790
 * Callers:
 *     sub_1800FF081 @ 0x1800FF081 (sub_1800FF081.c)
 * Callees:
 *     sub_18000D464 @ 0x18000D464 (sub_18000D464.c)
 */

__int64 __fastcall sub_18000D790(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall *v3)(); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = sub_18000F2F0;
    return sub_18000D464((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
