/*
 * XREFs of sub_14045F42A @ 0x14045F42A
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 *     sub_140381960 @ 0x140381960 (sub_140381960.c)
 *     sub_1403819D4 @ 0x1403819D4 (sub_1403819D4.c)
 *     sub_1403820C0 @ 0x1403820C0 (sub_1403820C0.c)
 *     sub_140394A84 @ 0x140394A84 (sub_140394A84.c)
 *     sub_1405F616C @ 0x1405F616C (sub_1405F616C.c)
 *     sub_1405F6380 @ 0x1405F6380 (sub_1405F6380.c)
 */

_DWORD *__fastcall sub_14045F42A(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_BYTE *)(a1 + 1905);
  v13[0] = 0LL;
  if ( (v2 & 3) == 1 )
  {
    *(_BYTE *)(a1 + 1905) = v2 & 0xFC | 2;
    sub_1405F6380(v13, a1);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 1064);
    v4 = *(_DWORD *)(a1 + 56);
    if ( (v4 & 1) == 0 )
    {
      sub_140237F80((__int64 *)a1, a1 + 24);
      v4 = *(_DWORD *)(a1 + 56);
    }
    *(_DWORD *)(a1 + 56) = v4 | 1;
    sub_140381130(a1, v3, a1 + 24);
    sub_1403819D4((__int64 *)a1, (__int64)v13, a1 + 24);
  }
  v5 = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 1896) )
  {
    v7 = *((_QWORD *)&v13[0] + 1);
    v8 = *(_QWORD *)&v13[0];
    while ( v8 )
    {
      v7 += 8LL;
      v9 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
      *((_QWORD *)&v13[0] + 1) = v7;
      if ( v7 < v8 + 8 * v9 )
        goto LABEL_17;
      if ( **(_DWORD **)(a1 + 16) == -1 )
      {
        v10 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        v10 = sub_1405F616C(a1, v8);
        if ( v10 == -1 )
        {
          v11 = -1LL;
          goto LABEL_18;
        }
      }
      if ( v10 )
      {
        v7 = v10 + 16;
        *(_QWORD *)&v13[0] = v10;
        *((_QWORD *)&v13[0] + 1) = v10 + 16;
        v8 = v10;
LABEL_17:
        v11 = v7;
        goto LABEL_18;
      }
      v11 = 0LL;
LABEL_18:
      if ( !v11 )
        break;
      if ( v6 < 0x200
        || !(unsigned int)sub_140394A84(*(_DWORD **)(a1 + 800), *(_BYTE *)(*(_QWORD *)(a1 + 800) + 6022LL) == 0) )
      {
        sub_1403820C0(a1, v11);
        ++v6;
        if ( *(_DWORD *)(a1 + 1896) )
          continue;
      }
      *(_DWORD *)(a1 + 1064) = *(_DWORD *)v11;
      goto LABEL_24;
    }
  }
  v5 = 1024;
  *(_BYTE *)(a1 + 1905) = *(_BYTE *)(a1 + 1905) & 0xFC | 1;
LABEL_24:
  if ( *(_DWORD *)(a1 + 1896) <= v5 )
    *(_BYTE *)(a1 + 1905) &= 0xFCu;
  else
    sub_1403812F8(*(_QWORD *)(a1 + 1912), 5LL, 0x7530u, 0xFFFFFFFE);
  return sub_140381960((__int64 *)v13, (__int64 *)a1);
}
