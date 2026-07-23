/*
 * XREFs of sub_14058CAEC @ 0x14058CAEC
 * Callers:
 *     sub_140A67430 @ 0x140A67430 (sub_140A67430.c)
 * Callees:
 *     sub_14026C720 @ 0x14026C720 (sub_14026C720.c)
 *     sub_140273354 @ 0x140273354 (sub_140273354.c)
 *     sub_1402B1E40 @ 0x1402B1E40 (sub_1402B1E40.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14058CAEC(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __m128i *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // r10
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // edx
  bool v12; // zf

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v2 = 1;
  v3 = (__m128i *)(48 * a1 - 0x220000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( _interlockedbittestandset64(&v3[1].m128i_i32[2], 0x3FuLL) )
  {
    v2 = 0;
  }
  else
  {
    if ( (v3[2].m128i_i8[3] & 0x40) != 0 || sub_140273354((__int64)v3) || sub_14026C720(v6) )
      v2 = 0;
    else
      sub_1402B1E40(v3, v7);
    _InterlockedAnd64(&v3[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
