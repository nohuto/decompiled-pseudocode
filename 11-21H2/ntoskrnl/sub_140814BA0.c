/*
 * XREFs of sub_140814BA0 @ 0x140814BA0
 * Callers:
 *     sub_140814660 @ 0x140814660 (sub_140814660.c)
 * Callees:
 *     sub_1403AB344 @ 0x1403AB344 (sub_1403AB344.c)
 *     sub_1406330FC @ 0x1406330FC (sub_1406330FC.c)
 */

__int64 __fastcall sub_140814BA0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf

  if ( (*(_DWORD *)(a2 + 1376) & 1) == 0 || !*(_BYTE *)(a2 + 4) )
  {
    v3 = *(_BYTE *)(a3 + 66) == 0;
    *(_DWORD *)(a3 + 40) = 6297859;
    if ( v3 )
      sub_1403AB344(a2, a3);
    else
      sub_1406330FC((struct _KTHREAD *)a2, a3);
  }
  return 0LL;
}
