/*
 * XREFs of sub_1403E9BB4 @ 0x1403E9BB4
 * Callers:
 *     _snscanf_s @ 0x1403E6600 (_snscanf_s.c)
 *     sscanf_s @ 0x1403E70A0 (sscanf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E9268 @ 0x1403E9268 (sub_1403E9268.c)
 */

__int64 __fastcall sub_1403E9BB4(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3, _WORD **a4)
{
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  __int128 v10; // [rsp+4Ch] [rbp-1Ch]
  int v11; // [rsp+5Ch] [rbp-Ch]

  v7 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( a1 && a3 && a2 <= 0x7FFFFFFF )
  {
    v9 = 73;
    v8 = a1;
    v5 = a1;
    v6 = a2;
    return sub_1403E9268((__int64)&v5, a3, a4);
  }
  else
  {
    _misaligned_access();
    return 0xFFFFFFFFLL;
  }
}
