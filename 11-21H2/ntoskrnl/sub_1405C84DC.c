/*
 * XREFs of sub_1405C84DC @ 0x1405C84DC
 * Callers:
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405C84DC(unsigned __int32 *a1, unsigned __int8 a2)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // r8d

  _m_prefetchw(a1);
  v2 = *a1;
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (a2 << 24) | v2 & 0xFFFFFF, v2);
  }
  while ( v2 != v3 );
  return HIBYTE(v2);
}
