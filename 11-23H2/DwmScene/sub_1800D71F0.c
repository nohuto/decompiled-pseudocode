/*
 * XREFs of sub_1800D71F0 @ 0x1800D71F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_18009BD10 @ 0x18009BD10 (sub_18009BD10.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800D71F0(__int64 a1, __int64 a2, unsigned int a3, int a4, char *String)
{
  __int64 v6; // rdi
  const char *v9; // rsi
  char result; // al
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, int *, __int64 *, __int64, char *); // rdi
  int v15; // r15d
  bool v16; // zf
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, void *, _QWORD, const char *); // rdi
  unsigned int v19; // eax
  bool v20; // bl
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+48h] [rbp-38h]
  int v25; // [rsp+4Ch] [rbp-34h]
  __int64 v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  int v28; // [rsp+60h] [rbp-20h] BYREF
  int v29; // [rsp+64h] [rbp-1Ch]
  int v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+6Ch] [rbp-14h]
  int v32; // [rsp+70h] [rbp-10h]
  int v33; // [rsp+74h] [rbp-Ch]

  v6 = a3;
  v9 = String;
  result = sub_18009BD10(a1, a2, a3);
  if ( !result )
    return result;
  v31 = 0;
  if ( !a4 )
    goto LABEL_9;
  v11 = a4 - 1;
  if ( !v11 )
  {
    v29 = 1;
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v29 = 2;
LABEL_10:
    v31 = 0x10000;
    goto LABEL_11;
  }
  if ( v12 != 1 )
  {
LABEL_9:
    v29 = 0;
    goto LABEL_10;
  }
  v29 = 3;
  v31 = 196608;
LABEL_11:
  v30 = 4;
  v28 = v6;
  v32 = 0;
  v33 = 0;
  sub_1800297B0(a1, v6, 7);
  v23 = a2;
  v24 = 0;
  v25 = 0;
  sub_180011C50(a1 + 72, &v21);
  sub_18001FC84(&v26, &v21);
  if ( v22 )
    sub_180010530(v22);
  sub_1800C589C(v26, &v21);
  v13 = v21;
  v14 = *(__int64 (__fastcall **)(__int64, int *, __int64 *, __int64, char *))(*(_QWORD *)v21 + 24LL);
  sub_18000E72C((__int64 *)(a1 + 120));
  v15 = v14(v13, &v28, &v23, a1 + 120, String);
  sub_1800C7750(v26, v15);
  v16 = v15 == 0;
  if ( v15 >= 0 )
  {
    if ( *((_QWORD *)String + 3) >= 0x10uLL )
      v9 = *(const char **)String;
    v17 = *(_QWORD *)(a1 + 120);
    if ( v17 )
    {
      v18 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v17 + 40LL);
      if ( v9 )
        v19 = strnlen(v9, 0x7FFFFFFFuLL);
      else
        v19 = 0;
      v18(v17, &unk_180105FA0, v19, v9);
    }
    v16 = v15 == 0;
  }
  v20 = v16;
  sub_18000E72C(&v21);
  if ( v27 )
    sub_180010530(v27);
  return v20;
}
