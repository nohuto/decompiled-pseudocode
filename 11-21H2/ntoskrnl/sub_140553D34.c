/*
 * XREFs of sub_140553D34 @ 0x140553D34
 * Callers:
 *     sub_140554390 @ 0x140554390 (sub_140554390.c)
 * Callees:
 *     sub_140552F60 @ 0x140552F60 (sub_140552F60.c)
 */

__int64 __fastcall sub_140553D34(__int64 a1, char *a2)
{
  int v4; // ecx
  int v5; // r9d
  int v6; // ecx
  __int64 result; // rax
  char v8; // di
  unsigned __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[4]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-10h]

  v13[0] = 0LL;
  v13[1] = 0LL;
  v14 = 0LL;
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v4 & 0xFF0;
  v6 = v5 ^ v4;
  *(_DWORD *)(a1 + 8) = v6;
  if ( (v6 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v6 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    v6 &= ~0x80000000;
    v8 = 1;
    *(_DWORD *)(a1 + 8) = v6;
  }
  if ( ((v6 - 1) & v6) != 0 )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v9 )
    return 0LL;
  v10 = (v6 & 1) == 0;
  v11 = *(_QWORD *)(qword_140D00A80 + 8);
  if ( v10 )
    v5 |= 2u;
  v13[3] = *(_QWORD *)(qword_140D00A80 + 8);
  v12[0] = *(_QWORD *)(v11 + 48);
  v12[1] = v11 + 56;
  v13[2] = v12;
  if ( (*(_DWORD *)(qword_140D00A80 + 1368) & 4) != 0 )
  {
    DWORD2(v14) |= 3u;
    *(_QWORD *)&v14 = &qword_140D018E8;
  }
  result = sub_140552F60((__int64)v13, *(char **)(a1 + 16), v9, v5);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v8;
  }
  return result;
}
