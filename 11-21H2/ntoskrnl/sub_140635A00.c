/*
 * XREFs of sub_140635A00 @ 0x140635A00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460DBA @ 0x140460DBA (sub_140460DBA.c)
 *     sub_140460F1A @ 0x140460F1A (sub_140460F1A.c)
 *     sub_140883A50 @ 0x140883A50 (sub_140883A50.c)
 */

struct _KTHREAD *__fastcall sub_140635A00(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  KIRQL v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct _KTHREAD *result; // rax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF
  BOOL v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = 0;
  v5 = *a3;
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v17, 0);
  if ( *(_DWORD *)(*(a1 - 1) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 368));
    a1[1] = 0LL;
    v8 = v7;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v5 + 368));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  v14 = qword_140C15D88;
  memset(a1, 0, 0x58uLL);
  v15 = *(a1 - 1);
  *((_DWORD *)a1 + 22) = 0;
  sub_140460DBA(v14, v15, (_SLIST_ENTRY *)(a1 - 7));
  if ( (int)sub_140460F1A(1, &v18) >= 0 && !v18 )
    sub_140883A50(v5, v6);
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)result + 344, 0xFF7FFFFF);
  return result;
}
