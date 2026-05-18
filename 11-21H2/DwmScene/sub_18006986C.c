/*
 * XREFs of sub_18006986C @ 0x18006986C
 * Callers:
 *     sub_180057AF8 @ 0x180057AF8 (sub_180057AF8.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_180049994 @ 0x180049994 (sub_180049994.c)
 *     sub_1800671C8 @ 0x1800671C8 (sub_1800671C8.c)
 *     sub_1800690F4 @ 0x1800690F4 (sub_1800690F4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006986C(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rbx
  _QWORD *v6; // rsi
  char *v7; // r15
  char *v8; // rdi
  __int64 v9; // rcx
  char *v10; // rsi
  char *v11; // rdi
  __int64 **v12; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 **v19; // rax
  __int64 *k; // rax
  __int64 *m; // rcx
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  char *v24[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  __int128 v29; // [rsp+70h] [rbp-10h] BYREF

  v2 = (_QWORD *)(a1 + 256);
  v3 = (_QWORD *)(a1 + 416);
  if ( a1 + 256 != a1 + 416 )
  {
    v28 = 0LL;
    do
    {
      v25[0] = *v2;
      *v2 = 0LL;
      v25[1] = v2[1];
      v2[1] = 0LL;
      sub_180010910((__int64)v25);
      sub_180010910((__int64)&v28);
      v2 += 2;
    }
    while ( v2 != v3 );
  }
  v4 = (__int64 *)(a1 + 96);
  if ( a1 + 96 != a1 + 256 )
  {
    v29 = 0LL;
    do
    {
      v26 = *v4;
      *v4 = 0LL;
      v27 = v4[1];
      v4[1] = 0LL;
      sub_180010910((__int64)&v26);
      sub_180010910((__int64)&v29);
      v4 += 2;
    }
    while ( v4 != (__int64 *)(a1 + 256) );
  }
  v5 = **(__int64 ***)(a1 + 416);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = (_QWORD *)v5[7];
    v7 = (char *)v6[1];
    while ( !v7[25] )
    {
      sub_180029948((__int64)(v5 + 7), (__int64)(v5 + 7), *((char **)v7 + 2));
      v8 = v7;
      v7 = *(char **)v7;
      sub_180010910((__int64)(v8 + 40));
      sub_180010884(v8, 0x38uLL);
    }
    v6[1] = v6;
    *v6 = v6;
    v6[2] = v6;
    v5[8] = 0LL;
    v9 = v5[5];
    **(_QWORD **)(v9 + 8) = 0LL;
    v10 = *(char **)v9;
    if ( *(_QWORD *)v9 )
    {
      do
      {
        v11 = *(char **)v10;
        sub_180010910((__int64)(v10 + 16));
        sub_180010884(v10, 0x20uLL);
        v10 = v11;
      }
      while ( v11 );
    }
    *(_QWORD *)v5[5] = v5[5];
    *(_QWORD *)(v5[5] + 8) = v5[5];
    v5[6] = 0LL;
    v12 = (__int64 **)v5[2];
    if ( *((_BYTE *)v12 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  sub_1800690F4(a1, (__int64 *)v24);
  v15 = *(__int64 **)v24[0];
  while ( !*((_BYTE *)v15 + 25) )
  {
    v23 = 0LL;
    v16 = v15[5];
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      while ( v17 )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17);
        if ( v18 == v17 )
        {
          v23 = *((_OWORD *)v15 + 2);
          break;
        }
      }
    }
    if ( sub_1800122C0(&v23) )
      sub_180049994((_QWORD *)v23);
    sub_180010910((__int64)&v23);
    v19 = (__int64 **)v15[2];
    if ( *((_BYTE *)v19 + 25) )
    {
      for ( k = (__int64 *)v15[1]; !*((_BYTE *)k + 25) && v15 == (__int64 *)k[2]; k = (__int64 *)k[1] )
        v15 = k;
      v15 = k;
    }
    else
    {
      v15 = (__int64 *)v15[2];
      for ( m = *v19; !*((_BYTE *)m + 25); m = (__int64 *)*m )
        v15 = m;
    }
  }
  v29 = 0LL;
  v26 = *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 440) = 0LL;
  v27 = *(_QWORD *)(a1 + 448);
  *(_QWORD *)(a1 + 448) = 0LL;
  sub_180010910((__int64)&v26);
  sub_180010910((__int64)&v29);
  sub_1800671C8((__int64)v24, (__int64)v24, *((char **)v24[0] + 1));
  return sub_180010884(v24[0], 0x30uLL);
}
