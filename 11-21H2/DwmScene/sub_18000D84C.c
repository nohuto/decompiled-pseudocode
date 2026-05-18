/*
 * XREFs of sub_18000D84C @ 0x18000D84C
 * Callers:
 *     sub_18000EDBC @ 0x18000EDBC (sub_18000EDBC.c)
 *     sub_18000F104 @ 0x18000F104 (sub_18000F104.c)
 * Callees:
 *     sub_18000D464 @ 0x18000D464 (sub_18000D464.c)
 */

__int64 __fastcall sub_18000D84C(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall *v4)(); // [rsp+38h] [rbp+10h] BYREF

  if ( a1[1] )
  {
    v3 = a1[1];
    v4 = sub_18000DD30;
    sub_18000D464((__int64 (__fastcall **)(_QWORD))&v4, &v3);
  }
  result = *a1;
  if ( *a1 )
  {
    v3 = *a1;
    v4 = sub_18000DD30;
    return sub_18000D464((__int64 (__fastcall **)(_QWORD))&v4, &v3);
  }
  return result;
}
