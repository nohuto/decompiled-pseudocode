/*
 * XREFs of sub_180041EF4 @ 0x180041EF4
 * Callers:
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001287C @ 0x18001287C (sub_18001287C.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180041EF4(__int64 a1, _QWORD *a2)
{
  _QWORD *i; // rcx
  __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 v18; // rbx
  __int128 v19; // kr00_16
  volatile signed __int32 *v20; // rcx
  __int64 v21; // rbx
  volatile signed __int32 *v22; // rcx
  __int64 v23; // rbx
  __int128 v24; // kr10_16
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rbx
  volatile signed __int32 *v27; // rcx
  __int128 v29; // [rsp+20h] [rbp-50h] BYREF
  __int128 v30; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v31[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF
  __int128 v33; // [rsp+60h] [rbp-10h] BYREF

  sub_1800436D4(a1);
  for ( i = *(_QWORD **)(a1 + 32); i != *(_QWORD **)(a1 + 40) && !sub_180016240(i, a2); i += 2 )
    ;
  v5 = sub_18001287C((__int64)i);
  v6 = *(__int64 **)(a1 + 40);
  v7 = (__int64 *)(v5 + 16);
  if ( (__int64 *)(v5 + 16) != v6 )
  {
    do
    {
      v8 = *v7;
      v9 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v31[0] = *(v7 - 2);
      *(v7 - 2) = v8;
      v31[1] = *(v7 - 1);
      *(v7 - 1) = v9;
      sub_180010910((__int64)v31);
      v7 += 2;
    }
    while ( v7 != v6 );
    v6 = *(__int64 **)(a1 + 40);
  }
  sub_180010910((__int64)(v6 - 2));
  *(_QWORD *)(a1 + 40) -= 16LL;
  v10 = *a2;
  sub_180043668(*a2);
  v30 = 0LL;
  v11 = *(_QWORD *)(v10 + 120);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 8);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
      if ( v13 == v12 )
      {
        v30 = *(_OWORD *)(v10 + 112);
        break;
      }
    }
  }
  v14 = *a2;
  sub_180043668(*a2);
  v29 = 0LL;
  v15 = *(_QWORD *)(v14 + 136);
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 + 8);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16);
      if ( v17 == v16 )
      {
        v29 = *(_OWORD *)(v14 + 128);
        break;
      }
    }
  }
  v18 = v30;
  if ( (_QWORD)v30 )
  {
    sub_1800436D4(v30);
    v19 = 0uLL;
    if ( *((_QWORD *)&v29 + 1) )
    {
      v19 = v29;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 12LL));
    }
    *(_QWORD *)(v30 + 128) = v19;
    v20 = *(volatile signed __int32 **)(v18 + 136);
    *(_QWORD *)(v18 + 136) = *((_QWORD *)&v19 + 1);
    if ( v20 && _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    v21 = *a2;
    v32 = 0LL;
    sub_1800436D4(v21);
    *(_QWORD *)(v21 + 112) = 0LL;
    v22 = *(volatile signed __int32 **)(v21 + 120);
    *(_QWORD *)(v21 + 120) = 0LL;
    if ( v22 && _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    sub_180010910((__int64)&v32);
  }
  v23 = v29;
  if ( (_QWORD)v29 )
  {
    sub_1800436D4(v29);
    v24 = 0uLL;
    if ( *((_QWORD *)&v30 + 1) )
    {
      v24 = v30;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 12LL));
    }
    *(_QWORD *)(v29 + 112) = v24;
    v25 = *(volatile signed __int32 **)(v23 + 120);
    *(_QWORD *)(v23 + 120) = *((_QWORD *)&v24 + 1);
    if ( v25 && _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    v26 = *a2;
    v33 = 0LL;
    sub_1800436D4(v26);
    *(_QWORD *)(v26 + 128) = 0LL;
    v27 = *(volatile signed __int32 **)(v26 + 136);
    *(_QWORD *)(v26 + 136) = 0LL;
    if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    sub_180010910((__int64)&v33);
  }
  sub_180010910((__int64)&v29);
  return sub_180010910((__int64)&v30);
}
