/*
 * XREFs of sub_1405E1620 @ 0x1405E1620
 * Callers:
 *     <none>
 * Callees:
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405E1620(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // r9
  unsigned int v5; // ecx
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v4 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a1 )
  {
    *((_QWORD *)CurrentThread + 200) = a2;
    v5 = -1073741566;
  }
  else
  {
    *((_QWORD *)CurrentThread + 199) = a2;
    v5 = -1073741568;
  }
  __writemsr(v5, a2);
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
