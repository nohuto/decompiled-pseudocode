/*
 * XREFs of sub_1403C41C8 @ 0x1403C41C8
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14036F5D4 @ 0x14036F5D4 (sub_14036F5D4.c)
 *     sub_1403C4368 @ 0x1403C4368 (sub_1403C4368.c)
 */

__int64 sub_1403C41C8()
{
  unsigned int v0; // esi
  __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF

  v9 = 0LL;
  v0 = 0;
  if ( dword_140C5EA20 )
  {
    while ( 1 )
    {
      v8 = 0LL;
      BYTE2(v8) = v0;
      LOBYTE(v8) = 2;
      v1 = 8384LL * v0;
      result = sub_14036F5D4(&v8, 0LL, &v9);
      if ( (int)result < 0 )
        break;
      v3 = v9;
      *(_QWORD *)((char *)&unk_140C5B140 + v1 + 14608) = v9;
      sub_1403C4368((char *)&unk_140C5B140 + v1 + 14656);
      *(_QWORD *)(v3 + 40) = (char *)&unk_140C5B140 + v1 + 14656;
      v8 = 0LL;
      BYTE2(v8) = v0;
      LOBYTE(v8) = 10;
      result = sub_14036F5D4(&v8, 0LL, &v9);
      if ( (int)result < 0 )
        break;
      v4 = v9;
      ++v0;
      *(_QWORD *)((char *)&unk_140C5B140 + v1 + 14616) = v9;
      *(_DWORD *)(v4 + 880) |= 2u;
      *(_BYTE *)(v4 + 333) |= 8u;
      *(_BYTE *)(v4 + 525) |= 8u;
      if ( v0 >= dword_140C5EA20 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = 0LL;
    LOBYTE(v8) = 2;
    result = sub_14036F5D4(&v8, 0LL, &v9);
    if ( (int)result >= 0 )
    {
      v5 = v9;
      v8 = 0LL;
      LOBYTE(v8) = 10;
      v6 = v8;
      *(_DWORD *)(v9 + 880) |= 2u;
      *(_BYTE *)(v5 + 333) |= 8u;
      *(_BYTE *)(v5 + 525) |= 8u;
      qword_140CE1A50 = v5;
      v8 = v6;
      result = sub_14036F5D4(&v8, 0LL, &v9);
      if ( (int)result >= 0 )
      {
        v7 = v9;
        *(_DWORD *)(v9 + 880) |= 2u;
        *(_BYTE *)(v7 + 333) |= 8u;
        *(_BYTE *)(v7 + 525) |= 8u;
        qword_140CE1A58 = v7;
        return 0LL;
      }
    }
  }
  return result;
}
