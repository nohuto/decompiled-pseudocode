/*
 * XREFs of sub_1405CEC60 @ 0x1405CEC60
 * Callers:
 *     sub_14098DCC4 @ 0x14098DCC4 (sub_14098DCC4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1405CEC60(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  char v4; // r9
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v8 = 0;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    v7 = a2;
    v9 = 0LL;
    v10 = a3;
    return sub_14042A5E0(32LL, &v6);
  }
  return v4;
}
