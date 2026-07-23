/*
 * XREFs of sub_1405CA1A0 @ 0x1405CA1A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_140989E98 @ 0x140989E98 (sub_140989E98.c)
 */

__int64 __fastcall sub_1405CA1A0(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[8]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ExQueryWnfStateData(a1, v5, &v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 >= 8 )
    {
      v2 = v6 >> 1;
      LOBYTE(v2) = (v6 & 2) != 0;
      sub_140989E98(v2);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
