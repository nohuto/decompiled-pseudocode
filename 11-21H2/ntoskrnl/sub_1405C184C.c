/*
 * XREFs of sub_1405C184C @ 0x1405C184C
 * Callers:
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall sub_1405C184C(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  void *v5; // rbp
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf

  result = sub_1402828F0(64, 72LL * (unsigned __int16)word_140D05000 + 32, 0x704C694Du);
  v3 = result;
  if ( result )
  {
    v4 = result + 4;
    v5 = 0LL;
    v6 = (unsigned __int16)word_140D05000;
    v7 = 24LL * (unsigned __int16)word_140D05000;
    v8 = 3LL;
    do
    {
      v9 = v4;
      if ( (_DWORD)v6 )
      {
        v10 = v6;
        do
        {
          v9[1] = v9;
          *v9 = v9;
          v9 += 3;
          --v10;
        }
        while ( v10 );
      }
      v4 = (_QWORD *)((char *)v4 + v7);
      --v8;
    }
    while ( v8 );
    v11 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 48LL;
    v3[2] = v11;
    v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 15892));
    if ( *(_QWORD *)(v11 + 280) )
    {
      v5 = v3;
      v3 = *(_QWORD **)(v11 + 280);
    }
    else
    {
      *(_QWORD *)(v11 + 280) = v3;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 288));
    v13 = *(_QWORD **)(a1 + 15904);
    if ( *v13 != a1 + 15896 )
      __fastfail(3u);
    *v3 = a1 + 15896;
    v3[1] = v13;
    *v13 = v3;
    *(_QWORD *)(a1 + 15904) = v3;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 288));
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 15892));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = *((_QWORD *)CurrentPrcb + 4375);
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
          *(_DWORD *)(v16 + 20) &= v17;
          if ( v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return v3;
  }
  return result;
}
