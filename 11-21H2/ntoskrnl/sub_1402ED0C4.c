/*
 * XREFs of sub_1402ED0C4 @ 0x1402ED0C4
 * Callers:
 *     sub_1402ECFD8 @ 0x1402ECFD8 (sub_1402ECFD8.c)
 * Callees:
 *     sub_1402829D0 @ 0x1402829D0 (sub_1402829D0.c)
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

void __fastcall sub_1402ED0C4(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  __int64 v3; // r15
  _QWORD *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v11; // r10
  int v12; // eax
  bool v13; // zf
  BOOL v14; // [rsp+58h] [rbp+10h]

  v1 = 0LL;
  v2 = (_QWORD *)(a1 + 56);
  v3 = 2LL;
  do
  {
    v4 = (_QWORD *)*(v2 - 1);
    if ( v4 )
    {
      if ( !v1 )
        sub_1402829D0(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
      v1 = *v4;
      v5 = (_QWORD *)*v2;
      v6 = 0LL;
      v14 = *(_QWORD *)(*v4 + 64LL) != 0LL;
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*v4 + 72LL));
      while ( v4 != v5 )
      {
        v8 = sub_140286920((ULONG_PTR)v4, (__int64)v4, 8);
        v4 = (_QWORD *)v4[2];
        v6 += v8;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v11 = *((_QWORD *)CurrentPrcb + 4375);
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
            *(_DWORD *)(v11 + 20) &= v12;
            if ( v13 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      if ( v6 )
        sub_1405C4B8C(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF)), v14, v6);
    }
    v2 += 2;
    --v3;
  }
  while ( v3 );
}
