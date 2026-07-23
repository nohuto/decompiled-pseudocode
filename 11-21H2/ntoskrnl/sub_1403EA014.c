/*
 * XREFs of sub_1403EA014 @ 0x1403EA014
 * Callers:
 *     _snwscanf_s @ 0x1403E6720 (_snwscanf_s.c)
 *     swscanf_s @ 0x1403E75B0 (swscanf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403EA0E8 @ 0x1403EA0E8 (sub_1403EA0E8.c)
 */

__int64 __fastcall sub_1403EA014(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  __int128 v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+5Ch] [rbp-Ch]

  v7 = 0;
  v11 = 0;
  v10 = 0LL;
  if ( a1 && a3 && a2 <= 0x3FFFFFFF )
  {
    v8 = a1;
    v5 = a1;
    v6 = 2 * a2;
    v9 = 73;
    return sub_1403EA0E8(&v5, a3, a4);
  }
  else
  {
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
}
