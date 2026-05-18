/*
 * XREFs of sub_18005D3E4 @ 0x18005D3E4
 * Callers:
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     sub_18005DF04 @ 0x18005DF04 (sub_18005DF04.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005D3E4(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  _QWORD *v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  volatile signed __int32 *v23; // rcx
  __int128 v25; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-40h]
  __int64 v27; // [rsp+38h] [rbp-38h]
  _QWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  int v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+C0h] [rbp+50h] BYREF

  v4 = *a2;
  v5 = *(_DWORD *)(*a2 + 88LL);
  v6 = a1 + 14;
  v7 = a1[14];
  v8 = *(_QWORD *)(v7 + 8);
  v29 = v8;
  v30 = 0;
  v9 = v7;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v29 = v8;
    if ( *(_DWORD *)(v8 + 32) >= v5 )
    {
      v30 = 1;
      v9 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v30 = 0;
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  if ( *(_BYTE *)(v9 + 25) || v5 < *(_DWORD *)(v9 + 32) )
  {
    if ( v6[1] == 0x492492492492492LL )
      sub_18001F56C();
    v31 = v7;
    v26 = v6;
    v10 = sub_180011088(0x38uLL);
    v27 = v10;
    *(_DWORD *)(v10 + 32) = v5;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    sub_18001DE7C((__int64 *)v10, &v31);
    sub_18001DE7C((__int64 *)(v11 + 8), &v31);
    sub_18001DE7C((__int64 *)(v12 + 16), &v31);
    *(_WORD *)(v13 + 24) = 0;
    v9 = sub_18001F31C(v6, (__int64)&v29, v13);
  }
  v14 = *a2;
  v15 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v28[0] = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v9 + 40) = v14;
  v28[1] = *(_QWORD *)(v9 + 48);
  *(_QWORD *)(v9 + 48) = v15;
  sub_180010910((__int64)v28);
  v25 = 0LL;
  v16 = a1[13];
  if ( !v16 )
LABEL_22:
    sub_1800120F4();
  v17 = *(_DWORD *)(v16 + 8);
  do
  {
    if ( !v17 )
      goto LABEL_22;
    v18 = v17;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17);
  }
  while ( v18 != v17 );
  v19 = a1[12];
  *(_QWORD *)&v25 = v19;
  v20 = a1[13];
  *((_QWORD *)&v25 + 1) = v20;
  v21 = 0LL;
  v22 = 0LL;
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 12));
    v21 = v19;
    v22 = v20;
  }
  *(_QWORD *)(v4 + 96) = v21;
  v23 = *(volatile signed __int32 **)(v4 + 104);
  *(_QWORD *)(v4 + 104) = v22;
  if ( v23 && _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
  sub_180010910((__int64)&v25);
  return sub_180010910((__int64)a2);
}
