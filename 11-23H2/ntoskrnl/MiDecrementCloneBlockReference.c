/*
 * XREFs of MiDecrementCloneBlockReference @ 0x14066429C
 * Callers:
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 * Callees:
 *     MiDecrementCloneBlock @ 0x1402F3EB8 (MiDecrementCloneBlock.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     MiDeleteCloneDescriptor @ 0x140664390 (MiDeleteCloneDescriptor.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  unsigned int v6; // esi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v5 = *(struct _KTHREAD **)(a3 + 1248);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v6 = MiDecrementCloneBlock(
         *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL),
         a3 + 1664,
         BugCheckParameter3,
         *(_QWORD *)(*(_QWORD *)(a3 + 1680) + 344LL) > *(_QWORD *)(BugCheckParameter2 + 96),
         &v8);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v6;
}
