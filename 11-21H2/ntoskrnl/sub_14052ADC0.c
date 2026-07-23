/*
 * XREFs of sub_14052ADC0 @ 0x14052ADC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

ULONG_PTR __fastcall sub_14052ADC0(ULONG_PTR Argument)
{
  unsigned int v1; // r11d
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf

  v1 = dword_140C49FF4 - 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( Argument )
  {
    __writemsr(0x1C9u, v1);
    if ( dword_140C49FF4 )
    {
      v4 = 1728;
      do
      {
        __writemsr(v4 - 64, 0LL);
        __writemsr(v4++, 0LL);
      }
      while ( v4 - 1728 < dword_140C49FF4 );
    }
    __writemsr(0x1C8u, (unsigned int)dword_140C49FEC);
    v5 = __readmsr(0x1D9u);
    v6 = ((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5 | 0x801;
  }
  else
  {
    __writemsr(0x1C8u, 0LL);
    v7 = __readmsr(0x1D9u);
    v6 = ((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7 & 0xFFFFF7FE;
  }
  __writemsr(0x1D9u, v6);
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
  _InterlockedDecrement(&dword_140C49FFC);
  return 0LL;
}
