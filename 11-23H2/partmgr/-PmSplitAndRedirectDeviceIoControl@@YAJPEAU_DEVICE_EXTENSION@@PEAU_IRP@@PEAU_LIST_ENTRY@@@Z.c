/*
 * XREFs of ?PmSplitAndRedirectDeviceIoControl@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001069C
 * Callers:
 *     ?PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0010550 (-PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z @ 0x1C0010230 (-PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z.c)
 *     PmIoctlPassThroughQuerySectorWriteAta @ 0x1C00236F6 (PmIoctlPassThroughQuerySectorWriteAta.c)
 *     PmIoctlPassThroughQuerySectorWriteScsi @ 0x1C0023976 (PmIoctlPassThroughQuerySectorWriteScsi.c)
 *     PmIoctlDsmQuerySectorWrite @ 0x1C0025660 (PmIoctlDsmQuerySectorWrite.c)
 */

__int64 __fastcall PmSplitAndRedirectDeviceIoControl(
        struct _DEVICE_EXTENSION *a1,
        struct _IRP *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *v3; // r14
  struct _IRP *v4; // r15
  signed __int64 v6; // r13
  unsigned int v7; // ebx
  int v8; // eax
  struct _LIST_ENTRY *Flink; // rdi
  KSPIN_LOCK *v10; // rax
  KIRQL v11; // al
  struct _LIST_ENTRY *Blink; // rsi
  ULONGLONG v14[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _DEVICE_EXTENSION *v15; // [rsp+80h] [rbp+40h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp+48h] BYREF
  struct _LIST_ENTRY *v17; // [rsp+98h] [rbp+58h] BYREF

  v15 = a1;
  v3 = 0LL;
  v4 = a2;
  v17 = 0LL;
  v6 = 0LL;
  LOBYTE(SpinLock) = 0;
  LOBYTE(a2) = 0;
  v14[0] = 0LL;
  v7 = 0;
  switch ( v4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x4D004u:
    case 0x4D014u:
      LOBYTE(a2) = 1;
      goto LABEL_11;
    case 0x4D02Cu:
    case 0x4D030u:
      v8 = PmIoctlPassThroughQuerySectorWriteAta(v4, &SpinLock, &v17, v14);
      goto LABEL_12;
    case 0x4D044u:
    case 0x4D048u:
LABEL_11:
      v8 = PmIoctlPassThroughQuerySectorWriteScsi((int)v4, (int)a2, (int)&SpinLock, (int)&v17, v14);
      goto LABEL_12;
  }
  if ( v4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 2987012 )
    goto LABEL_14;
  v8 = PmIoctlDsmQuerySectorWrite(v4, &SpinLock, &v17, v14);
LABEL_12:
  v7 = v8;
  if ( v8 < 0 )
    return v7;
  v3 = v17;
  v6 = v14[0];
  a1 = v15;
LABEL_14:
  Flink = a3->Flink;
  if ( a3->Flink != a3 )
  {
    v10 = (KSPIN_LOCK *)((char *)a1 + 112);
    SpinLock = (PKSPIN_LOCK)((char *)a1 + 112);
    do
    {
      v11 = KeAcquireSpinLockRaiseToDpc(v10);
      Blink = Flink[3].Blink;
      v17 = Flink[4].Flink;
      KeReleaseSpinLock(SpinLock, v11);
      if ( (__int64)Blink <= (__int64)v3 )
      {
        if ( (char *)v3 - (char *)Blink < (__int64)v17 )
        {
LABEL_20:
          v7 = PmPartitionRedirect((KSPIN_LOCK *)v15, (struct _PARTITION_EXTENSION *)&Flink[-8].Blink, v4, 0LL, 0LL, 0);
          if ( (v7 & 0x80000000) != 0 )
            return v7;
        }
      }
      else if ( v6 > (char *)Blink - (char *)v3 )
      {
        goto LABEL_20;
      }
      Flink = Flink->Flink;
      v10 = SpinLock;
    }
    while ( Flink != a3 );
  }
  return v7;
}
