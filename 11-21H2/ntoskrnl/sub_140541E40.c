/*
 * XREFs of sub_140541E40 @ 0x140541E40
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 * Callees:
 *     sub_140203D88 @ 0x140203D88 (sub_140203D88.c)
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14021F5E4 @ 0x14021F5E4 (sub_14021F5E4.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

PSLIST_ENTRY __fastcall sub_140541E40(__int64 a1, IRP *a2)
{
  ULONG_PTR Information; // rdi
  char v3; // bp
  KSPIN_LOCK *v4; // rdi
  KIRQL CancelIrql; // bl
  __int64 *i; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  KSPIN_LOCK *v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r10
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // r8
  PSLIST_ENTRY result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r8
  int v21; // eax
  NTSTATUS v22; // [rsp+50h] [rbp+8h] BYREF

  Information = a2->IoStatus.Information;
  v3 = 0;
  v22 = 0;
  v4 = (KSPIN_LOCK *)(Information + 24);
  CancelIrql = a2->CancelIrql;
  if ( !a1 )
    goto LABEL_3;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CancelIrql = KeAcquireSpinLockRaiseToDpc(&qword_140C48B98);
  v3 = 1;
  for ( i = &qword_140C48BA0; ; i = (__int64 *)(v4 + 3) )
  {
    v8 = *i;
    if ( *i )
      break;
LABEL_7:
    if ( !v3 )
    {
      KeReleaseSpinLockFromDpcLevel(v4);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && CancelIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = *((_QWORD *)CurrentPrcb + 4375);
            v21 = ~(unsigned __int16)(-1LL << (CancelIrql + 1));
            v15 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
            *(_DWORD *)(v20 + 20) &= v21;
            if ( v15 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      result = (PSLIST_ENTRY)CancelIrql;
      __writecr8(CancelIrql);
      return result;
    }
    v3 = 0;
    KeAcquireSpinLockAtDpcLevel(v4);
    KeReleaseSpinLockFromDpcLevel(&qword_140C48B98);
LABEL_3:
    ;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)v8;
    if ( *(IRP **)(v8 + 24) == a2 )
      break;
    i = (__int64 *)v8;
    v8 = *(_QWORD *)v8;
    if ( !v9 )
      goto LABEL_7;
  }
  *i = v9;
  if ( v3 || v8 != v4[4] )
  {
    a2->IoStatus.Information = 0LL;
    v10 = &qword_140C48B98;
    if ( v3 )
      goto LABEL_14;
  }
  else
  {
    v4[4] = (KSPIN_LOCK)i;
    a2->IoStatus.Information = 0LL;
  }
  v10 = v4;
LABEL_14:
  KeReleaseSpinLockFromDpcLevel(v10);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CancelIrql <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = *((_QWORD *)v12 + 4375);
        v14 = ~(unsigned __int16)(-1LL << (CancelIrql + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C((__int64)v12);
      }
    }
  }
  __writecr8(CancelIrql);
  sub_14021F5E4(*(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16), a2, -1073741536, &v22, 0LL);
  return sub_140203D88((__int64)&stru_140CE2680, (_SLIST_ENTRY *)v8, v16);
}
