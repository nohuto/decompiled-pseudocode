/*
 * XREFs of sub_18000EB38 @ 0x18000EB38
 * Callers:
 *     sub_18000D6E4 @ 0x18000D6E4 (sub_18000D6E4.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000D61C @ 0x18000D61C (sub_18000D61C.c)
 *     sub_18000D988 @ 0x18000D988 (sub_18000D988.c)
 *     sub_18000DB30 @ 0x18000DB30 (sub_18000DB30.c)
 *     sub_18000ED7C @ 0x18000ED7C (sub_18000ED7C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_18000FB9C @ 0x18000FB9C (sub_18000FB9C.c)
 */

__int64 __fastcall sub_18000EB38(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = sub_18000ED7C(8u, 0x78uLL);
  v9 = (_QWORD *)v6;
  if ( v6 )
  {
    v15 = 0LL;
    if ( (v6 & 3) != 0 )
      sub_18000FB9C(v7);
    v11 = sub_18000D988((__int64)&v15, a1, v8, v6 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v9[1] = *a2;
      v13 = v15;
      *a2 = 0LL;
      *(_QWORD *)&v15 = 0LL;
      v9[2] = v13;
      v14 = *((_QWORD *)&v15 + 1);
      *((_QWORD *)&v15 + 1) = 0LL;
      v9[3] = v14;
      memset((char *)v9 + 34, 0, 0x56uLL);
      *((_WORD *)v9 + 16) = 88;
      *((_DWORD *)v9 + 9) = 1;
      memset(v9 + 5, 0, 0x50uLL);
      *a3 = v9;
      sub_18000D61C(&v15);
      return 0LL;
    }
    else
    {
      sub_18000F024(retaddr, 327LL, "wil", (unsigned int)v11);
      sub_18000D61C(&v15);
      sub_18000DB30(v9);
      return v12;
    }
  }
  else
  {
    sub_18000F024(retaddr, 324LL, "wil", 2147942414LL);
    return 2147942414LL;
  }
}
