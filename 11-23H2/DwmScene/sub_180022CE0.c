/*
 * XREFs of sub_180022CE0 @ 0x180022CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_18000250C @ 0x18000250C (sub_18000250C.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

__int64 __fastcall sub_180022CE0(__int64 a1, __int64 a2, void *a3, int a4, void *a5)
{
  volatile signed __int64 **v6; // rdi
  __int64 v10; // rax
  volatile signed __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  void *v19; // [rsp+70h] [rbp-98h] BYREF
  void *v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h] BYREF
  _BYTE *v23; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v24[144]; // [rsp+98h] [rbp-70h] BYREF

  v6 = (volatile signed __int64 **)(a1 + 112);
  sub_180023260(*(_QWORD *)(a1 + 112), a1 + 249);
  if ( (unsigned int)dword_1801C81C0 > 5 && sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v19 = a5;
    v17 = a4;
    v20 = a3;
    v21 = sub_180021EC0(a2);
    v10 = sub_180021EB4(a1 + 16);
    v11 = *v6;
    v22 = v10;
    v18 = 1;
    v23 = sub_180021D04(v24, v11);
    sub_18000250C(v12, byte_1801AB162, v13, v14, (void **)&v23, (__int64)&v18, &v22, &v21, &v20, (__int64)&v17, &v19);
  }
  v15 = sub_180023FC4((char *)(a1 + 120));
  return sub_1800246F8(v6, v15);
}
