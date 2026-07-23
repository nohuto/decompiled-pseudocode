/*
 * XREFs of sub_14076B438 @ 0x14076B438
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_1406EA354 @ 0x1406EA354 (sub_1406EA354.c)
 *     sub_14076B534 @ 0x14076B534 (sub_14076B534.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 */

__int64 __fastcall sub_14076B438(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+18h] BYREF
  int v9; // [rsp+70h] [rbp+20h] BYREF
  int v10; // [rsp+78h] [rbp+28h] BYREF

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  result = sub_14076B534(a1, &v7);
  if ( !v7 )
  {
    *(_WORD *)(a1 + 466) = 257;
    return result;
  }
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL);
  v4 = v3 & 0x300;
  if ( (v3 & 0x4000) != 0 )
    goto LABEL_15;
  if ( (v3 & 0x8000) != 0 )
  {
LABEL_14:
    v5 = 3;
    goto LABEL_16;
  }
  if ( v4 == 512 )
  {
LABEL_15:
    v5 = 2;
    goto LABEL_16;
  }
  if ( v4 == 768 )
    goto LABEL_14;
  if ( a1 != v7 )
  {
    v5 = 6;
LABEL_16:
    v8 = v5;
    goto LABEL_10;
  }
  sub_1406EA354(a1, &v8);
  v5 = v8;
LABEL_10:
  if ( a1 != v7 )
  {
    if ( v5 > *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 466LL) )
      v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 466LL);
    v8 = v5;
  }
  *(_BYTE *)(a1 + 466) = v5;
  *(_BYTE *)(a1 + 467) = v5;
  v6 = *(_QWORD *)(a1 + 48);
  v10 = 4;
  result = sub_14077CD90(qword_140D00AC0, v6, 0, 34, (__int64)&v9, (__int64)&v8, (__int64)&v10, 0);
  if ( (int)result >= 0 && v9 == 4 )
  {
    result = (unsigned int)(v8 - 2);
    if ( (unsigned int)result <= 1 )
      *(_BYTE *)(a1 + 466) = v8;
  }
  return result;
}
