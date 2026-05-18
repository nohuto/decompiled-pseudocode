/*
 * XREFs of sub_1800AB8A0 @ 0x1800AB8A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18001CB90 @ 0x18001CB90 (sub_18001CB90.c)
 *     sub_180056668 @ 0x180056668 (sub_180056668.c)
 *     sub_180068338 @ 0x180068338 (sub_180068338.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180069008 @ 0x180069008 (sub_180069008.c)
 *     sub_18008BCEC @ 0x18008BCEC (sub_18008BCEC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800AB8A0(__int64 *a1, __int128 *a2, int **a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  int *v16; // r15
  int *i; // rbx
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v21[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v22[4]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-11h] BYREF
  char *v24[3]; // [rsp+98h] [rbp+Fh] BYREF
  unsigned __int64 v25; // [rsp+B0h] [rbp+27h]

  (*(void (__fastcall **)(__int64 *, char **))(*a1 + 184))(a1, v24);
  v20[0] = &v19;
  v19 = 0LL;
  v6 = a1[2];
  if ( !v6 )
LABEL_14:
    sub_1800120F4();
  v7 = *(_DWORD *)(v6 + 8);
  do
  {
    if ( !v7 )
      goto LABEL_14;
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
  }
  while ( v8 != v7 );
  v19 = *(_OWORD *)(a1 + 1);
  v9 = sub_18001875C(v22, (__int64)v24);
  v10 = sub_180056668(a2, v21, (char **)v9, &v19);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v20[0] = a1[7];
  a1[7] = v11;
  v20[1] = a1[8];
  a1[8] = v12;
  sub_180010910((__int64)v20);
  sub_180010910((__int64)v21);
  v13 = a1[7];
  v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a1 + 176))(a1, v23);
  sub_18008BCEC(v13, v14);
  v15 = a1[7] + 528;
  if ( (int **)v15 != a3 )
    sub_18001CB90(v15, (__int64)a3);
  (*(void (__fastcall **)(__int64 *))(*a1 + 136))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  v16 = a3[1];
  for ( i = *a3; i != v16; ++i )
  {
    sub_180068338(a1[7], *i);
    (*(void (__fastcall **)(__int64 *, __int128 *))(*a1 + 152))(a1, a2);
    sub_180069008(a1[7]);
  }
  (*(void (__fastcall **)(__int64 *, __int128 *))(*a1 + 144))(a1, a2);
  result = sub_180068E10(a1[7]);
  if ( v25 >= 0x10 )
    return sub_180010884(v24[0], v25 + 1);
  return result;
}
