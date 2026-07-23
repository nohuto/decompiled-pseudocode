/*
 * XREFs of sub_1405CDB50 @ 0x1405CDB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14098A2C4 @ 0x14098A2C4 (sub_14098A2C4.c)
 */

__int64 __fastcall sub_1405CDB50(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v2 = a1 - 1;
  if ( v2 )
  {
    if ( v2 == 0x10000000 )
      return sub_14098A2C4(a2);
    else
      return 3221225659LL;
  }
  else
  {
    v7 = 1LL;
    v5 = 0LL;
    v6 = 0;
    v4 = 1;
    v8 = a2;
    return sub_14042A5E0(&v4, a2);
  }
}
