/*
 * XREFs of sub_1800230D0 @ 0x1800230D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180001C44 @ 0x180001C44 (sub_180001C44.c)
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

char __fastcall sub_1800230D0(__int64 a1, __int64 a2, void *a3, void *a4, void *a5, void *a6)
{
  __int64 v6; // rbx
  volatile signed __int64 **v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  volatile signed __int64 *v15; // rcx
  char result; // al
  __int64 v17; // rax
  volatile signed __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  void *v24; // [rsp+70h] [rbp-90h] BYREF
  void *v25; // [rsp+78h] [rbp-88h] BYREF
  void *v26; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v29; // [rsp+98h] [rbp-68h] BYREF
  char v30[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a1 + 120;
  v8 = (volatile signed __int64 **)(a1 + 112);
  v12 = sub_180023FC4((char *)(a1 + 120));
  sub_1800246F8(v8, v12);
  sub_180023260(*v8, v6);
  v14 = sub_180022B28(v6, v13);
  sub_1800246F8(v8, v14);
  v15 = *v8;
  _InterlockedExchangeAdd64(*v8 + 18, 0LL);
  result = sub_180024220((void *)v15);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v23 = a6;
      v24 = a5;
      v25 = a4;
      v26 = a3;
      v27 = sub_180021EC0(a2);
      v17 = sub_180021EB4(a1 + 16);
      v18 = *v8;
      v28 = v17;
      v22 = 1;
      v29 = sub_180021D04(v30, v18);
      return sub_180001C44(
               v19,
               byte_1801AB4A0,
               v20,
               v21,
               (void **)&v29,
               (__int64)&v22,
               &v28,
               &v27,
               &v26,
               &v25,
               &v24,
               &v23);
    }
  }
  return result;
}
