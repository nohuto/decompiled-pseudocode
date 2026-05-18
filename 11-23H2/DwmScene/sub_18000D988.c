/*
 * XREFs of sub_18000D988 @ 0x18000D988
 * Callers:
 *     sub_18000EB38 @ 0x18000EB38 (sub_18000EB38.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_18000F5DC @ 0x18000F5DC (sub_18000F5DC.c)
 *     sub_18000F714 @ 0x18000F714 (sub_18000F714.c)
 *     sub_18000FB9C @ 0x18000FB9C (sub_18000FB9C.c)
 *     sub_18000FC64 @ 0x18000FC64 (sub_18000FC64.c)
 */

__int64 __fastcall sub_18000D988(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdx
  _BYTE v15[528]; // [rsp+30h] [rbp-238h] BYREF
  void *retaddr; // [rsp+268h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_18000FB9C(a1);
  sub_18000F714(v15, 260LL, a3, a2);
  sub_18000F5DC(v15, v6, L"_p0");
  v7 = a4 >> 31;
  v8 = 1;
  v9 = a4 & 0x7FFFFFFF;
  v10 = 1LL;
  if ( v9 )
    v10 = v9;
  v12 = sub_18000FC64(a1, v9, v10, v15);
  if ( v12 < 0 )
  {
    v13 = 133LL;
LABEL_7:
    sub_18000F024(retaddr, v13, "wil", (unsigned int)v12);
    return (unsigned int)v12;
  }
  sub_18000F5DC(v15, v11, L"h");
  if ( (_DWORD)v7 )
    v8 = v7;
  v12 = sub_18000FC64(a1 + 8, (unsigned int)v7, v8, v15);
  if ( v12 < 0 )
  {
    v13 = 137LL;
    goto LABEL_7;
  }
  return 0LL;
}
