/*
 * XREFs of sub_1406515E8 @ 0x1406515E8
 * Callers:
 *     IoWritePartitionTable @ 0x140930B90 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140930D00 (IoWritePartitionTableEx.c)
 * Callees:
 *     sub_1406503B0 @ 0x1406503B0 (sub_1406503B0.c)
 *     sub_140650E68 @ 0x140650E68 (sub_140650E68.c)
 *     sub_1406513D8 @ 0x1406513D8 (sub_1406513D8.c)
 *     sub_1406518D8 @ 0x1406518D8 (sub_1406518D8.c)
 *     sub_140651D6C @ 0x140651D6C (sub_140651D6C.c)
 */

__int64 __fastcall sub_1406515E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  bool v6; // zf
  unsigned int v10; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+34h] [rbp-14h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v12 = 0;
  v6 = *(_DWORD *)(a1 + 256) == 2;
  v11 = 0LL;
  if ( !v6 || (v10 = *(_DWORD *)a2, v5 = sub_140650E68(a1, &v10, a3), v5 >= 0) && (v5 = sub_1406513D8(a1), v5 >= 0) )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v6 = *(_DWORD *)(a1 + 256) == 1;
        v13 = a1;
        return (unsigned int)sub_1406503B0(&v13, a2, !v6);
      }
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 256)
        || *(_DWORD *)(a2 + 4) == 4
        && *(_BYTE *)(a2 + 80) == 0xEE
        && !*(_BYTE *)(a2 + 224)
        && !*(_BYTE *)(a2 + 368)
        && !*(_BYTE *)(a2 + 512) )
      {
        sub_1406518D8(&v13, a1, a3, a4);
        return (unsigned int)sub_140651D6C(&v13, a2);
      }
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v5;
}
