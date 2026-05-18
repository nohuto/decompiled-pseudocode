/*
 * XREFs of sub_180066F74 @ 0x180066F74
 * Callers:
 *     sub_180066F74 @ 0x180066F74 (sub_180066F74.c)
 *     sub_1800690F4 @ 0x1800690F4 (sub_1800690F4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE7C @ 0x18001DE7C (sub_18001DE7C.c)
 *     sub_180066F74 @ 0x180066F74 (sub_180066F74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180066F74(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  char v12; // di
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v8 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v19 = *a1;
    v9 = sub_180011088(0x30uLL);
    v10 = v9;
    v18 = v9;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    if ( *(_QWORD *)(a2 + 40) )
    {
      *(_QWORD *)(v9 + 32) = *(_QWORD *)(a2 + 32);
      v11 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(v10 + 40) = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
      v10 = v18;
    }
    sub_18001DE7C((__int64 *)v10, &v19);
    sub_18001DE7C((__int64 *)(v10 + 8), &v19);
    sub_18001DE7C((__int64 *)(v10 + 16), &v19);
    *(_WORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 8) = a3;
    *(_BYTE *)(v10 + 24) = *(_BYTE *)(a2 + 24);
    v12 = *(_BYTE *)(v8 + 25);
    LOBYTE(v13) = a4;
    *(_QWORD *)v10 = sub_180066F74(a1, *(_QWORD *)a2, v10, v13, a1);
    LOBYTE(v14) = a4;
    *(_QWORD *)(v10 + 16) = sub_180066F74(a1, *(_QWORD *)(a2 + 16), v10, v14, v17);
    if ( !v12 )
      return v8;
    return v10;
  }
  return v8;
}
