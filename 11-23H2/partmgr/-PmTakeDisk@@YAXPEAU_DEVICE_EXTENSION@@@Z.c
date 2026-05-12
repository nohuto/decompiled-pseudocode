/*
 * XREFs of ?PmTakeDisk@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C001E698
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmTakeDisk(struct _DEVICE_EXTENSION *a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  IRP *v4; // rcx
  __int64 v5; // rax
  IRP *v6; // rdx
  struct _DEVICE_OBJECT *v7; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (char *)PmControlObject->DeviceExtension + 72;
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = (IRP *)*((_QWORD *)a1 + 107);
    v9 = *((_QWORD *)a1 + 3);
    IoReuseIrp(v4, -1073741637);
    v5 = *((_QWORD *)a1 + 107);
    --*(_BYTE *)(v5 + 67);
    *(_QWORD *)(v5 + 184) -= 72LL;
    v6 = (IRP *)*((_QWORD *)a1 + 107);
    v7 = (struct _DEVICE_OBJECT *)i[5];
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation->MajorFunction = 15;
    v6->AssociatedIrp.MasterIrp = (struct _IRP *)&v9;
    CurrentStackLocation->Parameters.Read.Length = 0;
    CurrentStackLocation->Parameters.Create.Options = 8;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733256;
    IoForwardIrpSynchronously(v7, v6);
  }
}
