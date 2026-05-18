/*
 * XREFs of sub_180021FA0 @ 0x180021FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_18000190C @ 0x18000190C (sub_18000190C.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 */

char __fastcall sub_180021FA0(__int64 a1, int a2, void *a3)
{
  char result; // al
  __int64 v7; // rax
  volatile signed __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp-C8h] BYREF
  int v13; // [rsp+54h] [rbp-C4h] BYREF
  void *v14; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE *v16; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v17[144]; // [rsp+70h] [rbp-A8h] BYREF

  result = sub_180023260(*(_QWORD *)(a1 + 112), a1 + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v14 = a3;
      v12 = a2;
      v7 = sub_180021EB4(a1 + 8);
      v8 = *(volatile signed __int64 **)(a1 + 112);
      v15 = v7;
      v13 = 1;
      v16 = sub_180021D04(v17, v8);
      return sub_18000190C(v9, byte_1801ABD37, v10, v11, (void **)&v16, (__int64)&v13, &v15, (__int64)&v12, &v14);
    }
  }
  return result;
}
