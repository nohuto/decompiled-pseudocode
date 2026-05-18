/*
 * XREFs of sub_1800E9C20 @ 0x1800E9C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 *     sub_1800E61F4 @ 0x1800E61F4 (sub_1800E61F4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800E9C20(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // r14
  char v13; // bl
  char v14; // bl
  __int64 *v15; // rdx
  char v16; // di
  __int64 v17; // rcx
  char v18; // di
  __int64 v19; // rcx
  int v20; // esi
  int v21; // esi
  void *v22; // rax
  __int64 v23; // rcx
  _QWORD v25[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v26[3]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+58h] [rbp-21h] BYREF
  __int64 v28; // [rsp+60h] [rbp-19h]
  _BYTE v29[8]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+70h] [rbp-9h]
  _QWORD v31[2]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v32[72]; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v33; // [rsp+F0h] [rbp+77h] BYREF

  if ( *a3 )
  {
    v7 = sub_18005E29C(*a3, v31, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v25[1] = 0LL;
    v7 = v25;
    v8 = 2;
    v9 = 0LL;
  }
  v27 = v9;
  v10 = v7[1];
  v28 = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    sub_180010910((__int64)v25);
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    sub_180010910((__int64)v31);
  }
  if ( v9 )
  {
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = v28;
    }
    v26[1] = v9;
    v26[2] = v10;
    v11 = (__int64 *)sub_180018704((__int64)v32);
    v12 = *v11;
    v13 = 4;
  }
  else
  {
    v30 = 0LL;
    v11 = (__int64 *)v29;
    v12 = 0LL;
    v13 = 8;
  }
  v14 = v8 | v13;
  v31[0] = v12;
  v31[1] = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v14 & 8) != 0 )
  {
    v14 &= ~8u;
    sub_180010910((__int64)v29);
  }
  if ( (v14 & 4) != 0 )
  {
    v14 &= ~4u;
    sub_180010910((__int64)v32);
  }
  if ( v12 )
  {
    v15 = sub_1800E61F4(v12, v26);
    v16 = 16;
    v17 = v25[0];
  }
  else
  {
    v17 = 0LL;
    v25[0] = 0LL;
    v15 = v25;
    v16 = 32;
  }
  v18 = v14 | v16;
  v33 = 0LL;
  if ( &v33 != v15 )
  {
    v33 = *v15;
    *v15 = 0LL;
    v17 = v25[0];
  }
  if ( (v18 & 0x20) != 0 )
  {
    v18 &= ~0x20u;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( (v18 & 0x10) != 0 )
  {
    v19 = v26[0];
    if ( v26[0] )
    {
      v26[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  if ( v12 && *(_BYTE *)(v12 + 208) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v33);
    *(_BYTE *)(v12 + 208) = 0;
  }
  v20 = a2 - 1;
  if ( v20 )
  {
    v21 = v20 - 3;
    if ( v21 )
    {
      if ( v21 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 64LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v33);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 248LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v33);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 200LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v33);
  }
  if ( v33 )
  {
    v22 = sub_18007BD8C();
    sub_18007BD68((__int64)v22, 11, 1);
  }
  v23 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  sub_180010910((__int64)v31);
  return sub_180010910((__int64)&v27);
}
