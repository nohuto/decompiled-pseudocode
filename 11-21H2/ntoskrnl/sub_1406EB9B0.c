/*
 * XREFs of sub_1406EB9B0 @ 0x1406EB9B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407525EC @ 0x1407525EC (sub_1407525EC.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 */

__int64 __fastcall sub_1406EB9B0(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v4[8]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v5; // [rsp+30h] [rbp-18h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, v4, &v5, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 < 8 )
    {
      return 0;
    }
    else
    {
      v3 = (v5 >> 1) & 1;
      sub_1407525EC(&stru_14000ED98);
    }
  }
  return (unsigned int)v1;
}
