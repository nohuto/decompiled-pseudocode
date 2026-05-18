/*
 * XREFs of sub_180023330 @ 0x180023330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180001B44 @ 0x180001B44 (sub_180001B44.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

__int64 __fastcall sub_180023330(__int64 a1, __int64 a2, void *a3)
{
  volatile signed __int64 **v4; // rdi
  __int64 v7; // rax
  volatile signed __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v14; // [rsp+50h] [rbp-D8h] BYREF
  void *v15; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v18; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-A8h] BYREF

  v4 = (volatile signed __int64 **)(a1 + 112);
  sub_180023260(*(_QWORD *)(a1 + 112), a1 + 249, (__int64)a3);
  if ( (unsigned int)dword_1801C81C0 > 5 && sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v15 = a3;
    v16 = sub_180021EC0(a2);
    v7 = sub_180021EB4(a1 + 8);
    v8 = *v4;
    v17 = v7;
    v14 = 1;
    v18 = sub_180021D04(v19, v8);
    sub_180001B44(v9, byte_1801ABC29, v10, v11, (void **)&v18, (__int64)&v14, &v17, &v16, &v15);
  }
  v12 = sub_180023FC4((char *)(a1 + 120));
  return sub_1800246F8(v4, v12);
}
