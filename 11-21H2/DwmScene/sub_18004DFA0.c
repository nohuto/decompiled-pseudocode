/*
 * XREFs of sub_18004DFA0 @ 0x18004DFA0
 * Callers:
 *     sub_18004EE74 @ 0x18004EE74 (sub_18004EE74.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002B9E0 @ 0x18002B9E0 (sub_18002B9E0.c)
 *     sub_18002BA14 @ 0x18002BA14 (sub_18002BA14.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_1800372F4 @ 0x1800372F4 (sub_1800372F4.c)
 *     sub_18004E8E0 @ 0x18004E8E0 (sub_18004E8E0.c)
 *     sub_18004E968 @ 0x18004E968 (sub_18004E968.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18004DFA0(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  char *v13; // rsi
  char result; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-49h] BYREF
  __int64 v18; // [rsp+28h] [rbp-41h]
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+38h] [rbp-31h]
  _BYTE v21[72]; // [rsp+50h] [rbp-19h] BYREF
  char v22; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF

  sub_18002B740(a1, a2);
  v4 = sub_180028544(*a2);
  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(v5 + 8);
  v19 = v6;
  v20 = 0;
  v7 = v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v19 = v6;
    if ( *(_DWORD *)(v6 + 32) >= v4 )
    {
      v20 = 1;
      v7 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v20 = 0;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  if ( *(_BYTE *)(v7 + 25) || v4 < *(_DWORD *)(v7 + 32) )
  {
    if ( *(_QWORD *)(a1 + 136) == 0x492492492492492LL )
      sub_18001F56C();
    v23 = v5;
    v17 = a1 + 128;
    v8 = sub_180011088(0x38uLL);
    v18 = v8;
    *(_DWORD *)(v8 + 32) = v4;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    sub_18001DE7C((__int64 *)v8, &v23);
    sub_18001DE7C((__int64 *)(v9 + 8), &v23);
    sub_18001DE7C((__int64 *)(v10 + 16), &v23);
    *(_WORD *)(v11 + 24) = 0;
    v7 = sub_18001F31C((_QWORD *)(a1 + 128), (__int64)&v19, v11);
  }
  v12 = a2[1];
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = a2[1];
  }
  v17 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = *a2;
  v18 = *(_QWORD *)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v12;
  sub_180010910((__int64)&v17);
  sub_18004E968(a1, v21);
  v13 = v21;
  do
  {
    if ( *(_QWORD *)v13 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v13 + 16LL))(*(_QWORD *)v13, a2);
    v13 += 8;
  }
  while ( v13 != &v22 );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
    sub_18002BAAC(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( sub_18002BA14(a1, 8) )
      return sub_18004E8E0(a1, 0LL);
    v16 = sub_18002B9E0(v15);
    result = sub_1800372F4(v16, 5);
    if ( result )
      return sub_18004E8E0(a1, 0LL);
  }
  return result;
}
