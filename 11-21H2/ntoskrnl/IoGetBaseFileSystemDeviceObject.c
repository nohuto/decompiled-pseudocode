/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x140288630
 * Callers:
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     sub_1409465D0 @ 0x1409465D0 (sub_1409465D0.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetBaseFileSystemDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  PVPB v3; // rax

  Vpb = FileObject->Vpb;
  if ( !Vpb || (result = Vpb->DeviceObject) == 0LL )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      return FileObject->DeviceObject;
    v3 = FileObject->DeviceObject->Vpb;
    if ( !v3 )
      return FileObject->DeviceObject;
    result = v3->DeviceObject;
    if ( !result )
      return FileObject->DeviceObject;
  }
  return result;
}
