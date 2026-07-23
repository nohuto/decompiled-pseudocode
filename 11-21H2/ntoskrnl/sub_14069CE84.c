/*
 * XREFs of sub_14069CE84 @ 0x14069CE84
 * Callers:
 *     sub_14069CAE8 @ 0x14069CAE8 (sub_14069CAE8.c)
 * Callees:
 *     sub_14069D2C0 @ 0x14069D2C0 (sub_14069D2C0.c)
 */

unsigned __int64 __fastcall sub_14069CE84(signed __int64 *a1)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rax

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 0xF) == 0 )
    return sub_14069D2C0(a1);
  do
  {
    v2 = _InterlockedCompareExchange64(a1, v1 - 1, v1);
    if ( v1 == v2 )
      break;
    v1 = v2;
  }
  while ( (v2 & 0xF) != 0 );
  if ( (v1 & 0xF) != 0 )
    return v1 & 0xFFFFFFFFFFFFFFF0uLL;
  else
    return sub_14069D2C0(a1);
}
