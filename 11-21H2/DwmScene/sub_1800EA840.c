/*
 * XREFs of sub_1800EA840 @ 0x1800EA840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18005E27C @ 0x18005E27C (sub_18005E27C.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E448 @ 0x18005E448 (sub_18005E448.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E6248 @ 0x1800E6248 (sub_1800E6248.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     sub_1800E6B44 @ 0x1800E6B44 (sub_1800E6B44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_1800EA840(__int64 a1, __int64 *a2, const void *a3, int a4)
{
  __int64 v7; // r11
  __int64 *v8; // rdx
  char v9; // di
  __int64 v10; // rbx
  int v11; // r15d
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **); // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rax
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **); // rdi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  char v27; // r15
  __int64 v28; // rdx
  char *v29; // rdi
  __int64 i; // rcx
  unsigned int v31; // edi
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r12
  __int64 v35; // rcx
  __int64 *v36; // rbx
  __int64 v37; // rdi
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v47; // [rsp+70h] [rbp-90h] BYREF
  void *v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+88h] [rbp-78h]
  _QWORD v50[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v51[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v52[2]; // [rsp+B0h] [rbp-50h]
  char v53; // [rsp+B8h] [rbp-48h] BYREF
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  int v56; // [rsp+110h] [rbp+10h]

  LODWORD(v44) = a4;
  v7 = 0LL;
  LODWORD(v43) = 0;
  if ( *a2 )
  {
    v8 = sub_18005E29C(*a2, v51, *(_DWORD *)(a1 + 88));
    v9 = v7 + 1;
    v10 = *v8;
  }
  else
  {
    v46[1] = 0LL;
    v8 = v46;
    v9 = 2;
    v10 = 0LL;
  }
  v50[0] = v10;
  v50[1] = v8[1];
  *v8 = v7;
  v8[1] = v7;
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    sub_180010910((__int64)v46);
  }
  if ( (v9 & 1) != 0 )
    sub_180010910((__int64)v51);
  v11 = -((unsigned int)sub_18005E448(v10) != 2);
  sub_1800E6B44(v45, v50);
  v12 = 1;
  v13 = *(_QWORD *)(*a2 + 128);
  if ( v13 && *(_DWORD *)(v13 + 12) == 1 )
  {
    v14 = *(_QWORD *)(a1 + 144);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v14 + 112LL);
    v16 = v45[0];
    v17 = sub_1800E6288(v45[0], &v43);
    v18 = v15(v14, *v17, 0LL, (unsigned int)(v11 + 4), 0, &v48);
    v19 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    v16 = v45[0];
    v12 = sub_18005E27C(v45[0]);
    v20 = *(_QWORD *)(a1 + 144);
    v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v20 + 112LL);
    v22 = sub_1800E6248(v16, &v43);
    v18 = v21(v20, *v22, 0LL, (unsigned int)(v11 + 4), 0, &v48);
    v23 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  v47 = 0LL;
  v24 = *(_QWORD *)(a1 + 80);
  if ( v24 )
  {
    v25 = *(_DWORD *)(v24 + 8);
    while ( v25 )
    {
      v26 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 8), v25 + 1, v25);
      if ( v26 == v25 )
      {
        v47 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
    v16 = v45[0];
  }
  sub_1800E6A0C(v46, &v47);
  sub_180010910((__int64)&v47);
  sub_1800DD668(v46[0], v18);
  v27 = 0;
  if ( v18 < 0 )
  {
    sub_18001F2B4(&stru_1801EA548, 3, "Failed to update Texture with HRESULT error 0x%.8x", v18);
  }
  else
  {
    v28 = (unsigned int)sub_18005E30C(v16);
    v52[0] = 0;
    v52[1] = 1;
    v29 = &v53;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v29 = 1;
      v29 += 4;
    }
    v54 = 4;
    v55 = 1;
    v56 = 1;
    v31 = v52[v28];
    v32 = sub_18005E3D8(v16);
    v33 = v12 * v49 * v32 / v31;
    if ( v33 == (_DWORD)v44 )
    {
      sub_18001060C(v48, v33, a3, v33);
      v27 = 1;
    }
    v34 = *sub_1800E6288(v16, &v43);
    v35 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = *(__int64 **)(a1 + 144);
    v37 = *v36;
    if ( v34 )
    {
      v38 = sub_1800E6288(v16, &v44);
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v37 + 120))(v36, *v38, 0LL);
      v39 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    else
    {
      v40 = sub_1800E6248(v16, &v44);
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v37 + 120))(v36, *v40, 0LL);
      v41 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
  }
  sub_180010910((__int64)v46);
  sub_180010910((__int64)v45);
  sub_180010910((__int64)v50);
  return v27;
}
