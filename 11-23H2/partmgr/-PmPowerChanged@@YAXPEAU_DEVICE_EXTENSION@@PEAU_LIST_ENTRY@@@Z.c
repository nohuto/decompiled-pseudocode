/*
 * XREFs of ?PmPowerChanged@@YAXPEAU_DEVICE_EXTENSION@@PEAU_LIST_ENTRY@@@Z @ 0x1C0027F6C
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmPowerChanged(struct _DEVICE_EXTENSION *a1, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  IRP *v5; // rcx
  __int64 v6; // rax
  IRP *v7; // rdx
  struct _DEVICE_OBJECT *Blink; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 i; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  Flink = a2->Flink;
  v11 = 0LL;
  for ( i = 0LL; Flink != a2; Flink = Flink->Flink )
  {
    if ( Flink[-1].Blink )
    {
      v5 = (IRP *)*((_QWORD *)a1 + 107);
      *(_QWORD *)&i = Flink[-7].Flink;
      *((_QWORD *)&i + 1) = *((_QWORD *)a1 + 3);
      LODWORD(v11) = *((_DWORD *)a1 + 152);
      IoReuseIrp(v5, -1073741637);
      v6 = *((_QWORD *)a1 + 107);
      --*(_BYTE *)(v6 + 67);
      *(_QWORD *)(v6 + 184) -= 72LL;
      v7 = (IRP *)*((_QWORD *)a1 + 107);
      Blink = (struct _DEVICE_OBJECT *)Flink[-1].Blink[2].Blink;
      CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->MajorFunction = 15;
      v7->AssociatedIrp.MasterIrp = (struct _IRP *)&i;
      CurrentStackLocation->Parameters.Read.Length = 0;
      CurrentStackLocation->Parameters.Create.Options = 24;
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733288;
      IoForwardIrpSynchronously(Blink, v7);
    }
  }
}
