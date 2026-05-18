/*
 * XREFs of sub_1800220A0 @ 0x1800220A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180001B44 @ 0x180001B44 (sub_180001B44.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 */

char __fastcall sub_1800220A0(__int64 a1, void *a2)
{
  char result; // al
  __int64 v5; // rax
  volatile signed __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+50h] [rbp-D8h] BYREF
  void *v11; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v14; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v15[144]; // [rsp+80h] [rbp-A8h] BYREF

  result = sub_180023260(*(_QWORD *)(a1 + 112), a1 + 120);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v11 = a2;
      v12 = sub_180021EB4(a1 + 24);
      v5 = sub_180021EB4(a1 + 8);
      v6 = *(volatile signed __int64 **)(a1 + 112);
      v13 = v5;
      v10 = 1;
      v14 = sub_180021D04(v15, v6);
      return sub_180001B44(v7, byte_1801AB427, v8, v9, (void **)&v14, (__int64)&v10, &v13, &v12, &v11);
    }
  }
  return result;
}
