/*
 * XREFs of sub_180023E70 @ 0x180023E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180001B44 @ 0x180001B44 (sub_180001B44.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180022B28 @ 0x180022B28 (sub_180022B28.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_180024220 @ 0x180024220 (sub_180024220.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

char __fastcall sub_180023E70(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  char result; // al
  __int64 v14; // rax
  volatile signed __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+50h] [rbp-E8h] BYREF
  void *v20; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE *v23; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v24[144]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = a1 + 120;
  v5 = (__int64 *)(a1 + 112);
  v8 = sub_180023FC4((char *)(a1 + 120));
  sub_1800246F8(v5, v8);
  sub_180023260(*v5, v3, v9);
  v11 = sub_180022B28(v3, v10);
  sub_1800246F8(v5, v11);
  v12 = (void *)*v5;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v5 + 144), 0LL);
  result = sub_180024220(v12);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v20 = a3;
      v21 = sub_180021EC0(a2);
      v14 = sub_180021EB4(a1 + 8);
      v15 = (volatile signed __int64 *)*v5;
      v22 = v14;
      v19 = 1;
      v23 = sub_180021D04(v24, v15);
      return sub_180001B44(v16, byte_1801AB6D4, v17, v18, (void **)&v23, (__int64)&v19, &v22, &v21, &v20);
    }
  }
  return result;
}
