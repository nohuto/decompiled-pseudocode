/*
 * XREFs of sub_180040BEC @ 0x180040BEC
 * Callers:
 *     sub_180040DA0 @ 0x180040DA0 (sub_180040DA0.c)
 *     sub_180043324 @ 0x180043324 (sub_180043324.c)
 *     sub_180043408 @ 0x180043408 (sub_180043408.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180040B40 @ 0x180040B40 (sub_180040B40.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040BEC(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // r14
  __int64 *v10; // r8
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int128 v18; // [rsp+20h] [rbp-40h] BYREF
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-10h] BYREF

  v4 = 0LL;
  v5 = 0;
  sub_1800436D4(a1);
  sub_180040B40(a2, v21);
  if ( sub_1800122C0(v21) )
  {
    v4 = v21[0];
  }
  else
  {
    do
    {
      if ( a2 == a1 )
        goto LABEL_11;
      sub_180043668(a2);
      v19 = 0LL;
      v6 = *(_QWORD *)(a2 + 136);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        while ( v7 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
          if ( v8 == v7 )
          {
            v19 = *(_OWORD *)(a2 + 128);
            break;
          }
        }
      }
      v5 |= 5u;
      v9 = 1;
      if ( !sub_1800122B0(&v19) )
LABEL_11:
        v9 = 0;
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        sub_180010910((__int64)&v19);
      }
      if ( !v9 )
        break;
      sub_180043668(a2);
      v10 = (__int64 *)(a2 + 56);
      v18 = 0LL;
      v11 = *(_QWORD *)(a2 + 64);
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 8);
        while ( v12 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
          if ( v13 == v12 )
          {
            a2 = *v10;
            v18 = *(_OWORD *)v10;
            goto LABEL_20;
          }
        }
      }
      a2 = v18;
LABEL_20:
      v5 |= 8u;
      sub_180010910((__int64)&v18);
    }
    while ( a2 );
    if ( a2 )
    {
      sub_180043668(a2);
      v20 = 0LL;
      v14 = *(_QWORD *)(a2 + 136);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        while ( v15 )
        {
          v16 = v15;
          v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15);
          if ( v16 == v15 )
          {
            v20 = *(_OWORD *)(a2 + 128);
            break;
          }
        }
      }
      LOBYTE(v5) = v5 | 0x12;
      v4 = v20;
    }
    if ( (v5 & 2) != 0 )
      sub_180010910((__int64)&v20);
  }
  sub_180010910((__int64)v21);
  return v4;
}
