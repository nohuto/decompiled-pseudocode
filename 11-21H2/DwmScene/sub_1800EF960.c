/*
 * XREFs of sub_1800EF960 @ 0x1800EF960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180020FCC @ 0x180020FCC (sub_180020FCC.c)
 *     sub_18002BBC0 @ 0x18002BBC0 (sub_18002BBC0.c)
 *     sub_1800ACA60 @ 0x1800ACA60 (sub_1800ACA60.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800EF960(__int64 a1, __int64 a2, unsigned int a3, int a4, char *String)
{
  __int64 v6; // r14
  const char *v9; // rdi
  char result; // al
  int v11; // ebx
  int v12; // ebx
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, int *, __int64 *, __int64, char *); // r14
  __int64 v18; // rcx
  int v19; // r15d
  bool v20; // zf
  __int64 v21; // rsi
  void (__fastcall *v22)(__int64, void *, _QWORD, const char *); // r14
  unsigned int v23; // eax
  bool v24; // di
  __int128 v25; // [rsp+30h] [rbp-31h] BYREF
  __int64 v26; // [rsp+40h] [rbp-21h] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h] BYREF
  int v28; // [rsp+50h] [rbp-11h]
  int v29; // [rsp+54h] [rbp-Dh]
  __int64 v30[2]; // [rsp+58h] [rbp-9h] BYREF
  int v31; // [rsp+68h] [rbp+7h] BYREF
  int v32; // [rsp+6Ch] [rbp+Bh]
  int v33; // [rsp+70h] [rbp+Fh]
  int v34; // [rsp+74h] [rbp+13h]
  int v35; // [rsp+78h] [rbp+17h]
  int v36; // [rsp+7Ch] [rbp+1Bh]

  v6 = a3;
  v9 = String;
  result = sub_1800ACA60(a1, a2, a3);
  if ( !result )
    return result;
  v34 = 0;
  v11 = a4 - 1;
  if ( !v11 )
  {
    v32 = 1;
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v32 = 2;
    goto LABEL_8;
  }
  if ( v12 != 1 )
  {
    v32 = 0;
LABEL_8:
    v34 = 0x10000;
    goto LABEL_10;
  }
  v32 = 3;
  v34 = 196608;
LABEL_10:
  v33 = 4;
  v31 = v6;
  v35 = 0;
  v36 = 0;
  sub_18002BBC0(a1, v6);
  v27 = a2;
  v28 = 0;
  v29 = 0;
  v25 = 0LL;
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 8);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
      if ( v15 == v14 )
      {
        v25 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180020FCC(v30, (__int64 *)&v25);
  sub_180010910((__int64)&v25);
  sub_1800DA968(v30[0], &v26);
  v16 = v26;
  v17 = *(__int64 (__fastcall **)(__int64, int *, __int64 *, __int64, char *))(*(_QWORD *)v26 + 24LL);
  v18 = *(_QWORD *)(a1 + 120);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v17(v16, &v31, &v27, a1 + 120, String);
  sub_1800DD668(v30[0], v19);
  v20 = v19 == 0;
  if ( v19 >= 0 )
  {
    if ( *((_QWORD *)String + 3) >= 0x10uLL )
      v9 = *(const char **)String;
    v21 = *(_QWORD *)(a1 + 120);
    if ( v21 )
    {
      v22 = *(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v21 + 40LL);
      if ( v9 )
        v23 = strnlen(v9, 0x7FFFFFFFuLL);
      else
        v23 = 0;
      v22(v21, &unk_180127F58, v23, v9);
    }
    v20 = v19 == 0;
  }
  v24 = v20;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  sub_180010910((__int64)v30);
  return v24;
}
