/*
 * XREFs of sub_140574018 @ 0x140574018
 * Callers:
 *     sub_140308640 @ 0x140308640 (sub_140308640.c)
 *     sub_14045AFC6 @ 0x14045AFC6 (sub_14045AFC6.c)
 * Callees:
 *     sub_14045AB80 @ 0x14045AB80 (sub_14045AB80.c)
 *     sub_14045AE34 @ 0x14045AE34 (sub_14045AE34.c)
 *     sub_140573FB4 @ 0x140573FB4 (sub_140573FB4.c)
 */

__int64 __fastcall sub_140574018(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // ecx
  BOOL v8; // r8d
  char v9; // al
  __int64 result; // rax
  BOOL v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+3Ch] [rbp+14h]

  v12 = HIDWORD(a2);
  v11 = 0;
  *(_OWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  v5 = sub_14045AE34(a1, a2, &v11);
  v6 = v5;
  if ( v5 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
    sub_14045AB80(a1, v5);
  v7 = *(unsigned __int8 *)(a1 + 125);
  v8 = v11;
  if ( v7 >= 5 )
    v7 = *((_DWORD *)&unk_140D05420 + 2 * v6 + v11);
  v9 = *(_BYTE *)(a1 + 195);
  *(_DWORD *)(a3 + 12) = v7;
  *(_BYTE *)a3 = v9;
  *(_DWORD *)(a3 + 4) = v6;
  *(_DWORD *)(a3 + 8) = v8;
  *(_BYTE *)(a3 + 16) = *(_BYTE *)(a1 + 516);
  result = sub_140573FB4(v6, *(_BYTE *)(a1 + 195));
  *(_WORD *)(a3 + 18) = result;
  return result;
}
