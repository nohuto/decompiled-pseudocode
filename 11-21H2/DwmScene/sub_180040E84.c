/*
 * XREFs of sub_180040E84 @ 0x180040E84
 * Callers:
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 *     sub_1800A72C0 @ 0x1800A72C0 (sub_1800A72C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180040E84(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rdi
  __int64 v8; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int v12; // [rsp+20h] [rbp-30h]
  __int128 v13; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF

  sub_180043668(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
LABEL_18:
    sub_1800120F4();
  v5 = *(_DWORD *)(v4 + 8);
  do
  {
    if ( !v5 )
      goto LABEL_18;
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
  }
  while ( v6 != v5 );
  *a2 = *(_QWORD *)(a1 + 8);
  a2[1] = *(_QWORD *)(a1 + 16);
  v12 = 3;
  while ( 1 )
  {
    v7 = *a2;
    sub_180043668(*a2);
    v13 = 0LL;
    v8 = *(_QWORD *)(v7 + 64);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 8);
      while ( v9 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9);
        if ( v10 == v9 )
        {
          v13 = *(_OWORD *)(v7 + 56);
          break;
        }
      }
    }
    v12 |= 4u;
    if ( !(_QWORD)v13 )
      break;
    if ( *((_QWORD *)&v13 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL));
    v14[0] = *a2;
    *a2 = v13;
    v14[1] = a2[1];
    a2[1] = *((_QWORD *)&v13 + 1);
    sub_180010910((__int64)v14);
    sub_180010910((__int64)&v13);
  }
  sub_180010910((__int64)&v13);
  return a2;
}
