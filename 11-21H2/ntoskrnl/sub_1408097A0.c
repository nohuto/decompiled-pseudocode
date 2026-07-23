/*
 * XREFs of sub_1408097A0 @ 0x1408097A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036C1F4 @ 0x14036C1F4 (sub_14036C1F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     sub_140809BEC @ 0x140809BEC (sub_140809BEC.c)
 */

__int64 __fastcall sub_1408097A0(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *a2 == 0x41C6013DA3BD6075LL )
  {
    v4 = 24;
    v2 = ExQueryWnfStateData(a1, &v5, &v6, &v4);
    if ( v2 >= 0 )
    {
      sub_140809BEC();
      qword_140C1C3B0 = v7;
      xmmword_140C1C3A0 = v6;
      sub_14036C1F4();
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
