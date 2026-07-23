/*
 * XREFs of sub_14050D760 @ 0x14050D760
 * Callers:
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_1403BE0BC @ 0x1403BE0BC (sub_1403BE0BC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140522804 @ 0x140522804 (sub_140522804.c)
 */

__int64 __fastcall sub_14050D760(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  bool v7; // zf
  _QWORD v8[18]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v9; // [rsp+C0h] [rbp+27h] BYREF
  __int128 v10; // [rsp+D0h] [rbp+37h]
  __int128 v11; // [rsp+E0h] [rbp+47h]

  if ( !a1 )
    return 3221225485LL;
  if ( a2 && (*(_DWORD *)(a1 + 224) & 0x8000) == 0 )
    return 3221225659LL;
  if ( (*(_DWORD *)(a1 + 224) & 1) != 0 )
    return 3221225659LL;
  v4 = *(_DWORD *)(a1 + 224) & 0xB00;
  if ( !v4 )
    return 3221225659LL;
  result = sub_1403B38C8(a1, 0LL, 7, 16LL, &qword_140C4C790);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedExchange(&dword_140C4C7B0, 1) )
    {
      return 3221227288LL;
    }
    else
    {
      dword_140C4C780 = -1;
      *(_QWORD *)&qword_140C4C7E0 = a1;
      sub_140522804(&unk_140C4C7C0);
      qword_140C4C7A8 = (__int64)&qword_140C4C7A0;
      *(_QWORD *)&qword_140C4C7A0 = &qword_140C4C7A0;
      memset(v8, 0, sizeof(v8));
      v8[1] = qword_14050D540;
      v8[0] = 0x9000000001LL;
      v8[4] = sub_14050D380;
      v8[5] = sub_14050D650;
      v8[3] = sub_14050D1D0;
      v5 = *(_DWORD *)(a1 + 224) & 0x8000;
      v8[12] = 0x4000000030LL;
      HIDWORD(v8[14]) = v4 | v5 | 0x210031;
      v8[16] = *(_QWORD *)(a1 + 92);
      HIDWORD(v8[15]) = *(_DWORD *)(a1 + 88);
      v6 = *(_DWORD *)(a1 + 84);
      v10 = 0LL;
      LODWORD(v10) = -1;
      v7 = *(_DWORD *)(a1 + 228) == 2;
      LODWORD(v8[15]) = v6;
      v8[11] = &v9;
      v9 = 0LL;
      v8[17] = 12LL;
      v11 = 0LL;
      if ( v7 )
        v8[13] = *(_QWORD *)(a1 + 192);
      else
        v8[13] = 10000000LL;
      return sub_1403BE0BC((__int64)v8, 0LL);
    }
  }
  return result;
}
