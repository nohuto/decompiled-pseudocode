/*
 * XREFs of sub_140829CBC @ 0x140829CBC
 * Callers:
 *     sub_140829A28 @ 0x140829A28 (sub_140829A28.c)
 *     sub_140829AB0 @ 0x140829AB0 (sub_140829AB0.c)
 *     sub_140829ACC @ 0x140829ACC (sub_140829ACC.c)
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 *     sub_140924648 @ 0x140924648 (sub_140924648.c)
 *     sub_1409314BC @ 0x1409314BC (sub_1409314BC.c)
 *     sub_14093B1CC @ 0x14093B1CC (sub_14093B1CC.c)
 *     sub_14093B5F8 @ 0x14093B5F8 (sub_14093B5F8.c)
 *     sub_14093BF5C @ 0x14093BF5C (sub_14093BF5C.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     sub_140228AA0 @ 0x140228AA0 (sub_140228AA0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026A718 @ 0x14026A718 (sub_14026A718.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_14033C880 @ 0x14033C880 (sub_14033C880.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 */

__int64 __fastcall sub_140829CBC(unsigned __int64 a1, int a2, _QWORD *a3, unsigned int a4)
{
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r14
  unsigned __int64 v8; // rax
  int v9; // r10d
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // ebx
  __int64 v13; // r8
  int v14; // r10d
  unsigned int v15; // r15d
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  int v18; // r15d
  unsigned int v20; // edx
  _QWORD *v21; // rcx
  bool v22; // zf
  int v23; // [rsp+30h] [rbp-98h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-88h]
  __int128 v26; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v27[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v28; // [rsp+78h] [rbp-50h]
  __int64 v29; // [rsp+88h] [rbp-40h]
  BOOL v30; // [rsp+D0h] [rbp+8h]

  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v7 = sub_1403095B0((__int64)&qword_140C534C0, v6);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)sub_14026A718(v6, 1) )
  {
    sub_1402BB6D0((__int64)&qword_140C534C0, (_QWORD *)v7, v6);
    return 0LL;
  }
  v30 = a3 && (dword_140C54F84 & 8) != 0;
  v25 = (__int64)(v7 << 25) >> 16;
  v8 = sub_1402CBD10(v7, 0LL, -1610612732);
  v9 = 0;
  v10 = v8;
  if ( a2 != -1 )
    v9 = a2 + 1;
  v23 = v9;
  sub_140339C20(0LL, v9, (__int64)&v26);
  v11 = 0LL;
  v24 = 0LL;
  do
  {
    v12 = 0;
    v15 = sub_1402EB3DC((__int64)&v26);
    if ( v30 )
    {
      if ( a3 != (_QWORD *)-1LL )
      {
        v20 = 0;
        if ( !a4 )
          goto LABEL_9;
        v21 = a3;
        while ( v13 != *v21 >> 12 )
        {
          ++v20;
          ++v21;
          if ( v20 >= a4 )
            goto LABEL_9;
        }
      }
      v12 = 1;
    }
LABEL_9:
    while ( 1 )
    {
      if ( v12 )
      {
        v16 = sub_1402EB440((__int64)&StartContext, 1, v15, v14 == 0 ? 2 : 0, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0);
        if ( v16 != -1 )
          break;
      }
      v16 = sub_1403250B0((__int64)&StartContext, v15, 8u);
      if ( v16 != -1 )
        goto LABEL_11;
      sub_1405B8348(&StartContext);
      v14 = v23;
    }
    ++v11;
LABEL_11:
    v10 ^= (v10 ^ (v16 << 12)) & 0xFFFFFFFFFF000LL;
    sub_14033C880(48 * v16 - 0x220000000000LL, v7, 4u, 4);
    v17 = v10;
    v18 = 0;
    if ( sub_140317A80(v7) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_12;
        v22 = (v10 & 1) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_12;
        v22 = (v10 & 1) == 0;
      }
      if ( !v22 )
        v17 = v10 | 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)v7 = v17;
    if ( v18 )
      sub_1402294F0(v7, v17);
    v7 += 8LL;
    ++v24;
    --v6;
  }
  while ( v6 );
  if ( v11 )
  {
    *(_QWORD *)&v28 = v11;
    *(_QWORD *)&v27[0] = v11;
    sub_140228AA0((unsigned __int64 *)v27, 1, 0);
  }
  return v25;
}
