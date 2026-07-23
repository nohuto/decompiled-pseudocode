/*
 * XREFs of sub_140250C50 @ 0x140250C50
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     sub_140A83574 @ 0x140A83574 (sub_140A83574.c)
 *     sub_140A863B8 @ 0x140A863B8 (sub_140A863B8.c)
 *     sub_140A98170 @ 0x140A98170 (sub_140A98170.c)
 *     sub_140A9B2E4 @ 0x140A9B2E4 (sub_140A9B2E4.c)
 *     sub_140A9D00C @ 0x140A9D00C (sub_140A9D00C.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 *     sub_140B231D8 @ 0x140B231D8 (sub_140B231D8.c)
 *     sub_140B2D120 @ 0x140B2D120 (sub_140B2D120.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140250C50(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P, ULONG Tag),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  void (__stdcall *v12)(PVOID, ULONG); // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  bool v19; // zf

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = word_140C0C604;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  v12 = ExFreePoolWithTag;
  *(_QWORD *)(a1 + 48) = a2;
  if ( a3 )
    v12 = a3;
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 80) = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(&qword_140C116D0);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !word_140C0C604 )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v14 = (_QWORD *)qword_140C116E8;
  v15 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140C116E8 != &qword_140C116E0 )
    __fastfail(3u);
  *v15 = &qword_140C116E0;
  v15[1] = v14;
  *v14 = v15;
  qword_140C116E8 = (__int64)v15;
  KeReleaseSpinLockFromDpcLevel(&qword_140C116D0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v19 = ((unsigned int)result & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= result;
        if ( v19 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  return result;
}
