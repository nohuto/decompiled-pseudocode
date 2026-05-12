/*
 * XREFs of sub_1C004C410 @ 0x1C004C410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011950 @ 0x1C0011950 (sub_1C0011950.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

void __fastcall sub_1C004C410(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM **Context)
{
  PVOID DeviceExtension; // rdi
  IRP *v4; // rsi
  struct _IO_WORKITEM *v5; // rbx
  int v6; // eax
  int v7; // r8d

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = (IRP *)Context[1];
  v5 = *Context;
  v6 = sub_1C0011950((__int64)DeviceExtension, (__int64)v4);
  v7 = v6;
  if ( v6 == -2147483631 )
  {
    v7 = -1073741823;
  }
  else if ( v6 >= 0 )
  {
    goto LABEL_8;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0x1Du, (__int64)&unk_1C008A080, DeviceExtension, v4, v7);
  }
LABEL_8:
  sub_1C0011BE0(v4, (__int64)DeviceExtension);
  if ( v5 )
    IoFreeWorkItem(v5);
  ExFreePoolWithTag(Context, 0x49576152u);
}
