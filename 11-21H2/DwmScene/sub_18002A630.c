/*
 * XREFs of sub_18002A630 @ 0x18002A630
 * Callers:
 *     sub_18002A050 @ 0x18002A050 (sub_18002A050.c)
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18002A630(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rax
  _QWORD *v33; // [rsp+30h] [rbp-89h] BYREF
  __int64 v34; // [rsp+38h] [rbp-81h]
  __int128 v35; // [rsp+40h] [rbp-79h] BYREF
  __int128 v36; // [rsp+50h] [rbp-69h] BYREF
  __int128 v37; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v39[2]; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v41[32]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v42[32]; // [rsp+C0h] [rbp+7h] BYREF
  _BYTE v43[32]; // [rsp+E0h] [rbp+27h] BYREF

  result = sub_180028544(a2);
  v6 = result;
  if ( (_DWORD)result )
  {
    v35 = 0LL;
    v7 = *(_QWORD *)(v5 + 16);
    if ( !v7 )
LABEL_34:
      sub_1800120F4();
    v8 = *(_DWORD *)(v7 + 8);
    do
    {
      if ( !v8 )
        goto LABEL_34;
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
    }
    while ( v9 != v8 );
    v35 = *(_OWORD *)(a2 + 8);
    sub_18002B740(a1, &v35);
    sub_180010910((__int64)&v35);
    sub_180010D18(a2, &v33);
    v10 = v33;
    v11 = sub_18002B9EC(a1, v41);
    sub_18002BC44(v10, v11);
    v12 = *(_QWORD *)(a1 + 136);
    if ( v12 )
    {
      v13 = *(unsigned int **)(v12 + 128);
      if ( v13 )
        v14 = v13[4];
      else
        v14 = 0LL;
      if ( v13 )
        v15 = v13[1];
      else
        v15 = 0LL;
      if ( v13 )
        v16 = *v13;
      else
        v16 = 0LL;
    }
    else
    {
      v16 = 0LL;
      v15 = 0LL;
      v14 = 0LL;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, _DWORD))(*v33 + 40LL))(
      v33,
      v16,
      v15,
      v14,
      *(_DWORD *)(a1 + 112));
    v17 = (_QWORD *)sub_180029E58((__int64 *)(a1 + 120), v6);
    v18 = v34;
    if ( v34 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
      v18 = v34;
    }
    v38[0] = *v17;
    *v17 = v33;
    v38[1] = v17[1];
    v17[1] = v18;
    sub_180010910((__int64)v38);
    v19 = *(_QWORD *)(a1 + 136);
    if ( v19 )
    {
      v20 = v33;
      v36 = 0LL;
      v21 = v33[13];
      if ( v21 )
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
      v36 = *((_OWORD *)v20 + 6);
      sub_18005D1D8(v19, &v36);
      v22 = v33;
      v23 = v33[13];
      if ( v23 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
        v23 = v22[13];
      }
      v24 = v22[12];
      v39[0] = v24;
      v39[1] = v23;
      v25 = sub_18002B9EC(*(_QWORD *)(a1 + 136), v42);
      sub_18002BC44(v24, v25);
      sub_180010910((__int64)v39);
    }
    v26 = *(_QWORD *)(a1 + 152);
    if ( v26 )
    {
      v27 = v33;
      v37 = 0LL;
      v28 = v33[15];
      if ( v28 )
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
      v37 = *((_OWORD *)v27 + 7);
      sub_18005D1D8(v26, &v37);
      v29 = v33;
      v30 = v33[15];
      if ( v30 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
        v30 = v29[15];
      }
      v31 = v29[14];
      v40[0] = v31;
      v40[1] = v30;
      v32 = sub_18002B9EC(*(_QWORD *)(a1 + 152), v43);
      sub_18002BC44(v31, v32);
      sub_180010910((__int64)v40);
    }
    sub_18002BAAC(a1, v6);
    return sub_180010910((__int64)&v33);
  }
  return result;
}
