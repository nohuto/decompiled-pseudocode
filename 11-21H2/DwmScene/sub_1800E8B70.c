/*
 * XREFs of sub_1800E8B70 @ 0x1800E8B70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_18000C8D4 @ 0x18000C8D4 (sub_18000C8D4.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_1800E2DA0 @ 0x1800E2DA0 (sub_1800E2DA0.c)
 *     sub_1800E6804 @ 0x1800E6804 (sub_1800E6804.c)
 *     sub_1800E6A74 @ 0x1800E6A74 (sub_1800E6A74.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800E8B70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  int v15; // edi
  __int64 v16; // rax
  __int64 *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 *v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rcx
  char v30; // di
  __int64 v31; // rbx
  __int64 *v32; // rax
  char v33; // di
  __int64 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v43[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  _BYTE v45[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v48[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v49[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-38h]
  __int64 v51[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v52; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v53[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v54[8]; // [rsp+130h] [rbp+30h] BYREF

  v6 = 0;
  LODWORD(v35) = 0;
  v7 = 8LL;
  sub_18000C8D4((__int64)v54, 8LL, 8LL);
  v8 = (__int64 *)(a2 + 8);
  v9 = 0LL;
  do
  {
    v10 = *v8;
    if ( *v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = *v8;
    }
    v11 = *(v8 - 1);
    v48[0] = v11;
    v48[1] = v10;
    if ( v11 )
    {
      v12 = (__int64 *)sub_180029E58((__int64 *)(v11 + 120), *(_DWORD *)(a1 + 88));
      v13 = v12[1];
      if ( v13 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v13 = v12[1];
      }
      v46 = v13;
      v14 = v45;
      v15 = v6 | 0x101;
      v16 = *v12;
    }
    else
    {
      v44 = 0LL;
      v14 = v43;
      v15 = v6 | 2;
      v16 = 0LL;
    }
    v41[0] = v16;
    v41[1] = *((_QWORD *)v14 + 1);
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
    if ( (v15 & 2) != 0 )
    {
      v15 &= ~2u;
      sub_180010910((__int64)v43);
    }
    if ( (v15 & 1) != 0 )
    {
      v15 &= ~1u;
      sub_180010910((__int64)v45);
    }
    sub_1800E6A74(v47, v41);
    if ( v47[0] )
    {
      v17 = sub_1800E2DA0(v47[0], &v36);
      v6 = v15 | 4;
      v18 = v6;
      v19 = 0LL;
      if ( &v52 == (char *)v17 )
        goto LABEL_18;
    }
    else
    {
      v35 = 0LL;
      v17 = &v35;
      v6 = v15 | 8;
      v18 = v6;
    }
    v19 = *v17;
    *v17 = 0LL;
LABEL_18:
    v20 = v54[v9];
    v54[v9] = v19;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( (v6 & 8) != 0 )
    {
      v6 = v18 & 0xFFFFFFF7;
      v21 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v6 &= ~4u;
      v22 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    v53[v9] = v54[v9];
    sub_180010910((__int64)v47);
    sub_180010910((__int64)v41);
    sub_180010910((__int64)v48);
    v8 += 2;
    ++v9;
    --v7;
  }
  while ( v7 );
  if ( *(_QWORD *)a3 )
  {
    v23 = *(_DWORD *)(a1 + 88);
    v24 = *(__int64 **)(*(_QWORD *)a3 + 256LL);
    v25 = (__int64 *)v24[1];
    v26 = v24;
    while ( !*((_BYTE *)v25 + 25) )
    {
      if ( *((_DWORD *)v25 + 8) >= v23 )
      {
        v26 = v25;
        v25 = (__int64 *)*v25;
      }
      else
      {
        v25 = (__int64 *)v25[2];
      }
    }
    if ( *((_BYTE *)v26 + 25) || v23 < *((_DWORD *)v26 + 8) || v26 == v24 )
    {
      v39 = 0LL;
      v28 = 0LL;
    }
    else
    {
      v27 = v26[6];
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
        v27 = v26[6];
      }
      v39 = v27;
      v28 = v26[5];
    }
    v29 = &v38;
    v30 = v6 | 0x10;
  }
  else
  {
    v50 = 0LL;
    v29 = (__int64 *)v49;
    v30 = v6 | 0x20;
    v28 = 0LL;
  }
  v42[0] = v28;
  v42[1] = v29[1];
  *v29 = 0LL;
  v29[1] = 0LL;
  if ( (v30 & 0x20) != 0 )
  {
    v30 &= ~0x20u;
    sub_180010910((__int64)v49);
  }
  if ( (v30 & 0x10) != 0 )
  {
    v30 &= ~0x10u;
    sub_180010910((__int64)&v38);
  }
  sub_1800E6804(v51, v42);
  if ( v51[0] )
  {
    v31 = *(_QWORD *)(v51[0] + 112);
    v37 = v31;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    v32 = &v37;
    v33 = v30 | 0x40;
  }
  else
  {
    v32 = &v40;
    v33 = v30 | 0x80;
    v31 = 0LL;
  }
  v38 = v31;
  *v32 = 0LL;
  if ( v33 < 0 )
  {
    v33 &= ~0x80u;
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( (v33 & 0x40) != 0 && v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64, _QWORD *(__fastcall *)(_QWORD *)))(**(_QWORD **)(a1 + 144)
                                                                                               + 264LL))(
    *(_QWORD *)(a1 + 144),
    8LL,
    v53,
    v31,
    sub_18000D620);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  sub_180010910((__int64)v51);
  sub_180010910((__int64)v42);
  return sub_18000B4C0((__int64)v54, 8LL, 8LL);
}
