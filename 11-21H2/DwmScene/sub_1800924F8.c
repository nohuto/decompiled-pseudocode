/*
 * XREFs of sub_1800924F8 @ 0x1800924F8
 * Callers:
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800924F8(_QWORD *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  volatile signed __int32 *v22; // rcx
  __int128 v24; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  _QWORD v27[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+58h] [rbp-18h]
  __int64 v30; // [rsp+98h] [rbp+28h] BYREF

  v4 = *(_DWORD *)(*a2 + 88LL);
  v5 = a1 + 14;
  v6 = a1[14];
  v7 = *(_QWORD *)(v6 + 8);
  v28 = v7;
  v29 = 0;
  v8 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    v28 = v7;
    if ( *(_DWORD *)(v7 + 32) >= v4 )
    {
      v29 = 1;
      v8 = v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v29 = 0;
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( *(_BYTE *)(v8 + 25) || v4 < *(_DWORD *)(v8 + 32) )
  {
    if ( v5[1] == 0x492492492492492LL )
      sub_18001F56C();
    v30 = v6;
    v25 = v5;
    v9 = sub_180011088(0x38uLL);
    v26 = v9;
    *(_DWORD *)(v9 + 32) = v4;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    sub_18001DE7C((__int64 *)v9, &v30);
    sub_18001DE7C((__int64 *)(v10 + 8), &v30);
    sub_18001DE7C((__int64 *)(v11 + 16), &v30);
    *(_WORD *)(v12 + 24) = 0;
    v8 = sub_18001F31C(v5, (__int64)&v28, v12);
  }
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v13 = a2[1];
  }
  v27[0] = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 40) = *a2;
  v27[1] = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = v13;
  sub_180010910((__int64)v27);
  v24 = 0LL;
  v14 = a1[13];
  if ( !v14 )
LABEL_24:
    sub_1800120F4();
  v15 = *(_DWORD *)(v14 + 8);
  do
  {
    if ( !v15 )
      goto LABEL_24;
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15);
  }
  while ( v16 != v15 );
  v17 = a1[12];
  *(_QWORD *)&v24 = v17;
  v18 = a1[13];
  *((_QWORD *)&v24 + 1) = v18;
  v19 = *a2;
  v20 = 0LL;
  v21 = 0LL;
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 12));
    v20 = v17;
    v21 = v18;
  }
  *(_QWORD *)(v19 + 104) = v20;
  v22 = *(volatile signed __int32 **)(v19 + 112);
  *(_QWORD *)(v19 + 112) = v21;
  if ( v22 && _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
  return sub_180010910((__int64)&v24);
}
