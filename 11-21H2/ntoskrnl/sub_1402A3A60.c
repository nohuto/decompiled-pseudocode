/*
 * XREFs of sub_1402A3A60 @ 0x1402A3A60
 * Callers:
 *     sub_1402A2EF0 @ 0x1402A2EF0 (sub_1402A2EF0.c)
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     sub_1402A3610 @ 0x1402A3610 (sub_1402A3610.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_14039E588 @ 0x14039E588 (sub_14039E588.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x140557D20 (IoSetIoPriorityHintIntoFileObject.c)
 *     sub_1406DF940 @ 0x1406DF940 (sub_1406DF940.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_140936BF8 @ 0x140936BF8 (sub_140936BF8.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1402A3A60(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 Pool2; // rsi
  __int64 v8; // r9
  __int64 v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 != off_140C06A80 )
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 184));
    Pool2 = *(_QWORD *)(a1 + 208);
    if ( Pool2 )
      goto LABEL_12;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 184));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    Pool2 = ExAllocatePool2(64LL, 88LL, 1162243913LL);
    if ( Pool2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v8 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v8 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)Pool2;
        Pool2 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), Pool2);
      }
LABEL_12:
      if ( a2 )
        *a2 = Pool2;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 184));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = *((_QWORD *)v17 + 4375);
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v15 )
              sub_140418E4C(v17);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return 3221225626LL;
}
