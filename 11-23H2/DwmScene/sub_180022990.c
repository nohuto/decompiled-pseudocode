/*
 * XREFs of sub_180022990 @ 0x180022990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180002B28 @ 0x180002B28 (sub_180002B28.c)
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

char __fastcall sub_180022990(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5, void *a6)
{
  __int64 v6; // rbx
  volatile signed __int64 **v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  volatile signed __int64 *v14; // rcx
  char result; // al
  __int64 v16; // rax
  volatile signed __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  void *v22; // [rsp+68h] [rbp-98h] BYREF
  void *v23; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v28; // [rsp+98h] [rbp-68h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a1 + 120;
  v8 = (volatile signed __int64 **)(a1 + 112);
  v12 = sub_180023FC4((char *)(a1 + 120));
  sub_1800246F8(v8, v12);
  sub_180023260(*v8, v6);
  v13 = sub_180022B28(v6);
  sub_1800246F8(v8, v13);
  v14 = *v8;
  _InterlockedExchangeAdd64(*v8 + 18, 0LL);
  result = sub_180024220((void *)v14);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v22 = a6;
      v23 = a5;
      v24 = a4;
      v25 = sub_180021EC0(a3);
      v26 = sub_180021EC0(a2);
      v16 = sub_180021EB4(a1 + 16);
      v17 = *v8;
      v27 = v16;
      v21 = 1;
      v28 = sub_180021D04(v29, v17);
      return sub_180002B28(
               v18,
               byte_1801AB2A8,
               v19,
               v20,
               (void **)&v28,
               (__int64)&v21,
               &v27,
               &v26,
               &v25,
               &v24,
               &v23,
               &v22);
    }
  }
  return result;
}
