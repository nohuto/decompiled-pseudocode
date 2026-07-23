/*
 * XREFs of sub_140578DE0 @ 0x140578DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_140578DE0()
{
  __int16 v0; // di
  bool v1; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax
  __int16 v10; // [rsp+20h] [rbp-8h]

  v0 = v10;
  _disable();
  v1 = (v0 & 0x200) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  _InterlockedAdd(&dword_140C2AAA4, 1u);
  while ( dword_140C2AAA0 )
    _mm_pause();
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v4 = KeGetCurrentIrql();
      if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = *((_QWORD *)CurrentPrcb + 4375);
        v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
        *(_DWORD *)(v6 + 20) &= v7;
        if ( v8 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v1 )
    _enable();
  return result;
}
