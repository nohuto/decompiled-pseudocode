/*
 * XREFs of sub_18004A62C @ 0x18004A62C
 * Callers:
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18004A294 @ 0x18004A294 (sub_18004A294.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004A62C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  _DWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = a1;
  v10 = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v8[0] = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = sub_180011088(4uLL);
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)(a1 + 48) = v4;
  *(_QWORD *)(a1 + 56) = v4 + 4;
  *(_QWORD *)(a1 + 48) = sub_18004A294(*(_DWORD **)(a1 + 40), v5, v8);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 >= 0x10 )
    sub_180010884(*(char **)a2, v6 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
