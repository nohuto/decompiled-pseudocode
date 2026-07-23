/*
 * XREFs of sub_1403C79D4 @ 0x1403C79D4
 * Callers:
 *     sub_1403C7984 @ 0x1403C7984 (sub_1403C7984.c)
 *     sub_14053FE50 @ 0x14053FE50 (sub_14053FE50.c)
 * Callees:
 *     sub_14029F5C0 @ 0x14029F5C0 (sub_14029F5C0.c)
 */

unsigned __int64 __fastcall sub_1403C79D4(__int64 *a1)
{
  __int64 *v1; // r9
  unsigned __int64 v2; // rdx
  __int64 v3; // rtt
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v1 = a1;
  while ( 1 )
  {
    _m_prefetchw(v1);
    v2 = *v1 & 1 | ((*v1 & 0xFFFFFFFFFFFFFFFEuLL) + 2);
    if ( v2 < 2 )
      __fastfail(0xEu);
    v3 = *v1;
    if ( v3 == _InterlockedCompareExchange64(v1, v2, *v1) )
      break;
    sub_14029F5C0(&v5);
  }
  return v2 & 1;
}
