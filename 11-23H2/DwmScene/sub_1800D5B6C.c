/*
 * XREFs of sub_1800D5B6C @ 0x1800D5B6C
 * Callers:
 *     sub_1800D70B0 @ 0x1800D70B0 (sub_1800D70B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C61C @ 0x18001C61C (sub_18001C61C.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D5B6C(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  void **v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v14[4]; // [rsp+80h] [rbp-48h] BYREF

  v8 = *a2;
  v9 = sub_18002963C(*(_QWORD *)a1, v14);
  v10 = (void **)sub_18001C61C(v13, v9, (__int64)"Texture");
  sub_180029824(v8, v10);
  sub_180011B24((__int64)v14);
  result = sub_180055EA0(
             *a2,
             **(_DWORD **)(a1 + 8),
             **(_DWORD **)(a1 + 16),
             0,
             a3,
             0,
             **(_DWORD **)(a1 + 24) | a4,
             0LL,
             0,
             **(_QWORD **)(a1 + 32));
  v12 = a2[1];
  if ( v12 )
    return sub_180010530(v12);
  return result;
}
