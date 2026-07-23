/*
 * XREFs of sub_14069C7C0 @ 0x14069C7C0
 * Callers:
 *     sub_14069C1E0 @ 0x14069C1E0 (sub_14069C1E0.c)
 *     sub_1407CB6C0 @ 0x1407CB6C0 (sub_1407CB6C0.c)
 * Callees:
 *     sub_14069C9C0 @ 0x14069C9C0 (sub_14069C9C0.c)
 */

signed __int64 __fastcall sub_14069C7C0(unsigned __int64 P, signed __int64 *a2)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  if ( !a2 )
    return sub_14069C9C0((PVOID)P);
  _m_prefetchw(a2);
  result = *a2;
  if ( (P ^ *a2) >= 0xF )
    return sub_14069C9C0((PVOID)P);
  while ( 1 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(a2, result + 1, result);
    if ( v3 == result )
      break;
    if ( (P ^ result) >= 0xF )
      return sub_14069C9C0((PVOID)P);
  }
  return result;
}
