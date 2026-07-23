/*
 * XREFs of sub_140251C60 @ 0x140251C60
 * Callers:
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14085B6D0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     sub_14085C5A8 @ 0x14085C5A8 (sub_14085C5A8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     InitializeSListHead @ 0x1402A05A0 (InitializeSListHead.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140251C60(
        __int64 a1,
        PVOID (__stdcall *a2)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag),
        void (__stdcall *a3)(PVOID P, ULONG Tag),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  int v12; // ebx
  void (__stdcall *v13)(PVOID, ULONG); // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  bool v20; // zf

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = word_140C0C604;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_WORD *)(a1 + 18) = 256;
  v12 = a4 | 1;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  if ( !a2 )
    a2 = ExAllocatePoolWithTag;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = v12;
  v13 = ExFreePoolWithTag;
  *(_QWORD *)(a1 + 48) = a2;
  if ( a3 )
    v13 = a3;
  *(_QWORD *)(a1 + 56) = v13;
  *(_QWORD *)(a1 + 80) = 0LL;
  v14 = KeAcquireSpinLockRaiseToDpc(&qword_140C116F0);
  if ( a8 )
  {
    *(_WORD *)(a1 + 18) = -1;
    *(_WORD *)(a1 + 16) = a7;
  }
  else if ( !word_140C0C604 )
  {
    *(_DWORD *)(a1 + 16) = -65536;
  }
  v15 = (_QWORD *)qword_140C11708;
  v16 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140C11708 != &qword_140C11700 )
    __fastfail(3u);
  *v16 = &qword_140C11700;
  v16[1] = v15;
  *v15 = v16;
  qword_140C11708 = (__int64)v16;
  KeReleaseSpinLockFromDpcLevel(&qword_140C116F0);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v20 = ((unsigned int)result & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= result;
        if ( v20 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  return result;
}
