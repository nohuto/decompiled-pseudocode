/*
 * XREFs of sub_1800221A0 @ 0x1800221A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_1800015F0 @ 0x1800015F0 (sub_1800015F0.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 */

char __fastcall sub_1800221A0(__int64 a1, __int64 a2, void *a3, void *a4)
{
  const char *v7; // rax
  void *v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rax
  volatile signed __int64 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  void *v17; // [rsp+68h] [rbp-98h] BYREF
  void *v18; // [rsp+70h] [rbp-90h] BYREF
  void *v19; // [rsp+78h] [rbp-88h] BYREF
  void *v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v22; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[144]; // [rsp+A0h] [rbp-60h] BYREF

  sub_180023260(*(_QWORD *)(a1 + 112), a1 + 120);
  v7 = "success";
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    LOBYTE(v7) = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( (_BYTE)v7 )
    {
      v9 = (_QWORD *)(a1 + 48);
      v17 = a4;
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v9 = (_QWORD *)*v9;
      v18 = v9;
      v19 = a3;
      v20 = v8;
      v10 = sub_180021EB4(a1 + 8);
      v11 = *(volatile signed __int64 **)(a1 + 112);
      v21 = v10;
      v16 = 1;
      v22 = sub_180021D04(v23, v11);
      LOBYTE(v7) = sub_1800015F0(
                     v12,
                     byte_1801ABCA3,
                     v13,
                     v14,
                     (void **)&v22,
                     (__int64)&v16,
                     &v21,
                     &v20,
                     &v19,
                     &v18,
                     &v17);
    }
  }
  return (char)v7;
}
