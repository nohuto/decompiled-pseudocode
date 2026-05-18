/*
 * XREFs of sub_180023CD0 @ 0x180023CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_1800020C8 @ 0x1800020C8 (sub_1800020C8.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 *     sub_180023FC4 @ 0x180023FC4 (sub_180023FC4.c)
 *     sub_1800246F8 @ 0x1800246F8 (sub_1800246F8.c)
 */

__int64 __fastcall sub_180023CD0(__int64 a1, __int64 a2, __int64 a3, void *a4, __int64 a5, int *a6)
{
  volatile signed __int64 **v7; // rdi
  char v10; // r14
  __int64 v11; // rax
  volatile signed __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v18; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+84h] [rbp-7Ch] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+8Ch] [rbp-74h] BYREF
  int v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  void *v24; // [rsp+A0h] [rbp-60h] BYREF
  const char *v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v28; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[144]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = (volatile signed __int64 **)(a1 + 112);
  v10 = a3;
  sub_180023260(*(_QWORD *)(a1 + 112), a1 + 249, a3);
  if ( (unsigned int)dword_1801C81C0 > 5 && sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL) )
  {
    v24 = a4;
    v18 = a6[7];
    v19 = a6[6];
    v20 = a6[4];
    v21 = *a6;
    v23 = a5;
    v25 = sub_180022CC0(v10);
    v26 = sub_180021EC0(a2);
    v11 = sub_180021EB4(a1 + 8);
    v12 = *v7;
    v27 = v11;
    v22 = 1;
    v28 = sub_180021D04(v29, v12);
    sub_1800020C8(
      v13,
      byte_1801AB5FD,
      v14,
      v15,
      (void **)&v28,
      (__int64)&v22,
      &v27,
      &v26,
      (void **)&v25,
      &v24,
      (__int64)&v23,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
  v16 = sub_180023FC4((char *)(a1 + 120));
  return sub_1800246F8(v7, v16);
}
