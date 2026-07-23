/*
 * XREFs of sub_1409A2440 @ 0x1409A2440
 * Callers:
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 */

__int64 __fastcall sub_1409A2440(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int128 v4[6]; // [rsp+30h] [rbp-68h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( v1 )
    {
      memset(v4, 0, sizeof(v4));
      *(_QWORD *)(a1 + 24) = 0LL;
      LODWORD(v4[0]) = 21;
      BYTE8(v4[5]) = 1;
      *((_QWORD *)&v4[0] + 1) = v1;
      return sub_14074F950(0x57u, v4, 96, 0LL, 0);
    }
  }
  return result;
}
