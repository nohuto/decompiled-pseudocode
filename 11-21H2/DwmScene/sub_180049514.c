/*
 * XREFs of sub_180049514 @ 0x180049514
 * Callers:
 *     sub_180068348 @ 0x180068348 (sub_180068348.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_1800690B8 @ 0x1800690B8 (sub_1800690B8.c)
 *     sub_1800694C0 @ 0x1800694C0 (sub_1800694C0.c)
 *     sub_180090184 @ 0x180090184 (sub_180090184.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180049514(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v26[16]; // [rsp+70h] [rbp-10h] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  v22[0] = a1[17];
  a1[17] = v5;
  v22[1] = a1[18];
  a1[18] = v4;
  sub_180010910((__int64)v22);
  v6 = (_QWORD *)sub_1800694C0(*a2, 2LL);
  v7 = v6[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = v6[1];
  }
  v24[0] = *v6;
  v24[1] = v7;
  v8 = (__int64 *)sub_180090184(v24[0], v25);
  v9 = *v8;
  v10 = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  v23[0] = a1[15];
  a1[15] = v9;
  v23[1] = a1[16];
  a1[16] = v10;
  sub_180010910((__int64)v23);
  sub_180010910((__int64)v25);
  v11 = (_QWORD *)sub_1800690B8(a1[17], v26);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v11 + 16LL))(*v11, a1);
  sub_180010910((__int64)v26);
  v21 = 0LL;
  v12 = a1[13];
  if ( !v12 )
LABEL_16:
    sub_1800120F4();
  v13 = *(_DWORD *)(v12 + 8);
  do
  {
    if ( !v13 )
      goto LABEL_16;
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13);
  }
  while ( v14 != v13 );
  v15 = a1[12];
  *(_QWORD *)&v21 = v15;
  v16 = a1[13];
  *((_QWORD *)&v21 + 1) = v16;
  v17 = 0LL;
  v18 = 0LL;
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 12));
    v17 = v15;
    v18 = v16;
  }
  a1[27] = v17;
  v19 = (volatile signed __int32 *)a1[28];
  a1[28] = v18;
  if ( v19 && _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
  sub_180010910((__int64)&v21);
  sub_180010910((__int64)v24);
  return sub_180010910((__int64)a2);
}
