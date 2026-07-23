/*
 * XREFs of sub_14023C750 @ 0x14023C750
 * Callers:
 *     sub_14023C6B0 @ 0x14023C6B0 (sub_14023C6B0.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14023C750(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // rcx
  void *v9; // r15
  _QWORD *i; // rcx
  __int16 v11; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *((_QWORD *)CurrentPrcb + 1634);
  v6 = *(_QWORD **)(v5 + 8);
  v7 = (unsigned __int64)v6;
  while ( 1 )
  {
    v8 = (unsigned __int64 *)v7;
    if ( !v7 )
      break;
    v7 = *(_QWORD *)v7;
    if ( (v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = *v8;
    if ( (v7 & 1) != 0 )
      break;
LABEL_7:
    if ( !v7 )
      return;
    v9 = (void *)v7;
    if ( *(_BYTE *)(v7 + 24) )
    {
      *(_BYTE *)(v7 + 24) = 0;
    }
    else
    {
      _disable();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)CurrentPrcb + 1642);
      for ( i = v6; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == v7 )
        {
          *i = *(_QWORD *)v7;
          --*(_DWORD *)v5;
          *(_QWORD *)v7 |= 0x8000000000000002uLL;
          v7 = (unsigned __int64)i;
          break;
        }
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentPrcb + 1642);
      if ( (v11 & 0x200) != 0 )
        _enable();
      ExFreePoolWithTag(v9, 0);
    }
  }
  for ( ++v6; (unsigned __int64)v6 < *(_QWORD *)(v5 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 4) >> 5); ++v6 )
  {
    v7 = *v6;
    if ( (*v6 & 1) == 0 )
      goto LABEL_7;
  }
}
