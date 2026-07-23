/*
 * XREFs of sub_140590CF0 @ 0x140590CF0
 * Callers:
 *     sub_1402003C0 @ 0x1402003C0 (sub_1402003C0.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140590CF0(ULONG_PTR Context)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  ULONG ActiveProcessorCount; // eax
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax

  v2 = 48LL * *(_QWORD *)(Context + 8) - 0x220000000000LL;
  sub_140239060(v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(Context + 76) = ActiveProcessorCount;
  *(_DWORD *)(Context + 72) = ActiveProcessorCount;
  KeIpiGenericCall(sub_140590E20, Context);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= v9;
        if ( v10 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
