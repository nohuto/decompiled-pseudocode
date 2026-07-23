/*
 * XREFs of sub_14035FE5C @ 0x14035FE5C
 * Callers:
 *     sub_1407DB734 @ 0x1407DB734 (sub_1407DB734.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14025383C @ 0x14025383C (sub_14025383C.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035FE5C(__int64 a1)
{
  __int64 result; // rax
  KSPIN_LOCK *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 **v5; // rbx
  __int64 v6; // r12
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rsi
  void *v10; // r15
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  bool v13; // zf

  result = *(unsigned int *)(a1 + 632);
  if ( (result & 0x10) != 0 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 2440);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
    v5 = (__int64 **)(a1 + 2448);
    v6 = MEMORY[0xFFFFF78000000008];
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 == (__int64 *)v5 )
        break;
      v8 = *v7;
      if ( (__int64 **)v7[1] != v5 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      v9 = v7 - 36;
      *v5 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v5;
      v10 = (void *)*(v7 - 1);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v7 - 28);
      v9[35] = 0LL;
      if ( (v9[38] & 2) != 0 )
        sub_14025383C((PKTIMER)v9, v6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v9 + 8);
      ObfDereferenceObjectWithTag(v10, 0x54567350u);
    }
    KeReleaseSpinLockFromDpcLevel(v3);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v13 = ((unsigned int)result & *(_DWORD *)(v12 + 20)) == 0;
          *(_DWORD *)(v12 + 20) &= result;
          if ( v13 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return result;
}
