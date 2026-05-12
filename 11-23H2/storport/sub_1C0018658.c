/*
 * XREFs of sub_1C0018658 @ 0x1C0018658
 * Callers:
 *     sub_1C001840C @ 0x1C001840C (sub_1C001840C.c)
 * Callees:
 *     sub_1C0013554 @ 0x1C0013554 (sub_1C0013554.c)
 *     sub_1C00135CC @ 0x1C00135CC (sub_1C00135CC.c)
 *     sub_1C00248F0 @ 0x1C00248F0 (sub_1C00248F0.c)
 */

__int64 __fastcall sub_1C0018658(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // rdx
  __int64 v6; // r8
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // bl
  char v19; // al

  v2 = *a1;
  v4 = *a2;
  v6 = *(_QWORD *)(*a1 + 8) - *(_QWORD *)(v4 + 8);
  if ( !v6 )
  {
    v6 = *(_QWORD *)(v2 + 16) - *(_QWORD *)(v4 + 16);
    if ( !v6 )
      v6 = *(_QWORD *)(v2 + 24) - *(_QWORD *)(v4 + 24);
  }
  v7 = 0;
  if ( v6 || ((*(_BYTE *)v2 ^ *(_BYTE *)v4) & 0x1F) != 0 )
    return 1LL;
  v8 = a1[6];
  if ( v8 && (v9 = a2[6]) != 0 )
  {
    v10 = v9 + 90;
    v11 = v8 + 90;
    v12 = 16LL;
  }
  else
  {
    v16 = a1[5];
    if ( v16 && (v17 = a2[5]) != 0 )
    {
      v10 = v17 + 41;
      v11 = v16 + 41;
      v12 = 8LL;
    }
    else
    {
      v10 = v4 + 32;
      v11 = v2 + 32;
      v12 = 4LL;
    }
  }
  if ( (unsigned int)sub_1C00248F0(v11, v10, v12) )
    return 3LL;
  v13 = a1[4];
  v14 = a2[4];
  if ( !v13 )
  {
    if ( !v14 )
    {
      LOBYTE(v7) = RtlCompareString((const STRING *)(a1 + 1), (const STRING *)(a2 + 1), 0) != 0;
      return v7;
    }
    return 1LL;
  }
  if ( !v14 )
    return 1LL;
  v18 = sub_1C0013554(a1[4]);
  v19 = sub_1C0013554(v14);
  if ( v18 )
    return 0LL;
  if ( v19 )
    return 2LL;
  return sub_1C00135CC(v13, v14);
}
