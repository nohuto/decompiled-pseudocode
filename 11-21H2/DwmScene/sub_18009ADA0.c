/*
 * XREFs of sub_18009ADA0 @ 0x18009ADA0
 * Callers:
 *     sub_180094A54 @ 0x180094A54 (sub_180094A54.c)
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_180094448 @ 0x180094448 (sub_180094448.c)
 *     sub_18009A8F4 @ 0x18009A8F4 (sub_18009A8F4.c)
 *     sub_18009AE94 @ 0x18009AE94 (sub_18009AE94.c)
 *     sub_18009B094 @ 0x18009B094 (sub_18009B094.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009ADA0(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-30h] BYREF

  sub_18002B740(a1, a2);
  v11 = 0LL;
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v7 = *(_QWORD *)(a1 + 160);
        v11 = *(_OWORD *)(a1 + 160);
        goto LABEL_6;
      }
    }
  }
  v7 = v11;
LABEL_6:
  if ( v7 )
  {
    sub_18009A8F4(*a2, (__int64 *)&v12);
    v8 = v12;
    v9 = sub_180094448((__int64)v14, a1 + 96);
    sub_18009B094(v8, *a2, v9, v7);
    v13 = v12;
    v12 = 0LL;
    sub_18009AE94(a1, &v13);
    sub_180010910((__int64)&v12);
  }
  return sub_180010910((__int64)&v11);
}
