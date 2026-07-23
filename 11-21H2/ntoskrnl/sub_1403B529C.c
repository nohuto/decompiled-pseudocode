/*
 * XREFs of sub_1403B529C @ 0x1403B529C
 * Callers:
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1406F3738 @ 0x1406F3738 (sub_1406F3738.c)
 *     sub_140981070 @ 0x140981070 (sub_140981070.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403B529C(_DWORD *a1, unsigned __int64 a2)
{
  PVOID v4; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // edx
  bool v14; // zf

  v4 = sub_1402828F0(
         64,
         8
       * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
        + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
        + 2LL),
         0x69536D4Du);
  if ( !v4 )
    return 0LL;
  v5 = sub_1402828F0(64, 0x38uLL, 0x6946694Du);
  v6 = v4;
  if ( !v5 )
  {
LABEL_7:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  sub_1406F3738(v4, a1, 1LL);
  v5[5] = v4;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = a2 + (unsigned int)((*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) - 1);
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned int)sub_14027B080(a2) == 1 && (a1[14] & 0x800) == 0 && !(unsigned int)sub_140981070(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = v4;
    goto LABEL_7;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_140C4F4A4);
  v8 = (_QWORD *)qword_140C4F488;
  if ( *(__int64 **)qword_140C4F488 != &qword_140C4F480 )
    __fastfail(3u);
  *v5 = &qword_140C4F480;
  v5[1] = v8;
  *v8 = v5;
  qword_140C4F488 = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F4A4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = *((_QWORD *)CurrentPrcb + 4375);
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
        *(_DWORD *)(v12 + 20) &= v13;
        if ( v14 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return 1LL;
}
