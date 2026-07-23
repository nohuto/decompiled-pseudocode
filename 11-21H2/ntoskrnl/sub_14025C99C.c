/*
 * XREFs of sub_14025C99C @ 0x14025C99C
 * Callers:
 *     sub_140672348 @ 0x140672348 (sub_140672348.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14025C99C()
{
  void *Pool2; // rax
  void *v1; // rsi
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  PEX_SPIN_LOCK v5; // rbx
  PEX_SPIN_LOCK v6; // rcx
  void *v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  __int64 v16; // r8
  int v17; // eax

  Pool2 = (void *)ExAllocatePool2(64LL, 1536LL, 1950639443LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  memset(Pool2, 0, 0x600uLL);
  v2 = ExAcquireSpinLockExclusive(off_140C06A88);
  v3 = (_QWORD *)ExAllocatePool2(64LL, 8LL * (unsigned int)(*((_DWORD *)off_140C06A88 + 1) + 1), 1950639443LL);
  v4 = v3;
  if ( !v3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(off_140C06A88);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    ExFreePoolWithTag(v1, 0x74446553u);
    return 3221225495LL;
  }
  v5 = off_140C06A88;
  memmove(v3, *((const void **)off_140C06A88 + 1), 8LL * *((unsigned int *)off_140C06A88 + 1));
  v4[*((unsigned int *)v5 + 1)] = v1;
  v6 = off_140C06A88;
  v7 = (void *)*((_QWORD *)off_140C06A88 + 1);
  ++*((_DWORD *)off_140C06A88 + 1);
  *((_QWORD *)v6 + 1) = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v13 )
          sub_140418E4C(v15);
      }
    }
  }
  __writecr8(v2);
  ExFreePoolWithTag(v7, 0x74446553u);
  return 0LL;
}
