/*
 * XREFs of sub_140821AAC @ 0x140821AAC
 * Callers:
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140821B98 @ 0x140821B98 (sub_140821B98.c)
 */

__int64 __fastcall sub_140821AAC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  __int128 v14; // [rsp+40h] [rbp-10h]

  v12[1] = v12;
  v13 = 0LL;
  v4 = 0;
  v12[0] = v12;
  LOBYTE(a4) = 1;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  v14 = 0LL;
  sub_140821B98(*(_QWORD *)(a1 + 40) + 24LL, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 20LL), v12, a4);
  v5 = (_QWORD *)v12[0];
  while ( v5 != v12 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v6 + 17) )
    {
      v7 = v6 - 6;
      *(_QWORD *)&v13 = v6 - 6;
      v8 = sub_14042A5E0(*(_QWORD *)(*(v6 - 8) + 8LL), 9LL);
      v9 = v6 - 2;
      v6[1] = v6;
      v9[1] = v9;
      *v9 = v9;
      v10 = v6 - 4;
      if ( v8 < 0 )
        v4 = v8;
      v10[1] = v10;
      *((_WORD *)v6 + 8) = 0;
      *v10 = v10;
      *v6 = v6;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  return v4;
}
