/*
 * XREFs of sub_180070790 @ 0x180070790
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800306A0 @ 0x1800306A0 (sub_1800306A0.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_18003730C @ 0x18003730C (sub_18003730C.c)
 *     sub_18003736C @ 0x18003736C (sub_18003736C.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_18009FB44 @ 0x18009FB44 (sub_18009FB44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_180070790(__int64 a1, int a2)
{
  __int64 *v4; // rsi
  void (__fastcall *v5)(__int64 *, char **, __int64 *, __int64 *); // rbx
  __int64 *v6; // rax
  char result; // al
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64 *, char **, __int64 *, __int64 *); // rbx
  __int64 v13; // r8
  __int64 *v14; // rax
  char **v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  _QWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21[4]; // [rsp+60h] [rbp-A0h] BYREF
  char *v22[3]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp-68h]
  char *v24[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+D8h] [rbp-28h]
  char *v29[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+F8h] [rbp-8h]

  v4 = (__int64 *)sub_180036808(a1, a2);
  v5 = *(void (__fastcall **)(__int64 *, char **, __int64 *, __int64 *))(*v4 + 96);
  v6 = sub_18001FB6C((__int64 *)v22, &word_1801289A4, *v4);
  v5(v4, v29, &qword_1801F9C98, v6);
  sub_1800306A0((__int64 *)v27, v29);
  result = sub_18001DA38(v27, &qword_1801F67F8);
  if ( result )
  {
    sub_18003730C(a1, &v18, 0);
    v8 = 0;
    if ( (int)sub_18003736C(a1) > 0 )
    {
      while ( 1 )
      {
        sub_18003730C(a1, &v16, v8);
        v9 = v16;
        if ( *(_DWORD *)(v16 + 112) == a2 )
          break;
        sub_180010910((__int64)&v16);
        if ( ++v8 >= (int)sub_18003736C(a1) )
          goto LABEL_9;
      }
      v10 = v17;
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v10 = v17;
        v9 = v16;
      }
      v20[0] = v18;
      v18 = v9;
      v20[1] = v19;
      v19 = v10;
      sub_180010910((__int64)v20);
      sub_180010910((__int64)&v16);
    }
LABEL_9:
    v11 = sub_18006B2C0(v18);
    v12 = *(void (__fastcall **)(__int64 *, char **, __int64 *, __int64 *))(*v4 + 96);
    v14 = sub_18001FB6C(v21, &word_1801289A4, v13);
    v12(v4, v24, &qword_1801F9C78, v14);
    if ( v25 )
    {
      sub_1800306A0((__int64 *)v22, v24);
      v15 = v22;
      if ( v23 >= 0x10 )
        v15 = (char **)v22[0];
      sub_18009FB44(*(_QWORD *)(v11 + 120), v15, v22[2], v27);
      if ( v23 >= 0x10 )
        sub_180010884(v22[0], v23 + 1);
    }
    if ( v26 >= 8 )
      sub_180010884(v24[0], 2 * v26 + 2);
    v25 = 0LL;
    v26 = 7LL;
    LOWORD(v24[0]) = 0;
    result = sub_180010910((__int64)&v18);
  }
  if ( v28 >= 0x10 )
    result = sub_180010884(v27[0], v28 + 1);
  if ( v30 >= 8 )
    return sub_180010884(v29[0], 2 * v30 + 2);
  return result;
}
