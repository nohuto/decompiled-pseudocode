/*
 * XREFs of sub_1403559B0 @ 0x1403559B0
 * Callers:
 *     PoLatencySensitivityHint @ 0x1402244A0 (PoLatencySensitivityHint.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1403559B0(volatile signed __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  char v4; // r10
  unsigned __int64 v5; // r9

  v3 = *a1;
  v4 = 0;
  while ( v3 < a2 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64(a1, a2, v3);
    if ( v5 == v3 )
    {
      v4 = 1;
      break;
    }
    _mm_pause();
  }
  if ( a3 )
    *a3 = v3;
  return v4;
}
