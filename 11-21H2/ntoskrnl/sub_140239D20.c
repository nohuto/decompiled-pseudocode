/*
 * XREFs of sub_140239D20 @ 0x140239D20
 * Callers:
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 * Callees:
 *     sub_140239E54 @ 0x140239E54 (sub_140239E54.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140239D20(__int64 a1, int a2)
{
  __int64 v2; // rsi
  int v3; // r14d
  unsigned int v4; // edx
  unsigned int v5; // r14d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  __int64 v9; // rbp
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h]

  v2 = 0LL;
  v3 = a2 + 4167;
  v4 = 2 * a2 + 72;
  v11 = 0;
  v5 = v3 & 0xFFFFF000;
  v12 = 0;
  if ( ((v4 - 1) & v4) != 0 )
  {
    _BitScanReverse(&v7, v4);
    v12 = v7;
    v4 = 1 << (v7 + 1);
  }
  v8 = 0x10000;
  if ( v4 > 0x10000 )
  {
    v8 = v4;
    if ( v4 >= 0x40000 )
      v8 = 0x40000;
  }
  while ( 1 )
  {
    v9 = sub_14042A5E0(a1 ^ *(_QWORD *)(a1 + 128), v8);
    if ( v9 )
      break;
    v8 = v11;
    if ( v11 < v5 )
      return v2;
  }
  if ( (int)sub_14042A5E0(a1 ^ *(_QWORD *)(a1 + 128), v9) < 0 )
  {
    sub_14042A5E0(a1 ^ *(_QWORD *)(a1 + 128), v9);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 1uLL);
    sub_140239E54(v9, v8, 4096LL, *(unsigned int *)(a1 + 8), &v11);
    return v9;
  }
  return v2;
}
