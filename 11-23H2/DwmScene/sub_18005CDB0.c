/*
 * XREFs of sub_18005CDB0 @ 0x18005CDB0
 * Callers:
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800507AC @ 0x1800507AC (sub_1800507AC.c)
 *     sub_1800507E4 @ 0x1800507E4 (sub_1800507E4.c)
 *     sub_18005081C @ 0x18005081C (sub_18005081C.c)
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 *     sub_18005D808 @ 0x18005D808 (sub_18005D808.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18005CDB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r12
  char v6; // al
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int128 *v10; // rax
  __int128 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int64 v16; // [rsp+28h] [rbp-79h] BYREF
  __int64 v17; // [rsp+30h] [rbp-71h]
  __int64 v18; // [rsp+38h] [rbp-69h] BYREF
  __int64 v19; // [rsp+40h] [rbp-61h]
  __int64 v20; // [rsp+48h] [rbp-59h] BYREF
  __int64 v21; // [rsp+50h] [rbp-51h]
  __int128 v22; // [rsp+58h] [rbp-49h] BYREF
  __int128 v23; // [rsp+68h] [rbp-39h]
  __int128 v24; // [rsp+78h] [rbp-29h]
  __int128 v25; // [rsp+88h] [rbp-19h]
  _BYTE v26[8]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-1h]
  _BYTE v28[64]; // [rsp+A8h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 172) )
  {
    sub_18001246C(&v20, (_QWORD *)(a1 + 152));
    v4 = v20;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 48LL))(v20, v26);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 72LL))(
           v4,
           a2,
           *(unsigned int *)(a1 + 172));
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2, 3LL);
    v7 = v6;
    if ( v5 || v6 )
    {
      v8 = sub_18008141C(a1);
      v9 = sub_180034870(v8);
      if ( !sub_18001F84C(a1 + 184) && v5 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 56LL))(
          v4,
          &v16,
          *(unsigned int *)(a1 + 172));
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v4 + 64LL))(
          v4,
          &v18,
          *(unsigned int *)(a1 + 172));
        sub_1800507E4(v9, a1 + 184, &v16);
        sub_18005081C(v9, a1 + 184, &v18);
        if ( v19 )
          sub_180010530(v19);
        if ( v17 )
          sub_180010530(v17);
      }
      if ( !sub_18001F84C(a1 + 216) )
      {
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v4 + 56LL))(v4, &v16, 3LL);
          sub_1800507E4(v9, a1 + 216, &v16);
          if ( v17 )
            sub_180010530(v17);
        }
      }
      if ( !sub_18001F84C(a1 + 248) )
      {
        v10 = (__int128 *)sub_18005BBB4(a1, 2, 0);
        v22 = *v10;
        v23 = v10[1];
        v24 = v10[2];
        v25 = v10[3];
        v11 = (__int128 *)sub_18005D808(&v22, v28);
        v12 = v11[1];
        v13 = v11[2];
        v14 = v11[3];
        v22 = *v11;
        v23 = v12;
        v24 = v13;
        v25 = v14;
        sub_1800507AC(v9);
      }
    }
    if ( v27 )
      sub_180010530(v27);
    if ( v21 )
      sub_180010530(v21);
  }
  return 1;
}
