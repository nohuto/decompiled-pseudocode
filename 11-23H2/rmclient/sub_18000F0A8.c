/*
 * XREFs of sub_18000F0A8 @ 0x18000F0A8
 * Callers:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 * Callees:
 *     sub_18000D0B0 @ 0x18000D0B0 (sub_18000D0B0.c)
 *     sub_18000D65C @ 0x18000D65C (sub_18000D65C.c)
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 *     sub_180011784 @ 0x180011784 (sub_180011784.c)
 *     memset @ 0x180016A5E (memset.c)
 */

__int64 __fastcall sub_18000F0A8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rbx
  int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = sub_18000F5AC(8u, 0x78uLL);
  v8 = (_QWORD *)v6;
  if ( v6 )
  {
    v15 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_180011784();
    v10 = sub_18000D65C((__int64)&v15, a1, v7, v6 >> 2);
    v12 = v10;
    if ( v10 >= 0 )
    {
      *(_DWORD *)v8 = 1;
      v8[1] = *a2;
      v13 = v15;
      *a2 = 0LL;
      *(_QWORD *)&v15 = 0LL;
      v8[2] = v13;
      v14 = *((_QWORD *)&v15 + 1);
      *((_QWORD *)&v15 + 1) = 0LL;
      v8[3] = v14;
      memset((char *)v8 + 34, 0, 0x56uLL);
      *((_WORD *)v8 + 16) = 88;
      *((_DWORD *)v8 + 9) = 1;
      memset(v8 + 5, 0, 0x50uLL);
      *a3 = v8;
      sub_18000D0B0(&v15);
      return 0LL;
    }
    else
    {
      sub_1800103F4(retaddr, 327LL, v11, (unsigned int)v10);
      sub_18000D0B0(&v15);
      sub_18000DD90(v8);
      return v12;
    }
  }
  else
  {
    sub_1800103F4(retaddr, 324LL, v7, 2147942414LL);
    return 2147942414LL;
  }
}
