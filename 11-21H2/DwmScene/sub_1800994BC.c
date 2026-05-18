/*
 * XREFs of sub_1800994BC @ 0x1800994BC
 * Callers:
 *     sub_1800997F0 @ 0x1800997F0 (sub_1800997F0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800994BC(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  volatile signed __int32 *v13; // rcx
  _QWORD v15[2]; // [rsp+28h] [rbp-59h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v20; // [rsp+78h] [rbp-9h] BYREF
  __int128 v21; // [rsp+88h] [rbp+7h] BYREF
  __int128 v22; // [rsp+98h] [rbp+17h] BYREF
  __int128 v23; // [rsp+A8h] [rbp+27h] BYREF
  __int128 v24; // [rsp+B8h] [rbp+37h] BYREF

  v1 = (__int64)(a1 + 12);
  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  v3 = a1[12];
  a1[12] = 0LL;
  v15[0] = v3;
  v4 = a1[13];
  a1[13] = 0LL;
  v15[1] = v4;
  v20 = 0LL;
  sub_180010910((__int64)v15);
  sub_180010910((__int64)&v20);
  v5 = a1[14];
  a1[14] = 0LL;
  v16[0] = v5;
  v6 = a1[15];
  a1[15] = 0LL;
  v16[1] = v6;
  v21 = 0LL;
  sub_180010910((__int64)v16);
  sub_180010910((__int64)&v21);
  v7 = a1[16];
  a1[16] = 0LL;
  v17[0] = v7;
  v8 = a1[17];
  a1[17] = 0LL;
  v17[1] = v8;
  v22 = 0LL;
  sub_180010910((__int64)v17);
  sub_180010910((__int64)&v22);
  v9 = a1[18];
  a1[18] = 0LL;
  v18[0] = v9;
  v10 = a1[19];
  a1[19] = 0LL;
  v18[1] = v10;
  v23 = 0LL;
  sub_180010910((__int64)v18);
  sub_180010910((__int64)&v23);
  v11 = a1[20];
  a1[20] = 0LL;
  v19[0] = v11;
  v12 = a1[21];
  a1[21] = 0LL;
  v19[1] = v12;
  v24 = 0LL;
  sub_180010910((__int64)v19);
  sub_180010910((__int64)&v24);
  sub_180010910((__int64)(a1 + 20));
  sub_180010910((__int64)(a1 + 18));
  sub_180010910((__int64)(a1 + 16));
  sub_180010910((__int64)(a1 + 14));
  sub_180010910(v1);
  v13 = (volatile signed __int32 *)a1[10];
  if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  return sub_18002B404((__int64)a1);
}
