/*
 * XREFs of ?PmSplitAndRedirectWrite@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAU_LIST_ENTRY@@@Z @ 0x1C001081C
 * Callers:
 *     ?PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0010550 (-PmSplitAndRedirect@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z @ 0x1C0010230 (-PmPartitionRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_EXTENSION@@PEAU_IRP@@PEAX_JK@Z.c)
 *     ?PmDiskRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAX_JK@Z @ 0x1C0027DF4 (-PmDiskRedirect@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@PEAX_JK@Z.c)
 */

__int64 __fastcall PmSplitAndRedirectWrite(struct _DEVICE_EXTENSION *a1, struct _IRP *a2, struct _LIST_ENTRY *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  int v4; // ebx
  struct _LIST_ENTRY *Flink; // r15
  struct _DEVICE_EXTENSION *v7; // r13
  __int64 QuadPart; // rdi
  char *v9; // rbp
  unsigned int Length; // esi
  KSPIN_LOCK *v11; // rax
  KIRQL v12; // al
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r12
  struct _IO_STACK_LOCATION *v19; // [rsp+30h] [rbp-58h]
  struct _LIST_ENTRY *v21; // [rsp+98h] [rbp+10h]
  KSPIN_LOCK *SpinLock; // [rsp+A8h] [rbp+20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  Flink = a3->Flink;
  v7 = a1;
  v19 = CurrentStackLocation;
  QuadPart = CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
  v9 = (char *)a2->MdlAddress->StartVa + a2->MdlAddress->ByteOffset;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( a3->Flink != a3 )
  {
    v11 = (KSPIN_LOCK *)((char *)a1 + 112);
    SpinLock = (KSPIN_LOCK *)((char *)a1 + 112);
    do
    {
      v12 = KeAcquireSpinLockRaiseToDpc(v11);
      Blink = Flink[3].Blink;
      v14 = Flink[4].Flink;
      v21 = Blink;
      KeReleaseSpinLock(SpinLock, v12);
      if ( (__int64)Blink > QuadPart )
      {
        v15 = (__int64)Blink - QuadPart;
        if ( Length <= v15 )
          LODWORD(v15) = Length;
        v4 = PmDiskRedirect(a1, a2, v9, QuadPart, v15);
        if ( v4 < 0 )
          return (unsigned int)v4;
        v9 += (unsigned int)v15;
        QuadPart += (unsigned int)v15;
        Length -= v15;
        Blink = v21;
      }
      if ( !Length )
        break;
      if ( (__int64)Blink <= QuadPart )
      {
        v16 = QuadPart - (_QWORD)Blink;
        if ( QuadPart - (__int64)Blink < (__int64)v14 )
        {
          v7 = a1;
          v17 = (__int64)v14 - v16;
          if ( Length <= v17 )
            LODWORD(v17) = Length;
          v4 = PmPartitionRedirect((KSPIN_LOCK *)a1, (struct _PARTITION_EXTENSION *)&Flink[-8].Blink, a2, v9, v16, v17);
          if ( v4 == -1073741822 )
            v4 = PmDiskRedirect(a1, a2, v9, QuadPart, v17);
          if ( v4 < 0 )
            return (unsigned int)v4;
          v9 += (unsigned int)v17;
          QuadPart += (unsigned int)v17;
          Length -= v17;
          if ( !Length )
            goto LABEL_19;
        }
      }
      Flink = Flink->Flink;
      v11 = SpinLock;
    }
    while ( Flink != a3 );
    v7 = a1;
LABEL_19:
    CurrentStackLocation = v19;
  }
  if ( !Length || (v4 = PmDiskRedirect(v7, a2, v9, QuadPart, Length), v4 >= 0) )
  {
    if ( LODWORD(a2->IoStatus.Information) != CurrentStackLocation->Parameters.Read.Length )
      return (unsigned int)-1073741595;
  }
  return (unsigned int)v4;
}
