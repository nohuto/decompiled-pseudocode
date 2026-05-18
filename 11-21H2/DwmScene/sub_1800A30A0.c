/*
 * XREFs of sub_1800A30A0 @ 0x1800A30A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 *     sub_180037450 @ 0x180037450 (sub_180037450.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_1800A12C4 @ 0x1800A12C4 (sub_1800A12C4.c)
 *     sub_1800A1748 @ 0x1800A1748 (sub_1800A1748.c)
 *     sub_1800A1AD8 @ 0x1800A1AD8 (sub_1800A1AD8.c)
 *     sub_1800A1DE8 @ 0x1800A1DE8 (sub_1800A1DE8.c)
 *     sub_1800FC0A4 @ 0x1800FC0A4 (sub_1800FC0A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800A30A0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  int v9; // xmm1_4
  __int64 v10; // rcx
  char v11; // al
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _BYTE *v14; // rdx
  _QWORD *v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // kr00_16
  __int64 v19; // rdx
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v30[7]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v31; // [rsp+E8h] [rbp-18h]
  _OWORD v32[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v33; // [rsp+110h] [rbp+10h]
  int v34; // [rsp+114h] [rbp+14h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+124h] [rbp+24h]
  __int64 v38; // [rsp+160h] [rbp+60h]
  _BYTE v39[56]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD *v40; // [rsp+1A0h] [rbp+A0h]
  _BYTE v41[56]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE *v42; // [rsp+1E8h] [rbp+E8h]

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
  sub_180037450(v2, v29, (__int64 *)&v22);
  sub_180010910((__int64)&v22);
  sub_180010910((__int64)&v23);
  sub_1800A1DE8(a1, &v25);
  v9 = *(_DWORD *)(a1 + 1840);
  v32[0] = 0LL;
  v10 = v26;
  if ( v26 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
    v10 = v26;
  }
  *(_QWORD *)&v32[0] = v25;
  *((_QWORD *)&v32[0] + 1) = v10;
  v32[1] = 0LL;
  v33 = v9;
  v34 = 0;
  v36 = 1;
  v37 = 0;
  v38 = 0LL;
  v40 = 0LL;
  v35 = (unsigned int)(int)(float)(*(float *)(a1 + 1848) * 1000000000.0);
  v31 = 0LL;
  v11 = sub_1800A1748();
  if ( v11 )
  {
    v30[0] = &std::_Func_impl_no_alloc<_lambda_ea41cd23b26e0611689875f9c09e5ed7_,void,>::`vftable';
    v30[1] = a1;
    v31 = v30;
  }
  v12 = (_QWORD *)((unsigned __int64)v30 & -(__int64)(v11 != 0));
  v13 = v30;
  if ( v12 == v30 )
  {
    v42 = 0LL;
    sub_180029710((__int64)v41, (__int64)v30);
    sub_180029710((__int64)v30, (__int64)v39);
    sub_180029710((__int64)v39, (__int64)v41);
    if ( v42 )
    {
      v14 = v41;
      LOBYTE(v14) = v42 != v41;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v42 + 32LL))(v42, v14);
    }
    v13 = v31;
    if ( v31 )
    {
      v15 = v30;
      LOBYTE(v15) = v31 != v30;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v31 + 32LL))(v31, v15);
    }
  }
  else
  {
    v40 = v12;
  }
  v16 = (__int64 *)sub_1800FC0A4(v13, &v27);
  v17 = *v16;
  *v16 = 0LL;
  v21 = v17;
  sub_1800A12C4(v29[0], (__int64 *)&v24, (__int64 *)v32, &v21);
  if ( v27 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 8LL))(v27, 1LL);
  v18 = v24;
  v24 = 0LL;
  v28[0] = *(_QWORD *)(a1 + 1768);
  *(_QWORD *)(a1 + 1768) = v18;
  v28[1] = *(_QWORD *)(a1 + 1776);
  *(_QWORD *)(a1 + 1776) = *((_QWORD *)&v18 + 1);
  sub_180010910((__int64)v28);
  sub_180010910((__int64)&v24);
  *(_WORD *)(a1 + 1896) = 1;
  sub_1800A1AD8((__int64)v32, v19);
  sub_180010910((__int64)&v25);
  return sub_180010910((__int64)v29);
}
