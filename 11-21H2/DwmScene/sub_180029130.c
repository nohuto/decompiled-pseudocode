/*
 * XREFs of sub_180029130 @ 0x180029130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180018350 @ 0x180018350 (sub_180018350.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_1800275F0 @ 0x1800275F0 (sub_1800275F0.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180029130(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // r15
  __int64 v4; // rbx
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h]

  v3 = (__int64 *)(a1 + 24);
  v4 = a1 + 8;
  v19 = a1 + 8;
  sub_18002C84C(a1 + 8);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  v6 = *v3;
  v7 = *(_QWORD *)(*v3 + 8);
  *(_QWORD *)&v17 = v7;
  DWORD2(v17) = 0;
  v8 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    *(_QWORD *)&v17 = v7;
    if ( *(_DWORD *)(v7 + 32) >= v5 )
    {
      DWORD2(v17) = 1;
      v8 = v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      DWORD2(v17) = 0;
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( *(_BYTE *)(v8 + 25) || v5 < *(_DWORD *)(v8 + 32) )
  {
    if ( v3[1] == 0x3FFFFFFFFFFFFFFLL )
      sub_18001F56C();
    v18 = v6;
    *(_QWORD *)&v16 = v3;
    v9 = sub_180011088(0x40uLL);
    *(_DWORD *)(v9 + 32) = v5;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    sub_18001DE7C((__int64 *)v9, &v18);
    sub_18001DE7C((__int64 *)(v10 + 8), &v18);
    sub_18001DE7C((__int64 *)(v9 + 16), &v18);
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v16 + 1) = 0LL;
    sub_1800275F0((__int64)&v16);
    v16 = v17;
    v8 = sub_18001F31C(v3, (__int64)&v16, v9);
  }
  v11 = (__int64 *)(v8 + 40);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v14 = v11[1];
  if ( v14 == v11[2] )
  {
    sub_180018350(v11, (char *)v14, a2);
  }
  else
  {
    *(_QWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_QWORD *)v14 = *a2;
    *(_QWORD *)(v14 + 8) = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v11[1] += 16LL;
  }
  return j_LanguageEnumProc(v4, v14, v12, v13);
}
