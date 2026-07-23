/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x14084DE80
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403D23B8 @ 0x1403D23B8 (sub_1403D23B8.c)
 *     sub_14084DF74 @ 0x14084DF74 (sub_14084DF74.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *Pool2; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1750298441LL);
  if ( !Pool2 )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  Pool2[2] = DeviceObject;
  sub_1403D23B8((__int64 *)&qword_140C46F60, Pool2);
  DeviceObject->Flags |= 0x800u;
  sub_14084DF74(&stru_140012BE0);
  return 0;
}
