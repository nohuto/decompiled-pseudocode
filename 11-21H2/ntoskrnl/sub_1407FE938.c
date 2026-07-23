/*
 * XREFs of sub_1407FE938 @ 0x1407FE938
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14098C390 @ 0x14098C390 (sub_14098C390.c)
 *     sub_14098FFD0 @ 0x14098FFD0 (sub_14098FFD0.c)
 * Callees:
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 */

__int64 __fastcall sub_1407FE938(__int128 *a1)
{
  bool v2; // zf
  __int128 v3; // xmm0
  _QWORD Src[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x44uLL);
  v2 = *((_BYTE *)a1 + 12) == 0;
  v3 = *a1;
  LODWORD(Src[0]) = 7;
  *(_OWORD *)&Src[1] = v3;
  if ( !v2 && *((_DWORD *)a1 + 1) == 18 )
    sub_140A49250(5LL);
  return sub_14036AF00(Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
