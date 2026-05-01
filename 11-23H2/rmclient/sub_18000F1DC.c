/*
 * XREFs of sub_18000F1DC @ 0x18000F1DC
 * Callers:
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 * Callees:
 *     sub_18000CB2C @ 0x18000CB2C (sub_18000CB2C.c)
 *     sub_18000D0B0 @ 0x18000D0B0 (sub_18000D0B0.c)
 *     sub_18000D65C @ 0x18000D65C (sub_18000D65C.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 *     sub_180011784 @ 0x180011784 (sub_180011784.c)
 */

__int64 __fastcall sub_18000F1DC(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rbx
  int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // edi
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = sub_18000F5AC(8u, 0x130uLL);
  v10 = (void *)v6;
  if ( v6 )
  {
    v15 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_180011784(v8, v7);
    v12 = sub_18000D65C((__int64)&v15, a1, v9, v6 >> 2);
    v14 = v12;
    if ( v12 >= 0 )
    {
      sub_18000CB2C((__int64)v10, a2, &v15);
      *a3 = v10;
      sub_18000D0B0(&v15);
      return 0LL;
    }
    else
    {
      sub_1800103F4(retaddr, 327LL, v13, (unsigned int)v12);
      sub_18000D0B0(&v15);
      sub_18000DD90(v10);
      return v14;
    }
  }
  else
  {
    sub_1800103F4(retaddr, 324LL, v9, 2147942414LL);
    return 2147942414LL;
  }
}
