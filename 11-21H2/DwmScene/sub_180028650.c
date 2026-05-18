/*
 * XREFs of sub_180028650 @ 0x180028650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001F31C @ 0x18001F31C (sub_18001F31C.c)
 *     sub_18001F56C @ 0x18001F56C (sub_18001F56C.c)
 *     sub_180026660 @ 0x180026660 (sub_180026660.c)
 *     sub_1800275F0 @ 0x1800275F0 (sub_1800275F0.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180028650(__int64 *a1, __int64 a2, signed int a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v22; // [rsp+20h] [rbp-30h] BYREF
  _OWORD v23[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v25; // [rsp+A8h] [rbp+58h]

  v6 = a1 + 1;
  v25 = a1 + 1;
  sub_18002C84C(a1 + 1);
  v7 = a1[3];
  v8 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)&v23[0] = v8;
  DWORD2(v23[0]) = 0;
  v9 = v7;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    *(_QWORD *)&v23[0] = v8;
    if ( *(_DWORD *)(v8 + 32) >= a3 )
    {
      DWORD2(v23[0]) = 1;
      v9 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      DWORD2(v23[0]) = 0;
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  if ( *(_BYTE *)(v9 + 25) || a3 < *(_DWORD *)(v9 + 32) )
  {
    if ( a1[4] == 0x3FFFFFFFFFFFFFFLL )
      sub_18001F56C();
    v24 = v7;
    *(_QWORD *)&v22 = a1 + 3;
    v10 = sub_180011088(0x40uLL);
    *(_DWORD *)(v10 + 32) = a3;
    *(_QWORD *)(v10 + 40) = 0LL;
    *(_QWORD *)(v10 + 48) = 0LL;
    *(_QWORD *)(v10 + 56) = 0LL;
    sub_18001DE7C((__int64 *)v10, &v24);
    sub_18001DE7C((__int64 *)(v11 + 8), &v24);
    sub_18001DE7C((__int64 *)(v10 + 16), &v24);
    *(_WORD *)(v10 + 24) = 0;
    *((_QWORD *)&v22 + 1) = 0LL;
    sub_1800275F0((__int64)&v22);
    v9 = sub_18001F31C(a1 + 3, (__int64)v23, v10);
  }
  v12 = *(_QWORD *)(v9 + 48);
  if ( *(_QWORD *)(v9 + 40) == v12 )
  {
    sub_180026660(a1[2], &v22);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v22 + 40LL))(
           v22,
           a1[2],
           (unsigned int)a3) )
    {
      *(_OWORD *)a2 = v22;
      v22 = 0LL;
      sub_180010910((__int64)&v22);
    }
    else
    {
      sub_180010910((__int64)&v22);
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
    }
    j_LanguageEnumProc(v6, v13, v14, v15);
  }
  else
  {
    v16 = *(_QWORD *)(v12 - 8);
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v16 = *(_QWORD *)(v12 - 8);
      v6 = v25;
    }
    v17 = *(_QWORD *)(v12 - 16);
    sub_180010910(*(_QWORD *)(v9 + 48) - 16LL);
    *(_QWORD *)(v9 + 48) -= 16LL;
    *(_QWORD *)a2 = v17;
    *(_QWORD *)(a2 + 8) = v16;
    v23[0] = 0LL;
    sub_180010910((__int64)v23);
    j_LanguageEnumProc(v6, v18, v19, v20);
  }
  return a2;
}
