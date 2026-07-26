/*
 * XREFs of NdisTryAcquireRWLockRead @ 0x1C00A61D0
 * Callers:
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A5F50 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NdisTryAcquireRWLockRead(__int64 a1, KIRQL *a2, char a3)
{
  KIRQL v6; // al
  _QWORD *v7; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 16)) )
    return 0;
  if ( (a3 & 1) != 0 )
    v6 = 2;
  else
    v6 = KfRaiseIrql(2u);
  *a2 = v6;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 32) + (KeGetPcr()->Prcb.Number << 12));
  ++*v7;
  _InterlockedOr(v9, 0);
  if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 16)) )
  {
    --*v7;
    if ( *a2 != 2 )
      KeLowerIrql(*a2);
    return 0;
  }
  a2[1] = 3;
  return 1;
}
