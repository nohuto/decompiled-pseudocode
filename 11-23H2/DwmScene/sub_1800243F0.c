/*
 * XREFs of sub_1800243F0 @ 0x1800243F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180001768 @ 0x180001768 (sub_180001768.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 */

char __fastcall sub_1800243F0(_QWORD *a1, __int64 a2, void *a3, void *a4, void *a5)
{
  const char *v8; // rax
  void *v9; // r9
  _QWORD *v10; // rax
  bool v11; // cf
  __int64 v12; // rax
  volatile signed __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  void *v19; // [rsp+68h] [rbp-98h] BYREF
  void *v20; // [rsp+70h] [rbp-90h] BYREF
  void *v21; // [rsp+78h] [rbp-88h] BYREF
  void *v22; // [rsp+80h] [rbp-80h] BYREF
  void *v23; // [rsp+88h] [rbp-78h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v25; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[144]; // [rsp+A0h] [rbp-60h] BYREF

  sub_180023260(a1[14], (__int64)(a1 + 15), (__int64)a3);
  v8 = "success";
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    LOBYTE(v8) = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v19 = a5;
      v10 = a1 + 6;
      v11 = a1[9] < 0x10uLL;
      v20 = a4;
      if ( !v11 )
        v10 = (_QWORD *)*v10;
      v21 = v10;
      v22 = a3;
      v23 = v9;
      v12 = sub_180021EB4((__int64)(a1 + 2));
      v13 = (volatile signed __int64 *)a1[14];
      v24 = v12;
      v18 = 1;
      v25 = sub_180021D04(v26, v13);
      LOBYTE(v8) = sub_180001768(
                     v14,
                     byte_1801AB378,
                     v15,
                     v16,
                     (void **)&v25,
                     (__int64)&v18,
                     &v24,
                     &v23,
                     &v22,
                     &v21,
                     &v20,
                     &v19);
    }
  }
  return (char)v8;
}
