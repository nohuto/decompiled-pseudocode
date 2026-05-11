/*
 * XREFs of USBType1LockDelayCompleteCallback @ 0x1C0007420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBType1LockDelayCompleteCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v6; // rsi
  __int64 v7; // r14
  KIRQL v8; // r12
  KSPIN_LOCK *v9; // rcx

  v3 = *(_QWORD *)(a3 + 40);
  v4 = *(_DWORD *)(a2 + 48);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
  v7 = *(_QWORD *)(v6 + 152);
  if ( *(int *)(*(_QWORD *)(a3 + 24) + 4LL) < 0 )
    v4 = -1073741668;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 112));
  if ( v4 < 0 )
    *(_BYTE *)v7 = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 56), 0xFFFFFFFF) == 1 )
  {
    *(_BYTE *)v7 = 1;
    KeSetEvent((PRKEVENT)(v6 + 120), 0, 0);
  }
  *(_DWORD *)(v3 + 44) += *(_DWORD *)(a3 + 36);
  v9 = (KSPIN_LOCK *)(v6 + 112);
  if ( *(_DWORD *)(v3 + 44) == *(_DWORD *)(v3 + 40) )
  {
    KeReleaseSpinLock(v9, v8);
    ExFreePool((PVOID)v3);
  }
  else
  {
    KeReleaseSpinLock(v9, v8);
  }
  ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)(v7 + 128), (PVOID)a3);
  return 3221225494LL;
}
