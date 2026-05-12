/*
 * XREFs of ?PmQueryVeto@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0010394
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmQueryVeto(struct _DEVICE_EXTENSION *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rdi
  IRP *v5; // rcx
  __int64 v6; // rax
  IRP *v7; // rbx
  struct _DEVICE_OBJECT *Blink; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  KIRQL v10; // al
  char *v11; // rdx
  KIRQL v12; // r8
  __int64 *v13; // rcx
  char *v14; // rax
  __int64 *v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // [rsp+20h] [rbp-30h] BYREF
  char *v18; // [rsp+28h] [rbp-28h]
  __int128 i; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]

  Flink = a2->Flink;
  v20 = 0LL;
  for ( i = 0LL; Flink != a2; Flink = Flink->Flink )
  {
    if ( Flink[-1].Blink )
    {
      v5 = (IRP *)*((_QWORD *)a1 + 107);
      *(_QWORD *)&i = Flink[-7].Flink;
      *((_QWORD *)&i + 1) = *((_QWORD *)a1 + 3);
      IoReuseIrp(v5, -1073741637);
      v6 = *((_QWORD *)a1 + 107);
      --*(_BYTE *)(v6 + 67);
      *(_QWORD *)(v6 + 184) -= 72LL;
      v7 = (IRP *)*((_QWORD *)a1 + 107);
      Blink = (struct _DEVICE_OBJECT *)Flink[-1].Blink[2].Blink;
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->MajorFunction = 15;
      v7->AssociatedIrp.MasterIrp = (struct _IRP *)&i;
      CurrentStackLocation->Parameters.Read.Length = 1;
      CurrentStackLocation->Parameters.Create.Options = 24;
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733304;
      IoForwardIrpSynchronously(Blink, v7);
      if ( v7->IoStatus.Status >= 0 )
      {
        if ( (_BYTE)i )
          break;
      }
    }
  }
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
  v11 = (char *)a1 + 688;
  v12 = v10;
  v13 = (__int64 *)*((_QWORD *)a1 + 86);
  if ( (struct _DEVICE_EXTENSION *)v13[1] != (struct _DEVICE_EXTENSION *)((char *)a1 + 688)
    || (v18 = (char *)a1 + 688,
        v17 = v13,
        v13[1] = (__int64)&v17,
        *(_QWORD *)v11 = &v17,
        v14 = (char *)*((_QWORD *)a1 + 87),
        v18 != v11)
    || *(char **)v14 != v11 )
  {
LABEL_14:
    __fastfail(3u);
  }
  *(_QWORD *)v14 = &v17;
  *((_QWORD *)a1 + 87) = (char *)a1 + 688;
  *(_QWORD *)v11 = v11;
  v18 = v14;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v12);
  while ( 1 )
  {
    v15 = v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    if ( (__int64 **)v17[1] != &v17 )
      goto LABEL_14;
    v16 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_14;
    v17 = (__int64 *)*v17;
    v16[1] = (__int64)&v17;
    v15[1] = (__int64)v15;
    *v15 = (__int64)v15;
    *((_DWORD *)v15 - 30) = (_BYTE)i != 0 ? 0xC0000001 : 0;
  }
}
