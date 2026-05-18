/*
 * XREFs of sub_1800A2E10 @ 0x1800A2E10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180037450 @ 0x180037450 (sub_180037450.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_1800A12C4 @ 0x1800A12C4 (sub_1800A12C4.c)
 *     sub_1800A1AD8 @ 0x1800A1AD8 (sub_1800A1AD8.c)
 *     sub_1800FC0A4 @ 0x1800FC0A4 (sub_1800FC0A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800A2E10(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // xmm1_4
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // kr00_16
  __int64 v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-88h]
  __int64 v27; // [rsp+88h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v30[3]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E8h] [rbp-20h]
  int v34; // [rsp+ECh] [rbp-1Ch]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int v36; // [rsp+F8h] [rbp-10h]
  int v37; // [rsp+FCh] [rbp-Ch]
  __int64 v38; // [rsp+138h] [rbp+30h]
  __int64 v39; // [rsp+178h] [rbp+70h]

  sub_18008E70C(a1);
  v23 = 0LL;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    while ( v4 )
    {
      v2 = (unsigned int)(v4 + 1);
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v2, v4);
      if ( v5 == v4 )
      {
        v23 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v22 = 0LL;
  v6 = *(_QWORD *)(v23 + 80);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    while ( v7 )
    {
      v2 = (unsigned int)(v7 + 1);
      v8 = v7;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v2, v7);
      if ( v8 == v7 )
      {
        v22 = *(_OWORD *)(v23 + 72);
        break;
      }
    }
  }
  sub_180037450(v2, v30, (__int64 *)&v22);
  sub_180010910((__int64)&v22);
  sub_180010910((__int64)&v23);
  v28 = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  if ( !v9 )
LABEL_23:
    sub_1800120F4();
  v10 = *(_DWORD *)(v9 + 8);
  do
  {
    if ( !v10 )
      goto LABEL_23;
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
  }
  while ( v11 != v10 );
  v12 = *(_QWORD *)(a1 + 16);
  v13 = a1 + 1900;
  v25 = a1 + 1900;
  v26 = v12;
  *((_QWORD *)&v28 + 1) = 0LL;
  sub_180010910((__int64)&v28);
  v15 = *(_DWORD *)(a1 + 1852);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = v26;
    v13 = v25;
  }
  v31[0] = v13;
  v31[1] = v12;
  v32 = 0LL;
  v33 = v15;
  v34 = 0;
  v36 = 1;
  v37 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v35 = (unsigned int)(int)(float)(*(float *)(a1 + 1860) * 1000000000.0);
  v16 = (__int64 *)sub_1800FC0A4(v14, &v27);
  v17 = *v16;
  *v16 = 0LL;
  v21 = v17;
  sub_1800A12C4(v30[0], (__int64 *)&v24, v31, &v21);
  if ( v27 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1LL);
  v18 = v24;
  v24 = 0LL;
  v29[0] = *(_QWORD *)(a1 + 1784);
  *(_QWORD *)(a1 + 1784) = v18;
  v29[1] = *(_QWORD *)(a1 + 1792);
  *(_QWORD *)(a1 + 1792) = *((_QWORD *)&v18 + 1);
  sub_180010910((__int64)v29);
  sub_180010910((__int64)&v24);
  *(_BYTE *)(a1 + 1898) = 1;
  sub_1800A1AD8((__int64)v31, v19);
  sub_180010910((__int64)&v25);
  return sub_180010910((__int64)v30);
}
