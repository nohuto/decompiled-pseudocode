/*
 * XREFs of IoAcquireCancelSpinLock @ 0x14022A5C0
 * Callers:
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 * Callees:
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  UCHAR CurrentIrql; // si
  PVOID ArbitraryUserPointer; // rbx
  volatile __int64 *v4; // rdi
  __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (__int64)ArbitraryUserPointer + 112;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *((_QWORD *)CurrentPrcb + 4375);
  if ( v7 )
  {
    if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
    {
      v9 = *(_DWORD *)(v7 + 24);
      *(_DWORD *)(v7 + 24) = v9 + 1;
      if ( v9 == -1 )
        sub_140418E4C(CurrentPrcb);
    }
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_14045A10C(v5, v4);
  }
  else if ( _InterlockedExchange64(v4, v5) )
  {
    sub_140311C70(v5);
  }
  *Irql = CurrentIrql;
}
