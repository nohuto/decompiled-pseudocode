/*
 * XREFs of sub_18001DF34 @ 0x18001DF34
 * Callers:
 *     sub_18001DE9C @ 0x18001DE9C (sub_18001DE9C.c)
 *     sub_18001DF34 @ 0x18001DF34 (sub_18001DF34.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_18001DF34 @ 0x18001DF34 (sub_18001DF34.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001DF34(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rcx
  char v11; // di
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+10h]

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v15 = *a1;
    v9 = sub_180011088(0x68uLL);
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(a2 + 32);
    v16 = v9 + 40;
    *(_QWORD *)(v9 + 96) = 0LL;
    v10 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 96);
    if ( v10 )
      *(_QWORD *)(v9 + 96) = (**v10)(v10, v9 + 40);
    sub_18001DE7C((__int64 *)v9, &v15);
    sub_18001DE7C((__int64 *)(v9 + 8), &v15);
    sub_18001DE7C((__int64 *)(v9 + 16), &v15);
    *(_WORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 24) = *(_BYTE *)(a2 + 24);
    v11 = *(_BYTE *)(v8 + 25);
    LOBYTE(v12) = a4;
    *(_QWORD *)v9 = sub_18001DF34(a1, *(_QWORD *)a2, v9, v12);
    LOBYTE(v13) = a4;
    *(_QWORD *)(v9 + 16) = sub_18001DF34(a1, *(_QWORD *)(a2 + 16), v9, v13);
    if ( !v11 )
      return v8;
    return v9;
  }
  return v8;
}
