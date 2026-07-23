/*
 * XREFs of sub_140459760 @ 0x140459760
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char sub_140459760()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v1; // r9
  unsigned __int64 v2; // r9
  int v3; // r11d
  unsigned int v4; // r8d
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v7; // r9
  int v8; // edx
  bool v9; // zf

  if ( !dword_140C49FF4 || !dword_140C4A000 )
    return 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v1 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v1 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v2 = __readmsr(0x1D9u);
  __writemsr(0x1D9u, v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v3 = dword_140C49FF4;
  __writemsr(0x1C9u, (unsigned int)(dword_140C49FF4 - 1));
  v4 = 0;
  if ( v3 )
  {
    do
    {
      __writemsr(v4 + 1664, 0LL);
      ++v4;
    }
    while ( v4 < dword_140C49FF4 );
  }
  __writemsr(0x1D9u, v2 | 1);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = *((_QWORD *)CurrentPrcb + 4375);
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
        *(_DWORD *)(v7 + 20) &= v8;
        if ( v9 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 1;
}
