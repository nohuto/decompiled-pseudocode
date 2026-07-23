/*
 * XREFs of sub_14071B1C8 @ 0x14071B1C8
 * Callers:
 *     sub_14071B730 @ 0x14071B730 (sub_14071B730.c)
 * Callees:
 *     sub_14071B20C @ 0x14071B20C (sub_14071B20C.c)
 */

bool __fastcall sub_14071B1C8(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  *a3 = 0;
  if ( a1 == a2 )
  {
    *a3 = 1;
    return 1;
  }
  else
  {
    sub_14071B20C(a1, a2, &v6, &v5);
    return v5 == a2;
  }
}
