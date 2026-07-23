/*
 * XREFs of sub_14022E370 @ 0x14022E370
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

unsigned __int64 __fastcall sub_14022E370(char a1)
{
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf

  result = (unsigned int)dword_140C49FF0;
  if ( dword_140C49FF0 )
  {
    if ( a1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      __writemsr(0x1C8u, (unsigned int)dword_140C49FEC);
      __writemsr(0x1C9u, (unsigned int)(dword_140C49FF4 - 1));
      __writemsr(0x1D9u, __readmsr(0x1D9u) | 0x801);
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
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    else
    {
      result = __readmsr(0x1D9u);
      if ( (result & 1) == 0 )
      {
        result |= 1uLL;
        __writemsr(0x1D9u, result);
      }
      if ( !byte_140C097A6 )
      {
        result = __readmsr(0x38Eu);
        if ( (result & 0x400000000000000LL) != 0 )
        {
          result = 0LL;
          __writemsr(0x390u, 0x400000000000000uLL);
        }
      }
    }
  }
  return result;
}
