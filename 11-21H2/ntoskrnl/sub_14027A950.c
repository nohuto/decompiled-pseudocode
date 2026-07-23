/*
 * XREFs of sub_14027A950 @ 0x14027A950
 * Callers:
 *     sub_14027A1B4 @ 0x14027A1B4 (sub_14027A1B4.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_14027A818 @ 0x14027A818 (sub_14027A818.c)
 *     sub_140757130 @ 0x140757130 (sub_140757130.c)
 * Callees:
 *     sub_1402F339C @ 0x1402F339C (sub_1402F339C.c)
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 */

unsigned __int64 __fastcall sub_14027A950(signed __int64 *a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rbx
  unsigned int v4; // r9d
  unsigned __int64 v5; // rbx

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v2 = _InterlockedCompareExchange64(a1, v1 - 1, v1);
      if ( v1 == v2 )
        break;
      v1 = v2;
    }
    while ( (v2 & 0xF) != 0 );
  }
  v3 = v1;
  v4 = v1 & 0xF;
  v5 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v4 <= 1 )
  {
    if ( !v4 )
      return 0LL;
    sub_1402F339C(a1, v5);
  }
  if ( dword_140D05010 )
    sub_1405C5EC8(v5 - 48);
  return v5;
}
