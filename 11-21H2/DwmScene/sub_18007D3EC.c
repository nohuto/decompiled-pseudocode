/*
 * XREFs of sub_18007D3EC @ 0x18007D3EC
 * Callers:
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18003D898 @ 0x18003D898 (sub_18003D898.c)
 *     sub_18003D930 @ 0x18003D930 (sub_18003D930.c)
 *     sub_180063BE4 @ 0x180063BE4 (sub_180063BE4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18007D3EC(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // rcx
  __int64 v14; // r8
  void (__fastcall *v15)(__int64, __int128 *); // r9
  __int64 v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int128 v33; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v34; // [rsp+50h] [rbp-91h] BYREF
  __int64 v35[2]; // [rsp+60h] [rbp-81h] BYREF
  __int128 v36; // [rsp+70h] [rbp-71h] BYREF
  __int128 v37; // [rsp+88h] [rbp-59h] BYREF
  __int128 v38; // [rsp+98h] [rbp-49h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-39h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v41; // [rsp+C8h] [rbp-19h] BYREF
  __int128 v42; // [rsp+D8h] [rbp-9h] BYREF
  __int128 v43; // [rsp+E8h] [rbp+7h] BYREF
  _BYTE v44[8]; // [rsp+F8h] [rbp+17h] BYREF
  __int64 v45; // [rsp+100h] [rbp+1Fh]

  v9 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 376LL))(*a3, v44);
  v36 = 0LL;
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
      if ( v12 == v11 )
      {
        v36 = *(_OWORD *)v9;
        break;
      }
    }
  }
  v13 = v45;
  if ( v45 && _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v10, v9);
  v14 = *(_QWORD *)(a1 + 272);
  v15 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v14 + 88LL);
  v38 = 0LL;
  v16 = *(_QWORD *)(v36 + 16);
  if ( !v16 )
LABEL_34:
    sub_1800120F4();
  v17 = *(_DWORD *)(v16 + 8);
  do
  {
    if ( !v17 )
      goto LABEL_34;
    v18 = v17;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17);
  }
  while ( v18 != v17 );
  v38 = *(_OWORD *)(v36 + 8);
  v15(v14, &v38);
  sub_18002C73C(*(_QWORD *)(a1 + 288) + 16LL);
  v19 = (__int64 *)sub_180028460(v36);
  v20 = v19[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = v19[1];
  }
  v35[0] = *v19;
  v35[1] = v20;
  v21 = *(_QWORD *)(a1 + 272);
  v39 = 0LL;
  v22 = *(_QWORD *)(v36 + 16);
  if ( !v22 )
LABEL_35:
    sub_1800120F4();
  v23 = *(_DWORD *)(v22 + 8);
  do
  {
    if ( !v23 )
      goto LABEL_35;
    v24 = v23;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 8), v23 + 1, v23);
  }
  while ( v24 != v23 );
  v39 = *(_OWORD *)(v36 + 8);
  sub_180063BE4(v21, (__int64)&v34, (__int64 *)&v39);
  sub_180010910((__int64)&v39);
  v25 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 184LL))(*a3);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a3 + 200LL))(*a3, &v37);
  v40 = 0LL;
  v26 = v25[1];
  if ( v26 )
  {
    *(_QWORD *)&v40 = *v25;
    *((_QWORD *)&v40 + 1) = v26;
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 12));
  }
  sub_18003D930(v35[0], (__int64 *)&v40);
  v42 = 0LL;
  if ( *((_QWORD *)&v37 + 1) )
  {
    v42 = v37;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 12LL));
  }
  sub_18003D898(v35[0], (__int64 *)&v42);
  v27 = v34;
  v41 = 0LL;
  v28 = v25[1];
  if ( v28 )
  {
    *(_QWORD *)&v41 = *v25;
    *((_QWORD *)&v41 + 1) = v28;
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 12));
  }
  sub_18003D930(v27, (__int64 *)&v41);
  v29 = v34;
  v43 = 0LL;
  if ( *((_QWORD *)&v37 + 1) )
  {
    v43 = v37;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 12LL));
  }
  sub_18003D898(v29, (__int64 *)&v43);
  v30 = *((_QWORD *)&v37 + 1);
  if ( *((_QWORD *)&v37 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  }
  v31 = v36;
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v36 + 104LL))(v36, &v34);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *, __int64))(*(_QWORD *)*a4 + 16LL))(*a4, a2, v31, a3, a5);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 112LL))(v31, &v34);
  v33 = 0LL;
  sub_18003D930(v35[0], (__int64 *)&v33);
  v33 = 0LL;
  sub_18003D898(v35[0], (__int64 *)&v33);
  v33 = 0LL;
  sub_18003D930(v34, (__int64 *)&v33);
  v33 = 0LL;
  sub_18003D898(v34, (__int64 *)&v33);
  sub_180010910((__int64)&v34);
  sub_180010910((__int64)v35);
  sub_180010910((__int64)&v36);
  sub_180010910((__int64)a4);
  sub_180010910(a5);
  return a2;
}
