/*
 * XREFs of sub_1403CB204 @ 0x1403CB204
 * Callers:
 *     sub_1403CB160 @ 0x1403CB160 (sub_1403CB160.c)
 *     sub_140B1A290 @ 0x140B1A290 (sub_140B1A290.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1403CB204(signed __int64 *a1)
{
  unsigned __int64 v1; // r8
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = __rdtsc();
  _m_prefetchw(a1);
  v2 = *a1;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(a1, v2 + 1, v2);
  }
  while ( v3 != v2 );
  return __rdtsc() - v1;
}
