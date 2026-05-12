/*
 * XREFs of ?PmGiveDisk@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0021CD8
 * Callers:
 *     ?PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0001F80 (-PmNotificationWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PmGiveDisk(struct _DEVICE_EXTENSION *a1)
{
  char *DeviceExtension; // r14
  _QWORD *v3; // r14
  _QWORD *i; // rdi
  IRP *v5; // rcx
  __int64 v6; // rax
  IRP *v7; // rbx
  struct _DEVICE_OBJECT *v8; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  KeWaitForSingleObject((char *)a1 + 56, Executive, 0, 0, 0LL);
  *((GUID *)a1 + 34) = GUID_NULL;
  KeReleaseMutex((PRKMUTEX)a1 + 1, 0);
  v3 = DeviceExtension + 72;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = (IRP *)*((_QWORD *)a1 + 107);
    v10 = *((_QWORD *)a1 + 3);
    IoReuseIrp(v5, -1073741637);
    v6 = *((_QWORD *)a1 + 107);
    --*(_BYTE *)(v6 + 67);
    *(_QWORD *)(v6 + 184) -= 72LL;
    v7 = (IRP *)*((_QWORD *)a1 + 107);
    v8 = (struct _DEVICE_OBJECT *)i[5];
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation->MajorFunction = 15;
    v7->AssociatedIrp.MasterIrp = (struct _IRP *)&v10;
    CurrentStackLocation->Parameters.Read.Length = 0;
    CurrentStackLocation->Parameters.Create.Options = 8;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 7733292;
    IoForwardIrpSynchronously(v8, v7);
    if ( v7->IoStatus.Status == -1073741802 )
      break;
  }
}
