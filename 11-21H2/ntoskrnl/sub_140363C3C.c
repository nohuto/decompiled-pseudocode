/*
 * XREFs of sub_140363C3C @ 0x140363C3C
 * Callers:
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140363C3C(_QWORD *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // r11
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r9

  *a1 = 0LL;
  a1[1] = a2;
  if ( *(_BYTE *)(a2 + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v5 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)a1 = CurrentIrql;
  }
  else
  {
    *(_BYTE *)a1 = -1;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
  }
  return a1;
}
