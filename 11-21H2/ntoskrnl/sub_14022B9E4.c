/*
 * XREFs of sub_14022B9E4 @ 0x14022B9E4
 * Callers:
 *     sub_14022B980 @ 0x14022B980 (sub_14022B980.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 * Callees:
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 */

__int64 __fastcall sub_14022B9E4(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // tt
  unsigned __int16 *v5; // r10
  __int16 v6; // r11
  unsigned __int16 v7; // tt
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = *a1;
  if ( v3 != _InterlockedCompareExchange16((volatile signed __int16 *)a1, a2 | v2, v2) )
  {
    do
    {
      sub_14029F5C0(&v8);
      _m_prefetchw(v5);
      v2 = *v5;
      v7 = *v5;
    }
    while ( v7 != _InterlockedCompareExchange16((volatile signed __int16 *)v5, v6 | v2, v2) );
  }
  return v2;
}
