/*
 * XREFs of sub_1406C7B5C @ 0x1406C7B5C
 * Callers:
 *     sub_1406C78D4 @ 0x1406C78D4 (sub_1406C78D4.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

__int64 __fastcall sub_1406C7B5C(struct _FILE_OBJECT *Object)
{
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  PFAST_IO_QUERY_BASIC_INFO FastIoQueryBasicInfo; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  char v7; // r14
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  DriverObject = IoGetRelatedDeviceObject(Object)->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return sub_14070FC40(Object, (__int64)&v9);
  FastIoQueryBasicInfo = FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return sub_14070FC40(Object, (__int64)&v9);
  v5 = (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DriverObject) ? sub_140A8A9AC() : 0LL;
  v6 = Object->Flags >> 1;
  LOBYTE(v6) = (Object->Flags & 2) != 0;
  v7 = sub_14042A5E0(Object, v6);
  if ( v5 )
    sub_140A8A8D4(v5, FastIoQueryBasicInfo);
  if ( v7 )
    return 0LL;
  else
    return sub_14070FC40(Object, (__int64)&v9);
}
