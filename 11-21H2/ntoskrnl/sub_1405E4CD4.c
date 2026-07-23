/*
 * XREFs of sub_1405E4CD4 @ 0x1405E4CD4
 * Callers:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_1403A5920 @ 0x1403A5920 (sub_1403A5920.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405E4B98 @ 0x1405E4B98 (sub_1405E4B98.c)
 */

__int64 __fastcall sub_1405E4CD4(KSPIN_LOCK *SpinLock, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  KSPIN_LOCK *v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf

  v2 = a2[7];
  v5 = 0;
  if ( (_WORD)v2 )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = &SpinLock[3 * (v5 % *((_DWORD *)SpinLock + 180))];
  *((_BYTE *)v7 + 744) = KeAcquireSpinLockRaiseToDpc(v7 + 92);
  if ( *(_DWORD *)(a2 + 5) )
  {
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)sub_1405E4B98(SpinLock, v8);
    if ( v9 )
    {
      *v9 = a2;
      v10 = (__int64)(SpinLock[23] - (_QWORD)v9) >> 3;
      a2[6] = v10;
      a2[5] = WORD1(v10);
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  v11 = *((unsigned __int8 *)v7 + 744);
  KeReleaseSpinLockFromDpcLevel(v7 + 92);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return (unsigned int)v10;
}
