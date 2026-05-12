/*
 * XREFs of sub_1C0062760 @ 0x1C0062760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0040BC4 @ 0x1C0040BC4 (sub_1C0040BC4.c)
 */

void __fastcall sub_1C0062760(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID DeviceExtension; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  char v6; // r8

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Context + 1) + 184LL) + 8LL);
  v5 = sub_1C0040BC4((__int64)DeviceExtension + 656, *(_DWORD *)(v4 + 20));
  v6 = 1;
  if ( v5 == 258 )
    v6 = 9;
  *(_BYTE *)(v4 + 3) = v6;
  sub_1C0003440(*((PIRP *)Context + 1), 0, v5);
  sub_1C000729C((__int64)DeviceExtension);
}
