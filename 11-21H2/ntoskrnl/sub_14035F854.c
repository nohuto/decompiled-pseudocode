/*
 * XREFs of sub_14035F854 @ 0x14035F854
 * Callers:
 *     sub_1407D9428 @ 0x1407D9428 (sub_1407D9428.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_14035F934 @ 0x14035F934 (sub_14035F934.c)
 *     sub_14035F9D4 @ 0x14035F9D4 (sub_14035F9D4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14035F854(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  ULONG_PTR Count; // rdx
  struct _EX_RUNDOWN_REF **v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  int v14; // eax
  __int64 v15; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
        *(_DWORD *)(v9 + 20) &= v10;
        if ( v11 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  sub_14035F9D4(a1[44].Count);
  sub_1402AD030(a1 + 45);
  sub_14035F934(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C54690);
  Count = a1[1].Count;
  v5 = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  if ( *(struct _EX_RUNDOWN_REF **)(Count + 8) != &a1[1] || *v5 != &a1[1] )
    __fastfail(3u);
  --dword_140C4EEF0;
  *v5 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v5;
  KeReleaseSpinLockFromDpcLevel(&qword_140C54690);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v15 = *((_QWORD *)v13 + 4375);
        v11 = (v14 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v14;
        if ( v11 )
          sub_140418E4C(v13);
      }
    }
  }
  __writecr8(v3);
  return 0LL;
}
