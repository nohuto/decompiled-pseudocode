/*
 * XREFs of sub_1402746C0 @ 0x1402746C0
 * Callers:
 *     sub_1402292C0 @ 0x1402292C0 (sub_1402292C0.c)
 *     sub_140274148 @ 0x140274148 (sub_140274148.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_1402746C0(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx

  if ( (dword_140D06880 & 0x4000000) != 0 )
    _mm_lfence();
  v4 = _InterlockedExchange64(a1, a2);
  if ( (unsigned int)sub_140317A80(a1) )
    sub_1402294F0((__int64)a1, a2);
  return v4;
}
