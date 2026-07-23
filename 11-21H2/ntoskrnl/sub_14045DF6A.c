/*
 * XREFs of sub_14045DF6A @ 0x14045DF6A
 * Callers:
 *     sub_140356350 @ 0x140356350 (sub_140356350.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_14045DF6A(__int64 a1, int a2, char a3)
{
  __int64 v3; // rax
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v7 = 0LL;
  *(_QWORD *)&v6 = v3;
  DWORD2(v6) = a2;
  *(_QWORD *)&v7 = 0LL;
  BYTE12(v6) = a3;
  BYTE8(v7) = 0;
  result = sub_14042A5E0(7LL, &v6);
  if ( (_BYTE)result )
  {
    if ( BYTE8(v7) )
      sub_1405CAE6C(0x612uLL, v4, 0LL, 0LL);
  }
  return result;
}
