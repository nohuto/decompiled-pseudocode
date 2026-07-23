/*
 * XREFs of sub_140538930 @ 0x140538930
 * Callers:
 *     <none>
 * Callees:
 *     sub_140248B24 @ 0x140248B24 (sub_140248B24.c)
 *     sub_140276758 @ 0x140276758 (sub_140276758.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14053D99C @ 0x14053D99C (sub_14053D99C.c)
 */

char __fastcall sub_140538930(__int64 a1, __int64 a2, int *a3)
{
  _BYTE *v3; // rsi
  int v5; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // r8
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  __int64 v13; // r8
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v20; // r9
  int v21; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v3 = (_BYTE *)(a2 + 1172);
  v5 = *a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( byte_140C54C58 != 1 )
    v3 = (_BYTE *)(a1 + 1228);
  v7 = v5 - 1;
  if ( !v7 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
    v15 = byte_140C54C58 == 1;
    *v3 = 1;
    if ( v15 )
      *(_BYTE *)(a2 + 985) = 0;
    else
      *(_BYTE *)(a1 + 985) = 0;
    if ( *(_QWORD *)(a1 + 992) >= 0x2000uLL )
    {
      LOBYTE(v17) = 1;
      sub_140276758((_BYTE *)a1, a2, v17, 0);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !dword_140D06B08 )
      goto LABEL_30;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_30;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_30;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_30;
    if ( CurrentIrql < 2u )
      goto LABEL_30;
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = *((_QWORD *)CurrentPrcb + 4375);
    v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v15 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
    *(_DWORD *)(v20 + 20) &= v21;
    if ( !v15 )
      goto LABEL_30;
    v16 = (__int64)CurrentPrcb;
    goto LABEL_29;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
    *v3 = 0;
    if ( byte_140C54C58 == 1 )
      sub_14053D99C(a2, 0LL);
    else
      sub_140248B24(a1, 0LL);
    goto LABEL_7;
  }
  if ( v8 == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
    LOBYTE(v9) = 1;
    sub_140276758((_BYTE *)a1, a2, v9, 0);
LABEL_7:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !dword_140D06B08 )
      goto LABEL_30;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_30;
    v11 = KeGetCurrentIrql();
    if ( v11 > 0xFu )
      goto LABEL_30;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_30;
    if ( v11 < 2u )
      goto LABEL_30;
    v12 = KeGetCurrentPrcb();
    v13 = *((_QWORD *)v12 + 4375);
    v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
    *(_DWORD *)(v13 + 20) &= v14;
    if ( !v15 )
      goto LABEL_30;
    v16 = (__int64)v12;
LABEL_29:
    sub_140418E4C(v16);
LABEL_30:
    __writecr8(OldIrql);
  }
  return 1;
}
