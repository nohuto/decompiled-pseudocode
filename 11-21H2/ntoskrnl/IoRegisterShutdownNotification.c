/*
 * XREFs of IoRegisterShutdownNotification @ 0x14084DF00
 * Callers:
 *     sub_1406107C0 @ 0x1406107C0 (sub_1406107C0.c)
 *     sub_140B229D0 @ 0x140B229D0 (sub_140B229D0.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403D23B8 @ 0x1403D23B8 (sub_1403D23B8.c)
 *     sub_14084DF74 @ 0x14084DF74 (sub_14084DF74.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi

  Pool2 = ExAllocatePool2(64LL, 24LL, 1750298441LL);
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 16) = DeviceObject;
  ObfReferenceObject(DeviceObject);
  sub_1403D23B8((__int64 *)&qword_140C46F50, v3);
  DeviceObject->Flags |= 0x800u;
  sub_14084DF74(&stru_140012BF0);
  return 0;
}
