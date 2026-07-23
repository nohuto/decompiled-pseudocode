/*
 * XREFs of sub_1409D57BC @ 0x1409D57BC
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_1409D5860 @ 0x1409D5860 (sub_1409D5860.c)
 *     sub_1409D64F8 @ 0x1409D64F8 (sub_1409D64F8.c)
 *     sub_1409D69A8 @ 0x1409D69A8 (sub_1409D69A8.c)
 *     sub_1409D790C @ 0x1409D790C (sub_1409D790C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     IoUnregisterPlugPlayNotification @ 0x1406E78B0 (IoUnregisterPlugPlayNotification.c)
 *     sub_1409D6428 @ 0x1409D6428 (sub_1409D6428.c)
 */

BOOLEAN __fastcall sub_1409D57BC(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // di
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)(a1 + 32);
  v4 = v2;
  if ( v3 )
    IoUnregisterPlugPlayNotification(v3);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    sub_1409D6428(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(_PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    SeFreePrivileges(v8);
  return IoSetThreadHardErrorMode(v4);
}
